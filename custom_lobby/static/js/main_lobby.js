//main_lobby.js
// NOTA! o Coherent UI GT funciona sobre a base  JS ES5 (2009)
// <(´=⩊=`)>

var serverList = 
    [
        {
            name: "AS - Asia Server",
            description: "Asia Server",
            //ip: "218.93.206.88:52525"
        },
        {
            name: "NA - North American",
            description: "North Amercian Server",
            //ip: "40.124.122.51:8888"
        },
        {
            name: "OCE",
            //ip: "119.17.151.38:8888"
        },
        {
            name: "SA - South America",
            description: "Possivel Brasil sil",
            //ip: "pubgsabrasil.servegame.com:8888"
        },
        {
            name: "EU - N",
            //ip: "playerunknownsbattlegrounds.asuscomm.com:8888"
        },
        {
            name: "xxMrYashXX",
            ip: "147.185.221.27:14545"
        },
        {
            name: "LOCALHOST - 127.0.0.1",
            description: "connect to localhost",
            ip: "127.0.0.1:7777"

        }
    ]

var routers = 
    [
        {
            name: "PLAY",
            active: true,
            child: 
                [
                    {
                        name: "PUBLIC MATCH",
                        active: true,
                    },
                    {
                        name: "TRAINING MODE",
                        active: false,
                    },
                    {
                        name: "CUSTOM MATCH",
                        active: false,
                    }
                ]
        },
        {
            name: "CUSTOMIZE",
            active: false,
            child: 
                [
                    {
                        name: "WARDROBE",
                        active: true,
                    },
                    {
                        name: "WEAPONS",
                        active: false,
                    },
                    {
                        name: "GEAR",
                        active: false,
                    },
                    {
                        name: "EMOTES",
                        active: false,
                    },
                    {
                        name: "APPEARANCE",
                        active: false,
                    }
                ]
        },
        {
            name: "STORE",
            active: false,
            
        },
        {
            name: "SOCIAL",
            active: false,
            child: 
                [
                    {
                        name: "PROFILE",
                        active: true,
                    },
                    {
                        name: "FRIENDS",
                        active: false,
                    },
                    {
                        name: "RANK",
                        active: false,
                    }
                ]
            
        }
    ]

    /*
        function selectServer(val) 
        {
            app.server = val;
            updateServerStatus();
        }
    */    
        function getServerByName(serverName) 
        {
            return serverList.find(function (item) 
            {
                return item.name === serverName;
            });
        }

        function selectServer(server) 
        {
            app.currentServer = server;
            if (server.name == "AS") 
            {
                $.ajax({
                    url: "GetPlayerNum?region=ASIA",
                    type: "GET",
                    dataType: "text",
                    success: function (data) 
                    {
                        app.playerCountInfo = data;
                    }
                })
            }
            // updateServerStatus();
        }

        function joinServer() 
        {
            try 
            { // - DOC - ("JoinToDedicatedServer", function (serverAddress, udpEncryptionKey) 
                
                //$("#join-server-text").text('Joining...');
                $("#join-server-hint").text("Trying: " + app.currentServer.ip);
                engine.trigger('PlaySound', 'Play_UI_ClickPlay');
                engine.trigger('JoinToDedicatedServer', app.currentServer.ip, "");
            } 
            catch(e) 
            {
                $("#join-server-text").text(e);
            }
        }




var app;

var authData = null;

// Simula async engine.call (pode já ser uma promise)
function getAuthData(callback) 
{

    /*
        authData.debugInfo = "info:" + JSON.stringify(r);
        authData.userSerial = r.userSerial;
        authData.Player = r.userSerial.toString().split('-')[0];
        authData.gameVersion = r.fullGameVersion;
        authData.playerNetId = r.playerNetId;
        authData.uID = r.id;

    */
    if (typeof engine !== "undefined") 
    {
        var result = engine.call('GetClientAuthData');
        result.then(function (r) 
        {
            authData = r;
            callback(r);
        });
    } 
    else 
    {
        callback(null);
    }
}

function initVue()
{
    
    /*// Simulando engine.call
    if(typeof engine !== "undefined") 
    {

        var result = engine.call('GetClientAuthData');
        result.then(function (r) 
        {
            app.debugInfo = "info:" + JSON.stringify(r);
            app.userSerial = r.userSerial;
            app.Player = r.userSerial.toString().split('-')[0];
            app.gameVersion = r.fullGameVersion;
            app.playerNetId = r.playerNetId;
            app.uID = r.id;

        });
    }*/


    app = new Vue(
    {
        el: '#app',
        data: function() 
        {
            // Garante que tudo está inicializado (ou cria objetos vazios se não estiverem)
            /*return {
                serverList: typeof serverList !== 'undefined' ? serverList : [],
                //Player: "player",
                Player: "player",
                userSerial: "userSerial",
                currentServer: typeof serverList !== 'undefined' && serverList.length > 0 ? serverList[0] : null,
                debugInfo: "Here is debugInfo",
                isDebug: false,
                routers: typeof routers !== 'undefined' ? routers : [],
                currentRouter: typeof routers !== 'undefined' && routers.length > 0 ? routers[0] : null,
                playerCountInfo: "Wait for Update",
                gameVersion: ""
            };
        },*/
            return {
                serverList: typeof serverList !== 'undefined' ? serverList : [],
                Player: authData ? authData.userSerial.toString().split('-')[0] : "player",
                userSerial: authData ? authData.userSerial : "userSerial",
                currentServer: typeof serverList !== 'undefined' && serverList.length > 0 ? serverList[0] : null,
                //debugInfo: authData ? "info:" + JSON.stringify(authData) : "debug info not loaded",
                debugInfo: "Here is debugInfo",
                isDebug: false,
                routers: typeof routers !== 'undefined' ? routers : [],
                currentRouter: typeof routers !== 'undefined' && routers.length > 0 ? routers[0] : null,
                playerCountInfo: "Wait for Update",
                gameVersion: authData ? authData.fullGameVersion : ""
            };
        },
        methods: 
        {
            selectServer: selectServer,
            joinServer: joinServer,
            getServerByName: getServerByName,
            
            // Compatível com ES5 (Coherent)
            setRouter: function(router) 
            {
                var i;

                // Desativa todos
                if(this.routers && this.routers.length > 0) 
                {
                    for (i = 0; i < this.routers.length; i++) 
                    {
                        this.routers[i].active = false;
                    }
                }

                router.active = true;
                this.currentRouter = router;

                // Ativa primeiro filho se houver
                if(router.child && router.child.length > 0) 
                {
                    for (i = 0; i < router.child.length; i++) 
                    {
                        router.child[i].active = false;
                    }
                    router.child[0].active = true;
                }

                this.navigateTo(router.name);
            },

            setSubRouter: function(subrouter) 
            {
                var i;
                if (!this.currentRouter || !this.currentRouter.child) return;

                for (i = 0; i < this.currentRouter.child.length; i++) 
                {
                    this.currentRouter.child[i].active = false;
                }

                subrouter.active = true;

                this.navigateTo(this.currentRouter.name + " > " + subrouter.name);
            },

            navigateTo: function(routeName) 
            {
                console.log("SPA Navegando para:", routeName);
            },
            
            getActiveSubrouterName: function () 
            {
                if (!this.currentRouter || !this.currentRouter.child) return null;

                for (var i = 0; i < this.currentRouter.child.length; i++) 
                {
                    if (this.currentRouter.child[i].active) 
                    {
                        return this.currentRouter.child[i].name;
                    }
                }

                return null;
            },

            call_PLAY_PUBLIC_MATCH: function () 
            {
                
                setTimeout(function () {PLAY_PUBLIC_MATCH();}, 0);
                return true; // para o v-if funcionar
            },
            call_PLAY_CUSTOM_MATCH: function () 
            {
                setTimeout(function () {PLAY_CUSTOM_MATCH();}, 0);
                return true; // para o v-if funcionar
            },

            call_CUSTOMIZE_WARDROBE: function () // CUSTOMIZE > WARDROBE
            {
                setTimeout(function () {CUSTOMIZE_WARDROBE();}, 0);
                return true; // para o v-if funcionar
            },

            call_CUSTOMIZE_APPEARANCE: function () // CUSTOMIZE > APPEARANCE
            {
                setTimeout(function () {CUSTOMIZE_APPEARANCE();}, 0);
                return true; // para o v-if funcionar
            },

            call_STORE: function () // CUSTOMIZE > WARDROBE
            {
                setTimeout(function () {LOBBY_STORE();}, 0);
                return true; // para o v-if funcionar
            },

            //testOutputsDebug
            call_testOutputsDebug: function () // CUSTOMIZE > WARDROBE
            {
                setTimeout(function () {testOutputsDebug();}, 0);
                return true; // para o v-if funcionar
            },
            call_clearDebug: function () // CUSTOMIZE > WARDROBE
            {
                setTimeout(function () {clearDebug();}, 0);
                return true; // para o v-if funcionar
            },


        }
    });


    
};




window.onload = function() 
{
    // starts visual components only after data is loaded.
    getAuthData(function (data) 
    {
        initVue();
        initLobby();
    });
};


         console.log("Yes");
        
        /*
        function joinDiscord() {
            engine.trigger('OpenExternalBrowser', '../discord.com/invite/UMhffXUVpm.html');
        }*/

        function debug(msg) 
        {
            var output = document.getElementById("output");
            if(output) 
            {
                output.innerHTML += msg + "<br>";
                output.scrollTop = output.scrollHeight; // rolar para o fim automaticamente
            }
        }

        function clearDebug() 
        {
            var output = document.getElementById("output");
            if (output) output.innerHTML = "";
        }



        function testOutputsDebug()
        {


            //debug(app.playerNetId);
            //debug(app.gameVersion);
            debug(authData.fullGameVersion);
        }



        // Monta a mensagem e insere no DOM
        //var alertText = "Your client version is ( " + config.gameVersion + ".X )  Please exit the game and update to ( " + config.verreq + ".X ) <- to join game.";
        //document.getElementById("client-version-alert").textContent = alertText;


        function compareVersions(v1, v2) // compare difference of game versions
        {
            var a = v1.split('.').map(Number);
            var b = v2.split('.').map(Number);

            var len = Math.max(a.length, b.length);
            for (var i = 0; i < len; i++) 
            {
                var num1 = a[i] || 0;
                var num2 = b[i] || 0;
                if (num1 < num2) return -1;
                if (num1 > num2) return 1;
            }
            return 0; // are same
        }


        function initLobby() 
        {
            console.log("test initLobby()");

            if (compareVersions(authData.fullGameVersion, broConfiguration.verreq) < 0) 
            {
                var alertText = "Your client version is ( " + 
                                //config.gameVersion + 
                                authData.fullGameVersion + 
                                //".X )  Please exit the game and update to -> " 
                                " )  Some Features May Be Unavailable, Recommended Version ( " 
                                + broConfiguration.verreq + 
                                ".X ) or higher";


                document.getElementById("client-version-alert").textContent = alertText;
            }
        
            

            createRole(); 

            setTimeout(function() 
            {
                
                
                document.querySelector('.pubg-splash-lpc').style.display = 'none';
                document.getElementById('app').classList.add('show');
            }, 4000);
            
            //engine.trigger('LobbyLoadingComplete'); 


        }

        function createRole() 
        {
            console.log("test createRole()");


            

            // camera
        
            // - LOBBY VIEW PLAY

            //engine.trigger('CameraTransitionHome'); // equals a lobby 0, singleplayer : 'CameraTransitionSolo'
            //engine.trigger('CameraTransitionPlay'); // same ? equals a lobby 0;

            //engine.trigger('CameraTransitionSolo');  // 1 - shows lobby character 0 only
            //engine.trigger('CameraTransitionDuo');   // 2 - move camera for 2 players in lobby
            engine.trigger('CameraTransitionSquad'); // 4 - move camera for 4 players in lobby

            //engine.trigger('CameraTransitionCustomMatch'); // move camera to car and blur , custom match
            //engine.trigger('CameraTransitionCareer'); // same the same as custom match , CameraTransitionCustomMatch
            //engine.trigger('CameraTransitionLeaderboard');  // same the same as custom match , CameraTransitionCustomMatch

            // - CUSTOMIZE 

            //engine.trigger('CameraTransitionCustomWardrobe'); // Invetory , camera, or shop

            //engine.trigger('CameraTransitionCreateCharacter'); // change camera to character creatin
            //engine.trigger('CameraTransitionCustomAppearance'); // customize character, hair, faces, gender etc.

            engine.trigger('DestroyLobbyCharacter', 0);
            engine.trigger('DestroyLobbyCharacter', 1);
            engine.trigger('DestroyLobbyCharacter', 2);
            engine.trigger('DestroyLobbyCharacter', 3);

            engine.trigger('CreateLobbyCharacter', 0, false, "", authData.playerNetId);
            engine.trigger('CreateLobbyCharacter', 1, true, "", "playerID1");
            engine.trigger('CreateLobbyCharacter', 2, false, "","playerID2");
            engine.trigger('CreateLobbyCharacter', 3, true, "","playerID3");

            engine.trigger('UpdateLobbyCharacter', 0,
            {
                "Gender": "male" === false,
                "BoolOptions":[],
                "FloatOptions":[],
                "StringOptions":
                [
                    {
                        "First": "Hair",
                        "Second": "A_Hair_A_04"
                    },
                    {
                        "First": "Face",
                        "Second": "F_Face_01"
                    },
                    {
                        "First": "NudeBody",
                        "Second": "F_NudeBody_01"
                    },
                    {
                        "First": "Makeup",
                        "Second": ""
                    },
                ],
                "ItemIds":
                [
                    "401061", // headset
                    "401996", // face
                    "40606001", // red hair
                    "403178",     // torso
                    "404009", // legs
                    "405011",
                ]
            });

            engine.trigger('UpdateLobbyCharacter', 1,
            {
                "Gender":true,
                "BoolOptions":[],
                "FloatOptions":[],
                "StringOptions":
                [
                    {"First":"Hair","Second":"M_Hair_A_01"},
                    {"First":"Face","Second":"M_Face_01"},
                    {"First":"NudeBody","Second":"M_NudeBody_01"},
                ],
                "ItemIds":
                [
                    "403019",
                    //"401991", // complete pubg guy kit
                    "404008", // legs
                    "405011", 
                ]
            });

            engine.trigger('UpdateLobbyCharacter', 2,
            {
                "Gender":true,
                "BoolOptions":[],
                "FloatOptions":[],
                "StringOptions":
                [
                    {"First":"Hair","Second":"F_Hair_B_05"},
                    {"First":"Face","Second":"F_Face_04"},
                    {"First":"NudeBody","Second":"F_NudeBody_04"},
                ],
                "ItemIds":
                [
                    "401035",
                    "402001",
                    "403010",
                    "404007",
                    "3006",
                ]
            });

            engine.trigger('UpdateLobbyCharacter', 3,
            {
                "Gender":true,
                "BoolOptions":[],
                "FloatOptions":[],
                "StringOptions":
                [
                    {"First":"Hair","Second":"M_Hair_C_04"},
                    {"First":"Face","Second":"M_Face_06"},
                    {"First":"NudeBody","Second":"M_NudeBody_03"},
                    {"First":"NudeBody","Second":"M_NudeBody_03"},
                ],
                "ItemIds":
                [
                    "402034",   // glasses
                    "403184",   // jacket
                    "3005",     // legs
                    "405020",   // foots
                ]
            });

            engine.trigger('UpdateLobbyCharacterRank', 0, 8);
            engine.trigger('SetLobbyCharacterHost', 0); // Change King of group  
            engine.trigger('SetLobbyCharacterReady', 0, true); // Change Ready Status in nick - true or false
            
            checkESCPressed();

        }

        function PLAY_PUBLIC_MATCH()
        {


            // camera
        
            // - LOBBY VIEW PLAY

            //engine.trigger('CameraTransitionHome'); // equals a lobby 0, singleplayer : 'CameraTransitionSolo'
            //engine.trigger('CameraTransitionPlay'); // same ? equals a lobby 0;

            //engine.trigger('CameraTransitionSolo');  // 1 - shows lobby character 0 only
            //engine.trigger('CameraTransitionDuo');   // 2 - move camera for 2 players in lobby
            engine.trigger('CameraTransitionSquad'); // 4 - move camera for 4 players in lobby
        }

        function PLAY_CUSTOM_MATCH()
        {
            // camera
        
            engine.trigger('CameraTransitionCustomMatch'); // move camera to car and blur , custom match
        }


        function CUSTOMIZE_WARDROBE() 
        {
            //engine.trigger('PlaySound', "UI_hall_click");

            engine.trigger('CameraTransitionCustomWardrobe'); // Invetory , camera, or shop
        }

        function CUSTOMIZE_APPEARANCE() 
        {
            engine.trigger('CameraTransitionCustomAppearance'); // customize character, hair, faces, gender etc.
        }

        function LOBBY_STORE() 
        {
            engine.trigger('CameraTransitionCustomWardrobe'); // Invetory , camera, or shop
        }
        
        function LOBBY_SOCIAL() 
        {
            engine.trigger('CameraTransitionCustomWardrobe'); // Invetory , camera, or shop
        }


        function checkESCPressed() 
        {
            window.addEventListener('keydown', function(event) 
            {
                var key = event.key || event.keyCode;

                if (key === 'Escape' || key === 27) 
                {
                    handleEscKeyDown();
                }
            });
        }

        // Função chamada quando ESC for pressionado
        function handleEscKeyDown() 
        {

            // open game menu
            engine.trigger('RequestSystemMenu'); 
  
        }



        /*
        function customMatch_SelectMode(modo) 
        {
            const boxes = document.querySelectorAll('.modo-box');
            boxes.forEach(b => b.classList.remove('ativo'));

            const imagem = document.getElementById('img-modo');
            imagem.classList.add('ativo');

            if (modo === 'NORMAL_MODE') 
            {
                imagem.style.backgroundImage = "url('normal.jpg')";
            }
            
            if (modo === 'ZOMBIE_MODE') 
            {
                imagem.style.backgroundImage = "url('zombie.jpg')";
            }
            
            if (modo === 'WAR_MODE') 
            {
                imagem.style.backgroundImage = "url('war.jpg')";
            }
            
            if (modo === 'ESPORTS_MODE') 
            {
                imagem.style.backgroundImage = "url('esports.jpg')";
            }

            const boxAtivo = Array.from(boxes).find(b => b.textContent.toLowerCase().includes(modo));
            if (boxAtivo) boxAtivo.classList.add('ativo');
        }*/



        
        var mapas = ["TRAINING","ERANGEL", "MIRAMAR", "VIKENDI", "SANHOK", "PERIVERKA", "BODIE"];
        var idxMapa = 0;
        var inGameMapNames = 
        {
            "TRAINING":  "shooting_range4",
            "ERANGEL":   "PUBG_Forest",
            "MIRAMAR":   "PUBG_Desert",
            "SANHOK":    "PUBG_Savage_Main",
            "VIKENDI":   "DihorOtok_Main",
            "PERIVERKA": "PUBG_School_Main",
            "BODIE":     "PUBG_Bodie_Main",
        };

        function atualizarMapa() 
        {
            var mapaElem = document.getElementById("mapaAtual");
            if (mapaElem) 
            {
                // Usar innerHTML em vez de textContent por compatibilidade
                mapaElem.innerHTML = mapas[idxMapa];
            }
        }

        function anteriorMapa() 
        {
            idxMapa = (idxMapa - 1 + mapas.length) % mapas.length;
            atualizarMapa();
        }

        function proximoMapa() 
        {
            idxMapa = (idxMapa + 1) % mapas.length;
            atualizarMapa();
        }

        // camera Perspective Condition

        var custom_match_perspective = ["TPP", "FPP"];
        var indexCameraPerspective_custom_match = 0;

        function updateCameraPerspective_custom_match() 
        {
            var cameraElement = document.getElementById("currentPerspective");
            if(cameraElement) 
            {
                // Usar innerHTML em vez de textContent por compatibilidade
                cameraElement.innerHTML = custom_match_perspective[indexCameraPerspective_custom_match];
            }
        }

        function prevPerspectiveMode() 
        {
            indexCameraPerspective_custom_match = 
                (indexCameraPerspective_custom_match - 1 + 
                    custom_match_perspective.length) % custom_match_perspective.length;
            updateCameraPerspective_custom_match();
        }

        function nextPerspectiveMode() 
        {
            indexCameraPerspective_custom_match = 
                (indexCameraPerspective_custom_match + 1) % custom_match_perspective.length;
            updateCameraPerspective_custom_match();
        }

        // weather Condition Custom Match

        var custom_match_weather = ["CLEAR", "DARK", "OVERCAST"];
        var indexWeather_custom_match = 0;

        function updateWeatherOption() 
        {
            var weatherOpt = document.getElementById("currentWeatherState");
            if(weatherOpt) 
            {
                // Usar innerHTML em vez de textContent por compatibilidade
                weatherOpt.innerHTML = custom_match_weather[indexWeather_custom_match];
            }
        }

        function prevWeatherState() 
        {
            indexWeather_custom_match = (indexWeather_custom_match - 1 + custom_match_weather.length) % custom_match_weather.length;
            updateWeatherOption();
        }

        function nextWeatherState() 
        {
            indexWeather_custom_match = (indexWeather_custom_match + 1) % custom_match_weather.length;
            updateWeatherOption();
        }


        // Player Limit in Custom Match > Create

        function atualizaPlayers(v) 
        {
            document.getElementById('valorPlayers').textContent = v;
        }

        function customMatch_updateTeamMembers(v) 
        {
            document.getElementById('customMatch_MembersValue').textContent = v;
        }
        
        // custom match
        
        /*
            custom match 0.7.0.1 strings map.

            found in main.js lobby function $h(e) 


            MatchStartType  // found in 0.7.0.1 only


            CameraViewBehaviour // found in 0.7.0.1 +
            
            n.StringParameters.push({
                    First: "CameraViewBehaviour",
                    Second: e.FPSOnly ? "FpsOnly" : "FpsAndTps"
                }),

            

            ModePreset // found in 0.7.0.1 only


            PresetName // found in 0.7.0.1 +
            
            StringParameters: [{
                            First: "PresetName",
                            Second: "" + (ng.PRESETS_EXCEPT.find(function(n) 
                            {
                                return n === e.Preset
                            }) ? "" : e.Preset || "")
                        },

            
            BpRewardRowName // found in 0.7.0.1 only

            TeamSize // found in 0.7.0.1 +

                {
                    First: "TeamSize",
                    Second: e.IsPlatoon ? Math.floor(e.MaxPlayers / 2) : e.TeamSize
                },

            
            CanAllSpectate // found in 0.7.0.1 only


            KillerSpectateMode // found in 0.7.0.1 + 

                {
                    First: "KillerSpectateMode",
                    Second: e.KillerSpectating ? "true" : "false"
                },

            
            IsGroggyMode // found in 0.7.0.1 only

            FlareGunIsActive // found in 0.7.0.1 +

                return [{
                            First: "FlareGunIsActive",
                            Second: "" + e.FlareGunIsActive
                        },

            RedZoneIsActive // found in 0.7.0.1 +

                {
                    First: "RedZoneIsActive",
                    Second: "" + e.RedZoneIsActive
                },
    
            MultiplierRedZoneExplosionDensit // found in 0.7.0.1 +

                {
                    First: "MultiplierRedZoneExplosionDensity",
                    Second: "" + e.MultiplierRedZoneExplosionDensity
                },

            
            WarmupTime // found in 0.7.0.1 + theoretically.

                in the lobby code only one variable was found.

                t.WarmupTime = 60, 


            HideNicknameOnKillfeed // found in 0.7.0.1 only


            IsEventMode // found in 0.7.0.1 + theoretically.

                I found several variables, but nothing specific

            



        */

        function joinServerPlay() 
        {
            var mapSelected = mapas[idxMapa];
            var serverMap = inGameMapNames[mapSelected];

            if(!serverMap) 
            {
                debug("Map not found in mapping!");
                return;
            }

            //var ipAddress = serverMap + "?listen";  // montar string no formato esperado
            var ipAddress = serverMap + "?listen?game=/Game/BluePrints/Core/BP_BattleRoyalTrainingGameMode.BP_BattleRoyalTrainingGameMode_C";  // montar string no formato esperado

            engine.trigger('JoinToDedicatedServer', ipAddress, "");
            debug("It looks like the map didn't load: " + serverMap);
        }


        /*
        function joinServerPlay() 
        {
            var ipAddress;

            ipAddress = 'shooting_range4?listen';

            // - DOC      ("JoinToDedicatedServer", function (serverAddress, udpEncryptionKey) 
            engine.trigger('JoinToDedicatedServer', ipAddress, "")

        }*/

        /*  
            make engine sounds

            engine.trigger('PlaySound', "");

                Play_UI_hall_Close
                UI_hall_click
                Play_UI_click3
                Play_UI_hall_BoxOpen
                Play_UI_hall_StartGame

                Play_Lose
                Play_UI_Click
                Play_UI_click2
                Play_UI_click3
                Play_UI_click4
                Play_UI_ClickPlay
                Play_UI_GradingInitial
                Play_UI_GradingOld
                Play_UI_hall_Activity
                Play_UI_hall_boxGet
                Play_UI_hall_BoxOpen
                Play_UI_hall_boxSend
                Play_UI_hall_click_paging
                Play_UI_hall_Close
                Play_UI_hall_CloseFriendsList
                Play_UI_hall_Cloth
                Play_UI_hall_Corps
                Play_UI_hall_CountDown
                Play_UI_hall_DanDown
                Play_UI_hall_DanUP
                Play_UI_hall_Decomposer
                Play_UI_hall_DecomposerCartoon
                Play_UI_hall_FriendsList
                Play_UI_hall_InvitationFriends
                Play_UI_hall_LOGO
                Play_UI_hall_Militaryrank_Upgrade
                Play_UI_hall_OpenFriendsList
                Play_UI_hall_Pattern_close
                Play_UI_hall_Pattern_open
                Play_UI_hall_Question
                Play_UI_hall_Ranking
                Play_UI_hall_RankUP
                Play_UI_hall_Receive
                Play_UI_hall_refuse
                Play_UI_hall_Season
                Play_UI_hall_Set
                Play_UI_hall_Shopping_Get
                Play_UI_hall_SpecialItems
                Play_UI_hall_StartGame
                Play_UI_hall_Story
                Play_UI_hall_Teaching
                Play_UI_hall_Warehouse_paging
                Play_UI_RoyalePassGet
                Play_UI_RoyalePassUp
                Play_UI_Select
                Play_Win
                UI_hall_click
                UI_hall_mailbox
                UI_hall_Return
                UI_hall_Shopping
                UI_hall_Shopping_open
                UI_hall_Warehouse



        */


        //engine.trigger('DestroyLobbyCharacter', 0); // normal PUBG is DestoryLobbyCharacter
        
        //engine.trigger('SetLobbyCharacterAngle', 0, 10); // dont work with camera modes
        
        


        // DOC        ("UpdateLobbyCharacterRank", function (slotIndex, rank) - 
        //engine.trigger('UpdateLobbyCharacterRank', 0, 8); // 0 - 8 | 0 nothing , 8 max level

        //engine.trigger('UpdateTeamMode', ?);  // what is this ?
        //engine.trigger('UpdateCustomMode', ?);  // what is this ?

        // DOC    ("GetWebStore", function (key)
        //engine.?('GetWebStore', ?);
        
        // DOC    ("SetWebStore", function (key, value)
        //engine.?('SetWebStore', ?, ?);

        

        //engine.trigger('SetLobbyCharacterAngle', 1, 100);


        // tests
        
        
        //engine.trigger('SetLobbyCharacterHost', 0); // Change King of group  
        //engine.trigger('SetLobbyCharacterReady', 0, true); // Change Ready Status in nick - true or false

        //engine.trigger('CheckPartyLeaderChange', 'playerID0'); // what is this ? 'CheckPartyLeaderChange', PartyLeaderNickname=%s"

        // camera
        
        // - LOBBY VIEW PLAY

        //engine.trigger('CameraTransitionHome'); // equals a lobby 0, singleplayer : 'CameraTransitionSolo'
        //engine.trigger('CameraTransitionPlay'); // same ? equals a lobby 0;

        //engine.trigger('CameraTransitionSolo');  // 1 - shows lobby character 0 only
        //engine.trigger('CameraTransitionDuo');   // 2 - move camera for 2 players in lobby
        //engine.trigger('CameraTransitionSquad'); // 4 - move camera for 4 players in lobby

        //engine.trigger('CameraTransitionCustomMatch'); // move camera to car and blur , custom match
        //engine.trigger('CameraTransitionCareer'); // same the same as custom match , CameraTransitionCustomMatch
        //engine.trigger('CameraTransitionLeaderboard');  // same the same as custom match , CameraTransitionCustomMatch


        // - CUSTOMIZE 

        //engine.trigger('CameraTransitionCustomWardrobe'); // Invetory , camera, or shop

        //engine.trigger('CameraTransitionCreateCharacter');  // Character Creation Camera
        //engine.trigger('CameraTransitionCustomAppearance'); // customize character, hair, faces, gender etc.




        //engine.trigger('CameraTransitionRewards'); // I don't know if it works

        //engine.trigger('CameraTransitionWatch'); // I don't know if it works

        //engine.trigger('CameraTransitionSettings'); // I don't know if it works



        //engine.trigger('ChangeSceneFromName');  // I don't know if it works

       //engine.trigger('ShowCharacterViewMode'); // I don't know if it works
        
       // engine.trigger('ShowWeaponOrGearViewMode'); // I don't know if it works

        //engine.trigger('RequestSystemMenu'); // open game menu

        //engine.trigger('ShowViewMode'); // I don't know if it works

        //engine.trigger('HideViewMode'); // I don't know if it works

        // DOC          ("AddLobbyViewModeAngle", function (viewType, degreeX)
        //engine.trigger('AddLobbyViewModeAngle', ?, ?); // I don't know if it works

        // DOC          ("AddLobbyViewModeAngleXY", function (viewType, degreeX, degreeY)
        //engine.trigger('AddLobbyViewModeAngleXY', ?, ?, ?); // I don't know if it works

        //engine.trigger('AddLobbyViewModeScale'); // I don't know if it works

        //engine.trigger('ResetViewMode'); // I don't know if it works

        //engine.trigger('ShowCharacterPreview', 1); // I don't know if it works

        //engine.trigger('HideCharacterPreview', 1); //  I don't know if it works

        //engine.trigger('OnStartRotation'); // I don't know if it works

        //engine.trigger('ShowCurtain'); // I don't know if it works

        //engine.trigger('HideCurtain'); // I don't know if it works

        //engine.trigger('EnableSystemMenuButton'); // I don't know if it works

        //engine.trigger('DisableSystemMenuButton'); // I don't know if it works

        // DOC          ("PlayEmoteAnimation", function (emoteItem)
        //engine.trigger('PlayEmoteAnimation', ?); // I don't know if it works

        //engine.trigger('ResetEmoteAnimation'); // I don't know if it works

        // DOC          ("SetLocalUserData", function (key, value)
        //engine.trigger('SetLocalUserData', ?, ?); // I don't know if it works

        //engine.trigger('NotifyLobbyConnecting'); // I don't know if it works

        // DOC          ("SetLobbyCharacterBlur", function (flag)
        //engine.trigger('SetLobbyCharacterBlur', ?); // I don't know if it works

        // DOC          ("UpdateStatTrak", function (killOption, killVisible, numOfKills, headshotKillVisible, numOfHeadshotKill)
        //engine.trigger('UpdateStatTrak', ?, ?, ?, ?, ?); // I don't know if it works

        // ('InputFocusChange', function (isFocusIn) // what this do ?




        

