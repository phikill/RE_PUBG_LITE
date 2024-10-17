// Entry ì— ëŒ€í•œ mock API.
// ë¸Œë¼ìš°ì €ì—ì„œ í…ŒìŠ¤íŠ¸ë¥¼ ìœ„í•´ì„œ ì‚¬ìš©í•œë‹¤.
// ì„¸ë²ˆì§¸ ì¸ìžë¡œ trueê°€ ë“¤ì–´ê°€ë©´ function callì´ë¼ëŠ” ì˜ë¯¸ê³ , ì•„ë‹ˆë©´ triggerì´ë‹¤.
(function () {
    mockMuteState = {};

    function console_log() {
        console.log("%c[EGN] " + arguments[0], "color: #088;", Array.prototype.slice.call(arguments, 1));
    }

    engine.mock("GetLobbyUrl", function ()
    {
            return "http://localhost:23847";
    },true);

    engine.mock("GetClientAuthData", function () 
    {
            var getUriParameterByName = function (name, url) {
                if (!url) {
                    url = window.location.href;
                }
                name = name.replace(/[\[\]]/g, "\\$&");
                var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)"),
                    results = regex.exec(url);
                if (!results) {
                    return null;
                }
                if (!results[2]) {
                    return "";
                }
                return decodeURIComponent(results[2].replace(/\+/g, " "));
            };

            var fullClientGameVersion = "1.2.3.4";
            var rst = {
                platformType: "None",
                userSerial: "76561198031450358",
                fullGameVersion: fullClientGameVersion,
                //+ Math.floor((Math.random() * 100) + 1),
            };

            var appid = getUriParameterByName("appid");
            if (appid != null || getUriParameterByName("provider") === "epic") {
                rst.appId = appid;
                rst.accessToken = getUriParameterByName("token");
            } else {
                rst.app = "bro";
                rst.provider = "bro";
                var id = getUriParameterByName("id");
                if (id) {
                    rst.id = id;
                }
            }
            rst.playerNetId =
                getUriParameterByName("netid") || rst.id || "NetId_" + Math.floor(Math.random() * 1000000);

            console_log(rst);

            return rst;
        },true);

    engine.mock("GetDisplayResoultions", function () {
            return [
                {X: 1024,Y: 768,},
                {X: 1280,Y: 1024,},
                {X: 1920,Y: 1024,},
            ];
        },true);

    engine.mock("GetCurrentOptions", function () 
    {
            return 
            {
                resolution: "1280x1024",
                //resolution: '1280x124',
                quality: "Low",
                fullscreen: "true",
                gamma: "20",
                aim: "20",
                invertY: "false",
            };
        },true);

    engine.mock("GetMapNames", function () {
            return ["Sanctuary", "Highrise"];
        },true);

    engine.mock("GetJoinMapNames", function () 
    {
        return ["Any", "Sanctuary", "Highrise"];
    },true);

    engine.mock("GetSearchServerResult", function () 
    {
            return {
                bFinish: true,
                statusText: "Status message",
                entryList: [
                    {
                        serverName: "Server1",
                        currentPlayers: 5,
                        maxPlayers: 12,
                        gameType: "FFA",
                        mapName: "TestMap",
                        ping: 201,
                        searchResultsIndex: 0,
                    },
                    {
                        serverName: "Server2",
                        currentPlayers: 15,
                        maxPlayers: 22,
                        gameType: "FFA",
                        mapName: "TestMap2",
                        ping: 101,
                        searchResultsIndex: 1,
                    },
                ],
            };
        },true);

    engine.mock(
        "CheckXYInstalledAndExecute",
        function (r, args) {
            console_log("checkxy");
            return false;
        },
        true
    );

    var gameVersion = "1.2.3";
    engine.mock(
        "GetGameVersion",
        function () {
            return gameVersion;
        },
        true
    );

    engine.mock("SetGameVersion", function (version) {
        gameVersion = version;
        return version;
    });

    engine.mock(
        "checkNetBarCn",
        function (u) {
            return true;
        },
        true
    );

    engine.mock(
        "getNetBarToken",
        function (id) {
            return true;
        },
        true
    );

    engine.mock(
        "OpenExternalBrowser",
        function (u) {
            window.open(u);
            console_log("Engine", u);
        },
        true
    );

    engine.mock(
        "GetLocalUserData",
        function (key) {
            return window.localStorage[key];
        },
        true
    );

    engine.mock(
        "GetEmail",
        function () {
            return "no-reply@bluehole.net";
        },
        true
    );

    ///////////////////////////////////////////////////////////////////////////////
    // ì—¬ê¸°ì„œ ë¶€í„° ì´ë²¤íŠ¸.
    engine.mock("SetLocalUserData", function (key, value) {
        window.localStorage[key] = value;
    });

    engine.mock("Quit", function () {
        console_log("engine received Quit!!!!");
    });

    engine.mock("UpdateOptions", function (options) {
        console_log("engine received options");
        console_log(options);
    });

    engine.mock("StartHost", function (options) {
        console_log("engine received StartHost");
        console_log(options);
    });

    engine.mock("StartSearchJoin", function (options) {
        console_log("engine received StartSearchJoin");
        console_log(options);

        window.setTimeout(function () {
            engine.trigger("BeginServerSearch");
        }, 1000);
    });

    engine.mock("JoinToServer", function (serverIndex) {
        console_log("engine received JoinToServer");
        console_log(serverIndex);
    });

    engine.mock("JoinToDedicatedServer", function (serverAddress, udpEncryptionKey) {
        console_log("engine received JoinToDedicatedServer:" + serverAddress + udpEncryptionKey);
    });

    engine.mock("InputFocusChange", function (isFocusIn) {
        console_log("engine received InputFocusChange:" + isFocusIn);
    });

    engine.mock("UdpPingTest", function (addr, interval, count) {
        udpPingTest(addr, interval, count);
    });

    engine.mock("UdpPingTestThread", function (addr, interval, count) {
        udpPingTest(addr, interval, count);
    });

    engine.mock("AddLobbyViewModeAngle", function (viewType, degreeX) {
        console_log("add lobby view mode angle xy", viewType, degreeX);
    });

    engine.mock("AddLobbyViewModeAngleXY", function (viewType, degreeX, degreeY) {
        console_log("add lobby view mode angle xy", viewType, degreeX, degreeY);
    });

    engine.mock("ShowCurtain", function () {
        console_log("show curtain");
    });

    engine.mock("HideCurtain", function () {
        console_log("hide curtain");
    });

    engine.mock("ShowItemViewModeWithSceneTravel", function (sceneName, category, previewParameter, sceneMoveOption) {
        console_log(
            "show item view mode with scene travel",
            sceneName,
            category,
            JSON.stringify(previewParameter),
            sceneMoveOption
        );
    });

    engine.mock("ChangeSceneFromNameWithSceneTravel", function (sceneName, sceneMoveOption) {
        console_log("ChangeSceneFromNameWithSceneTravel", sceneName, sceneMoveOption);
    });

    engine.mock("ChangeSceneWithLobbyCustomizing", function (sceneName, lobbyCustomizingDatas, sceneMoveOption) {
        console_log("ChangeSceneWithLobbyCustomizing", sceneName, lobbyCustomizingDatas, sceneMoveOption);
    });

    engine.mock("UpdateCustomizeLobbyScene", function (lobbyCustomizingDatas) {
        console_log("UpdateCustomizeLobbyScene", lobbyCustomizingDatas);
    });

    engine.mock("HandleParticipantMute", function (uid, mute) {
        console_log("HandleParticipantMute", uid, mute);
        mockMuteState[uid] = mute;
    });

    engine.mock(
        "IsParticipantMute",
        function (uid) {
            console_log("IsParticipantMute", uid);
            const ret = mockMuteState[uid];
            return ret === undefined ? false : ret;
        },
        true
    );

    function udpPingTest(addr, interval, count) {
        const pings = {
            "18.136.198.141:31112": 200,
            "13.251.110.6:31112": 200,
            "52.77.210.211:31112": 200,
            "52.78.100.116:31112": 10,
            "13.125.200.121:31112": 10,
            "106.10.36.136:31112": 10,
        };
        const target = pings[addr] || 800;
        setTimeout(function () {
            console.log(`MOCK UdpPingTestResult - ${addr}`);
            engine.trigger("UdpPingTestResult", addr, (1 + Math.random() / 5) * target, 100);
        }, 1200);
        let x = 0;
        const id = setInterval(() => {
            if (x >= count - 1) {
                clearInterval(id);
            }
            console.log(`MOCK UdpPingTestIteration - ${addr}`);
            engine.trigger("UdpPingTestIteration", addr, x++, (1 + Math.random() / 5) * target);
        }, interval * 1000);
    }

    // functions for debugging skin in browser {{{
    var debugSkin = true;
    var slots = [];
    var update = 0;

    function resizeSlot(newSize) {
        if (newSize > slots.length) {
            while (newSize > slots.length) {
                slots.push(null);
            }
        }
    }

    function updateDebugView(slots) {
        var visible = false;
        for (var i = 0; i < slots.length; ++i) {
            if (slots[i]) {
                visible = true;
            }
        }
        var txt = "updates: " + update + "<br/>\n";
        for (var i = 0; i < slots.length; ++i) {
            if (slots[i]) {
                var s = slots[i];
                var o = slots[i].o;
                var n = slots[i].n;
                if (n && typeof n !== "undefined") {
                    txt += "[" + n + "],";
                }
                txt += "[" + i + "]:" + s.g;
                if (o) {
                    txt += ":" + (o.Gender ? "M" : "F");
                    var so = o.StringOptions;
                    for (var j = 0; j < so.length; ++j) {
                        txt += ":" + so[j].Second;
                    }
                    if (o.ItemIds) {
                        txt += "<br/>";
                        for (var k = 0; k < o.ItemIds.length; ++k) {
                            var id = o.ItemIds[k];
                            var re = /Item_(\w+)/;
                            var rst = re.exec(id);
                            if (rst == null) {
                                txt += ":..." + o.ItemIds[k].substr(-20);
                            } else {
                                txt += ":" + rst[1];
                            }
                        }
                    }
                }
                txt += "<br/>\n";
            }
        }
        var elem = document.getElementById("char_debugger");
        if (elem) {
            if (visible) {
                elem.innerHTML = txt;
            } else {
                elem.innerHTML = "";
            }
        }
    }
    // functions for debugging skin in browser }}}

    engine.mock("CreateLobbyCharacter", function ({ SlotIndex, IsGenderMale, NetId, NickName }) {
        if (debugSkin) {
            update++;
            resizeSlot(SlotIndex + 1);
            slots[SlotIndex] = {
                n: NickName,
                g: IsGenderMale == true ? "M" : "F",
                o: null,
            };
        }
        console_log("engine received CreateLobbyCharacter:" +
                SlotIndex +
                ", isGenderMale:" +
                IsGenderMale +
                ", netId:" +
                NetId +
                ", nickName:" +
                NickName
        );
        updateDebugView(slots);
    });

    engine.mock("UpdateLobbyCharacter", function (slotIndex, options) {
        if (debugSkin && slots[slotIndex]) {
            update++;
            slots[slotIndex].o = options;
            console_log("engine received UpdateLobbyCharacter:" + slotIndex, options);
        }
        updateDebugView(slots);
    });

    engine.mock("UpdateLobbyPose", function (slotIndex, lobbyPoseItem, poseUsingType, skinItemIds) {
        console_log("engine received UpdateLobbyPose:" + slotIndex, lobbyPoseItem, poseUsingType, skinItemIds);
        updateDebugView(slots);
    });

    engine.mock("UpdateLobbyCharacterRank", function (slotIndex, rank) {
        console_log("engine received UpdateLobbyCharacterRank:" + slotIndex, rank);
        updateDebugView(slots);
    });

    engine.mock("CreateLobbyCharacters", function (CharacterInfoArray) {
        if (debugSkin) {
            resizeSlot(4);
        }
        CharacterInfoArray.forEach((character) => {
            if (debugSkin) {
                slots[character.SlotIndex] = {
                    n: character.NickName,
                    g: character.IsGenderMale === true ? "M" : "F",
                    o: null,
                };
            }
            console_log(
                "engine CreateLobbyCharacters info received: ",
                character.NickName,
                character.SlotIndex,
                character.IsGenderMale,
                character.NetId,
                character.PlatformProvider
            );
        });
        updateDebugView(slots);
    });

    engine.mock("SMShowBanner", function (bannerId, level, engineCharacterInfo) {
        console_log("engine received SMShowBanner:" + bannerId, level, JSON.stringify(engineCharacterInfo));
        updateDebugView(slots);
    });

    engine.mock("SMShowBannerWithPose", function (lobbyPoseItem, poseUsingType, bannerId, level, engineCharacterInfo) {
        console_log(
            "engine received SMShowBannerWithPose:" + lobbyPoseItem,
            poseUsingType,
            bannerId,
            level,
            engineCharacterInfo
        );
        updateDebugView(slots);
    });

    engine.mock("UpdateRankedSmokeColor", function (rankTitle) {
        console_log("engine received UpdateRankedSmokeColor:" + rankTitle);
        updateDebugView(slots);
    });
    engine.mock("WMShowWeapon", function (weaponId, charmId, skinId, variantId) {
        console_log("engine received WMShowWeapon showMasteryWeapon:" + weaponId, charmId, skinId, variantId);
        updateDebugView(slots);
    });

    engine.mock("WMHideWeapon", function () {
        console_log("engine received WMHideWeapon");
    });

    engine.mock("WMResetWeapon", function () {
        console_log("engine received WMResetWeapon");
    });

    engine.mock("DestoryLobbyCharacter", function (slotIndex) {
        if (debugSkin) {
            update++;
            slots[slotIndex] = null;
            console_log("engine received DestoryLobbyCharacter:" + slotIndex);
        }
        updateDebugView(slots);
    });

    engine.mock("SetLobbyCamera", function (pos) {
        console_log("engine received SetLobbyCamera:", pos);
    });

    engine.mock("ShowWebPageOnPlatform", function (url) {
        window.open(url, "_blank");
    });

    engine.mock("openSteamOverlayBrowser", function (url) {
        window.open(url, "_blank");
    });

    engine.mock("IsSteamOverlayEnabled", function () {
        return true;
    });

    engine.mock("ShowWebPopup", function (popup) {
        window.open(popup.uri, popup.popupId);
    });

    engine.mock("PlaySound", function (soundName) {
        console_log("PlaySound", soundName);
    });

    engine.mock("ShowLobbyCharacterRank", function (slot, tier, division) {
        console_log("ShowLobbyCharacterRank", slot, tier, division);
    });

    engine.mock("UpdateLobbyCharacterPubgId", function (slotIndex, option) {
        console_log("UpdateLobbyCharacterPubgId", slotIndex, option);
    });

    engine.mock("HideLobbyCharacterRank", function (slot) {
        console_log("HideLobbyCharacterRank", slot);
    });

    /* CAMERA TRANSITION */
    engine.mock("CameraTransitionCreateCharacter", function () {
        console_log("CameraTransitionCreateCharacter");
    });

    engine.mock("CameraTransitionHome", function () {
        console_log("CameraTransitionHome");
    });

    engine.mock("CameraTransitionPlay", function () {
        console_log("CameraTransitionPlay");
    });

    engine.mock("CameraTransitionCustomWardrobe", function () {
        console_log("CameraTransitionCustomWardrobe");
    });

    engine.mock("CameraTransitionCustomAppearance", function () {
        console_log("CameraTransitionCustomAppearance");
    });

    engine.mock("CameraTransitionRewards", function () {
        console_log("CameraTransitionRewards");
    });

    engine.mock("CameraTransitionCareer", function () {
        console_log("CameraTransitionCareer");
    });

    engine.mock("CameraTransitionLeaderboard", function () {
        console_log("CameraTransitionLeaderboard");
    });

    engine.mock("CameraTransitionWatch", function () {
        console_log("CameraTransitionWatch");
    });

    engine.mock("CameraTransitionSettings", function () {
        console_log("CameraTransitionSettings");
    });

    engine.mock("CameraTransitionSolo", function () {
        console_log("CameraTransitionSolo");
    });

    engine.mock("CameraTransitionDuo", function () {
        console_log("CameraTransitionDuo");
    });

    engine.mock("CameraTransitionSquad", function () {
        console_log("CameraTransitionSquad");
    });

    engine.mock("ShowCharacterViewModeExWithSceneTravel", function (sceneName, options, cameraType, sceneMoveOption) {
        console_log("ShowCharacterViewModeExWithSceneTravel", sceneName, options, cameraType, sceneMoveOption);
    });

    engine.mock("SetCharacterViewModeCamera", function (cameraType) {
        console_log("SetCharacterViewModeCamera", cameraType);
    });

    engine.mock("SetClientLeagueType", function (leagueType) {
        console_log("SetClientLeagueType", leagueType);
    });

    engine.mock("SetLobbyCharacterReady", function (slotIndex, isReady) {
        console_log("SetLobbyCharacterReady", slotIndex, isReady);
    });

    engine.mock("SetLobbyCharacterHost", function (slotIndex) {
        console_log("SetLobbyCharacterHost", slotIndex);
    });

    engine.mock("SetLobbyCharacterLogout", function (slotIndex, logout) {
        console_log("SetLobbyCharacterLogout", slotIndex, logout);
    });

    engine.mock("EnableSystemMenuButton", function () {
        console_log("EnableSystemMenuButton");
    });

    engine.mock("DisableSystemMenuButton", function () {
        console_log("DisableSystemMenuButton");
    });

    engine.mock("UpdateTeamMode", function (mode) {
        console_log("UpdateTeamMode", mode);
    });

    engine.mock("UpdateCustomMode", function (mode) {
        console_log("UpdateCustomMode", mode);
    });

    engine.mock("SetLobbyCharacterBlur", function (flag) {
        console_log("SetLobbyCharacterBlur", flag);
    });

    engine.mock("PlayEmoteAnimation", function (emoteItem) {
        console_log("PlayEmoteAnimation", emoteItem);
        setTimeout(() => {
            engine.trigger("OnEmoteAnimationEnded", emoteItem);
        }, 2000);
    });

    engine.mock("ResetEmoteAnimation", function () {
        console_log("ResetEmoteAnimation");
        engine.trigger("OnEmoteAnimationEnded");
    });

    var lang = "en";
    engine.mock("GetCurrentCultureName", function () {
        return lang;
    });

    engine.mock("GetOsLanguage", function () {
        var lang = navigator.language;
        console_log("GetOsLanguage", lang);
        if (lang) {
            return lang;
        } else {
            return "ko-KR";
        }
    });

    engine.mock("RequestSystemMenu", function () {
        console_log("RequestSystemMenu");
    });

    engine.mock("OpenExternalBrowser", function (url) {
        console_log("OpenExternalBrowser", url);
        window.open(url);
    });

    engine.mock("GetUserCommunicationPrivilege_Console", function () {
        return {
            communicationPrivilege_Multiplay: 0,
            communicationPrivilege_CrossPlay: 0,
        };
    });

    engine.mock(
        "IsFreeTrialVersion",
        function () {
            return false;
        },
        true
    );

    engine.mock("GetReportedInfos", function () {
        return [
            {
                matchId:
                    "match.bro.official.pc-2018-12.steam.solo.krjp.2021.09.29.06.768785b5-5374-48b0-9e59-375a2c168db6",
                userInfo: {
                    playerName: "Dnigilh",
                    clanName: "",
                    streamerFakeName: "",
                    netId: "AINetID:Dnigilh_276",
                    accountId: "ai.276",
                    teamId: 277,
                    subjectToReport: "Killer",
                    playerPlatform: "Unknown",
                    aIType: "CommonAI",
                },
                reporterInfo: {
                    accountId: "account.a4045059a21e490e91acc017d2922b04",
                    playerName: "cannalee12001",
                    teamId: 100000,
                },
                cause: "VerbalHarassment",
                detailCauseList: [],
                reportedSessionType: "PublicOrCustomGame",
                matchElapsedTimeSec: 166.67092895507812,
                bIsKilledByReportedUser: true,
                bIsDBNOedByReportedUser: false,
                damagedAmountByReportedUser: 105.3499984741211,
            },
        ];
    });

    engine.mock("ReadFriendList", function () {
        console_log("engine received ReadFriendList");
        engine.trigger("ReadFriendListResult", 1, null, [
            {
                userSerial: "76561198031450358",
                userRealName: "absenty",
                userDisplayName: "ì• ë¸Œì„¼í‹°",
                presence: {
                    isOnline: true,
                    isPlaying: true,
                    isPlayingThisGame: true,
                    isJoinable: false,
                    status: 0,
                },
            },
            {
                userSerial: "76561198159561631",
                userRealName: "segv",
                userDisplayName: "SEGV",
                presence: {
                    isOnline: true,
                    isPlaying: true,
                    isPlayingThisGame: true,
                    isJoinable: false,
                    status: 0,
                },
            },
            {
                userSerial: "76561197997248906",
                userRealName: "jajanga",
                userDisplayName: "jajanga",
                presence: {
                    isOnline: false,
                    isPlaying: false,
                    isPlayingThisGame: false,
                    isJoinable: false,
                    status: 1,
                },
            },
            {
                userSerial: "76561198033493817",
                userRealName: "jajanga1",
                userDisplayName: "jajanga1",
                presence: {
                    isOnline: false,
                    isPlaying: false,
                    isPlayingThisGame: false,
                    isJoinable: false,
                    status: 1,
                },
            },
            {
                userSerial: "76561198031538317",
                userRealName: "jajanga2",
                userDisplayName: "jajanga2",
                presence: {
                    isOnline: false,
                    isPlaying: false,
                    isPlayingThisGame: false,
                    isJoinable: false,
                    status: 1,
                },
            },
            {
                userSerial: "76561198039366053",
                userRealName: "jajanga3",
                userDisplayName: "jajanga3",
                presence: {
                    isOnline: false,
                    isPlaying: false,
                    isPlayingThisGame: false,
                    isJoinable: false,
                    status: 1,
                },
            },
            {
                userSerial: "76561198096994119",
                userRealName: "jajanga4",
                userDisplayName: "jajanga4",
                presence: {
                    isOnline: false,
                    isPlaying: false,
                    isPlayingThisGame: false,
                    isJoinable: false,
                    status: 1,
                },
            },
            {
                userSerial: "76561198008236749",
                userRealName: "jajanga5",
                userDisplayName: "jajanga5",
                presence: {
                    isOnline: false,
                    isPlaying: false,
                    isPlayingThisGame: false,
                    isJoinable: false,
                    status: 1,
                },
            },
            {
                userSerial: "76561198061663619",
                userRealName: "jajanga6",
                userDisplayName: "jajanga6",
                presence: {
                    isOnline: false,
                    isPlaying: false,
                    isPlayingThisGame: false,
                    isJoinable: false,
                    status: 1,
                },
            },
        ]);
    });

    engine.mock("RequestAllPubgIdData", function () {
        console_log("engine received RequestAllPubgIdData");

        let mockEmblems = [
            {
                iD: "18040000",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040000/18040000.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040000/18040000.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040000/18040000_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040001",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040001/18040001.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040001/18040001.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040001/18040001_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040002",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040002/18040002.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040002/18040002.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040002/18040002_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040003",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040003/18040003.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040003/18040003.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040003/18040003_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040004",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040004/18040004.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040004/18040004.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040004/18040004_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040005",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040005/18040005.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040005/18040005.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040005/18040005_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040006",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040006/18040006.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040006/18040006.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040006/18040006_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040007",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040007/18040007.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040007/18040007.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040007/18040007_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040008",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040008/18040008.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040008/18040008.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040008/18040008_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040009",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040009/18040009.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040009/18040009.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040009/18040009_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040010",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040010/18040010.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040010/18040010.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040010/18040010_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040012",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040012/18040012.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040012/18040012.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040012/18040012_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040013",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040013/18040013.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040013/18040013.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040013/18040013_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040014",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040014/18040014.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040014/18040014.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040014/18040014_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040015",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040015/18040015.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040015/18040015.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040015/18040015_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040016",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040016/18040016.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040016/18040016.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040016/18040016_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040018",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040018/18040018.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040018/18040018.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040018/18040018_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040019",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040019/18040019.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040019/18040019.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040019/18040019_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040020",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040020/18040020.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040020/18040020.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040020/18040020_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040021",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040021/18040021.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040021/18040021.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040021/18040021_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040022",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040022/18040022.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040022/18040022.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040022/18040022_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040023",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040023/18040023.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040023/18040023.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040023/18040023_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040024",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040024/18040024.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040024/18040024.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040024/18040024_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040025",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040025/18040025.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040025/18040025.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040025/18040025_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040026",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040026/18040026.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040026/18040026.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040026/18040026_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040027",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040027/18040027.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040027/18040027.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040027/18040027_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040028",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040028/18040028.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040028/18040028.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040028/18040028_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040029",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040029/18040029.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040029/18040029.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040029/18040029_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040030",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040030/18040030.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040030/18040030.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040030/18040030_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040031",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040031/18040031.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040031/18040031.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040031/18040031_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040032",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040032/18040032.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040032/18040032.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040032/18040032_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040033",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040033/18040033.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040033/18040033.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040033/18040033_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040034",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040034/18040034.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040034/18040034.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040034/18040034_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040035",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040035/18040035.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040035/18040035.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040035/18040035_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040036",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040036/18040036.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040036/18040036.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040036/18040036_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040037",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040037/18040037.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040037/18040037.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040037/18040037_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040038",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040038/18040038.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040038/18040038.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040038/18040038_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040039",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040039/18040039.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040039/18040039.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040039/18040039_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040040",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040040/18040040.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040040/18040040.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040040/18040040_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040041",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040041/18040041.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040041/18040041.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040041/18040041_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040042",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040042/18040042.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040042/18040042.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040042/18040042_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040043",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040043/18040043.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040043/18040043.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040043/18040043_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040044",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040044/18040044.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040044/18040044.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040044/18040044_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040045",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040045/18040045.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040045/18040045.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040045/18040045_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040046",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040046/18040046.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040046/18040046.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040046/18040046_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040047",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040047/18040047.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040047/18040047.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040047/18040047_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040048",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040048/18040048.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040048/18040048.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040048/18040048_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040049",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040049/18040049.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040049/18040049.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040049/18040049_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040050",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040050/18040050.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040050/18040050.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040050/18040050_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040051",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040051/18040051.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040051/18040051.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040051/18040051_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040052",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040052/18040052.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040052/18040052.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040052/18040052_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040053",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040053/18040053.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040053/18040053.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040053/18040053_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040054",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040054/18040054.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040054/18040054.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040054/18040054_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040055",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040055/18040055.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040055/18040055.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040055/18040055_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040056",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040056/18040056.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040056/18040056.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040056/18040056_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040057",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040057/18040057.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040057/18040057.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040057/18040057_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040058",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040058/18040058.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040058/18040058.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040058/18040058_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040059",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040059/18040059.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040059/18040059.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040059/18040059_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040060",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040060/18040060.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040060/18040060.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040060/18040060_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040061",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040061/18040061.png",
                outgameImagePath: "coui://uiresources/pubg_id/emblem/18040061/18040061.png",
                outgameImagePathHD: "coui://uiresources/pubg_id/emblem/18040061/18040061_hd.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18040069",
                isAnim: true,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040069/18040069.png",
                outgameImagePath: "./assets/images/pubgid/uhd/18040069.png",
                outgameImagePathHD: "./assets/images/pubgid/uhd/18040069.png",
                ingameAnimPath: "",
                outgameAnimPath: "./assets/images/pubgid/uhd/18040069.webm",
            },
            {
                iD: "18040070",
                isAnim: true,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040070/18040070.png",
                outgameImagePath: "./assets/images/pubgid/uhd/18040070.png",
                outgameImagePathHD: "./assets/images/pubgid/uhd/18040070.png",
                ingameAnimPath: "",
                outgameAnimPath: "./assets/images/pubgid/uhd/18040070.webm",
            },
            {
                iD: "18040071",
                isAnim: true,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040071/18040071.png",
                outgameImagePath: "./assets/images/pubgid/uhd/18040071.png",
                outgameImagePathHD: "./assets/images/pubgid/uhd/18040071.png",
                ingameAnimPath: "",
                outgameAnimPath: "./assets/images/pubgid/uhd/18040071.webm",
            },
            {
                iD: "18040072",
                isAnim: true,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/emblem/18040072/18040072.png",
                outgameImagePath: "./assets/images/pubgid/uhd/18040072.png",
                outgameImagePathHD: "./assets/images/pubgid/uhd/18040072.png",
                ingameAnimPath: "",
                outgameAnimPath: "./assets/images/pubgid/uhd/18040072.webm",
            },
        ];

        let mockNameplates = [
            {
                iD: "18020000",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020000/18020000.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020000/18020000.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020001",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020001/18020001.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020001/18020001.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020002",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020002/18020002.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020002/18020002.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020003",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020003/18020003.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020003/18020003.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020004",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020004/18020004.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020004/18020004.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020005",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020005/18020005.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020005/18020005.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020006",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020006/18020006.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020006/18020006.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020007",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020007/18020007.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020007/18020007.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020008",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020008/18020008.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020008/18020008.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020009",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020009/18020009.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020009/18020009.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020010",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020010/18020010.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020010/18020010.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020011",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020011/18020011.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020011/18020011.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020012",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020012/18020012.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020012/18020012.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020013",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020013/18020013.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020013/18020013.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020014",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020014/18020014.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020014/18020014.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020015",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020015/18020015.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020015/18020015.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020016",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020016/18020016.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020016/18020016.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020017",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020017/18020017.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020017/18020017.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020018",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020018/18020018.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020018/18020018.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020019",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020019/18020019.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020019/18020019.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020020",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020020/18020020.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020020/18020020.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020021",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020021/18020021.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020021/18020021.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020022",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020022/18020022.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020022/18020022.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020023",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020023/18020023.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020023/18020023.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020024",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020024/18020024.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020024/18020024.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020025",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020025/18020025.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020025/18020025.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020026",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020026/18020026.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020026/18020026.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020027",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020027/18020027.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020027/18020027.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020028",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020028/18020028.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020028/18020028.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020029",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020029/18020029.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020029/18020029.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020030",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020030/18020030.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020030/18020030.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020031",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020031/18020031.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020031/18020031.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020032",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020032/18020032.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020032/18020032.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020033",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020033/18020033.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020033/18020033.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020034",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020034/18020034.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020034/18020034.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020035",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020035/18020035.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020035/18020035.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020036",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020036/18020036.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020036/18020036.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020037",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020037/18020037.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020037/18020037.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020038",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020038/18020038.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020038/18020038.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020039",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020039/18020039.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020039/18020039.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020040",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020040/18020040.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020040/18020040.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020041",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020041/18020041.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020041/18020041.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020042",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020042/18020042.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020042/18020042.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020043",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020043/18020043.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020043/18020043.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020044",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020044/18020044.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020044/18020044.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020045",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020045/18020045.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020045/18020045.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020046",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020046/18020046.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020046/18020046.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020047",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020047/18020047.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020047/18020047.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020048",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020048/18020048.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020048/18020048.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020049",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020049-2/18020049.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020049-2/18020049.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020050",
                isAnim: false,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020050/18020050.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020050/18020050.png",
                ingameAnimPath: "",
                outgameAnimPath: "",
            },
            {
                iD: "18020051",
                isAnim: true,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020051/18020051.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020051/18020051.png",
                ingameAnimPath: "",
                outgameAnimPath: "./assets/images/pubgid/nameplates/18020051.webm",
            },
            {
                iD: "18020052",
                isAnim: true,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020052/18020052.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020052/18020052.png",
                ingameAnimPath: "",
                outgameAnimPath: "./assets/images/pubgid/nameplates/18020052.webm",
            },
            {
                iD: "18020053",
                isAnim: true,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020053/18020053.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020053/18020053.png",
                ingameAnimPath: "",
                outgameAnimPath: "./assets/images/pubgid/nameplates/18020053.webm",
            },
            {
                iD: "18020054",
                isAnim: true,
                animLengthSec: 1,
                animFrameCount: 30,
                ingameImagePath: "uiresources/pubg_id/nameplate/18020054/18020054.png",
                outgameImagePath: "coui://uiresources/pubg_id/nameplate/18020054/18020054.png",
                ingameAnimPath: "",
                outgameAnimPath: "./assets/images/pubgid/nameplates/18020054.webm",
            },
        ];

        let mockMedals = [
            {
                iD: "battle_royale_001_1",
                ingameImagePath: "uiresources/pubg_id/medal/uhd/battle_royale_001_1.png",
                outgameImagePathFHD: "coui://uiresources/pubg_id/medal/fhd/battle_royale_001_1",
                outgameImagePathFHDLarge: "coui://uiresources/pubg_id/medal/fhd/large/battle_royale_001_1",
                outgameImagePathUHD: "coui://uiresources/pubg_id/medal/uhd/battle_royale_001_1",
                outgameImagePathUHDLarge: "coui://uiresources/pubg_id/medal/uhd/large/battle_royale_001_1",
            },
            {
                iD: "battle_royale_001_2",
                ingameImagePath: "uiresources/pubg_id/medal/uhd/battle_royale_001_2.png",
                outgameImagePathFHD: "coui://uiresources/pubg_id/medal/fhd/battle_royale_001_2",
                outgameImagePathFHDLarge: "coui://uiresources/pubg_id/medal/fhd/large/battle_royale_001_2",
                outgameImagePathUHD: "coui://uiresources/pubg_id/medal/uhd/battle_royale_001_2",
                outgameImagePathUHDLarge: "coui://uiresources/pubg_id/medal/uhd/large/battle_royale_001_2",
            },
        ];
        const useMock = false;
        if (!useMock) {
            mockNameplates = [];
            mockEmblems = [];
            mockMedals = [];
        }
        //prettier-ignore
        const mockClanPlates =[
            {
                iD: "18050000",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050000/18050000.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050000/18050000.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050000/18050000_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050000/18050000_ld.png",
            },
            {
                iD: "18050001",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050001/18050001.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050001/18050001.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050001/18050001_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050001/18050001_ld.png",
            },
            {
                iD: "18050002",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050002/18050002.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050002/18050002.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050002/18050002_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050002/18050002_ld.png",
            },
            {
                iD: "18050003",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050003/18050003.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050003/18050003.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050003/18050003_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050003/18050003_ld.png",
            },
            {
                iD: "18050004",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050004/18050004.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050004/18050004.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050004/18050004_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050004/18050004_ld.png",
            },
            {
                iD: "18050005",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050005/18050005.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050005/18050005.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050005/18050005_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050005/18050005_ld.png",
            },
            {
                iD: "18050006",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050006/18050006.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050006/18050006.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050006/18050006_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050006/18050006_ld.png",
            },
            {
                iD: "18050007",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050007/18050007.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050007/18050007.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050007/18050007_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050007/18050007_ld.png",
            },
            {
                iD: "18050008",
                topColor: "#FFC99D",
                bottomColor: "#CF7A50",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050008/18050008.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050008/18050008.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050008/18050008_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050008/18050008_ld.png",
            },
// ìƒˆë¡œ ì¶”ê°€ë˜ëŠ” í”Œë ˆì´íŠ¸ë“¤
            {
                iD: "18050009",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050009/18050009.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050009/18050009.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050009/18050009_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050009/18050009_ld.png",
            },
            {
                iD: "18050010",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050010/18050010.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050010/18050010.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050010/18050010_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050010/18050010_ld.png",
            },
            {
                iD: "18050011",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050011/18050011.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050011/18050011.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050011/18050011_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050011/18050011_ld.png",
            },
            {
                iD: "18050012",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050012/18050012.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050012/18050012.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050012/18050012_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050012/18050012_ld.png",
            },
            {
                iD: "18050013",
                topColor: "",
                bottomColor: "",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050013/18050013.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050013/18050013.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050013/18050013_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050013/18050013_ld.png",
            },
            {
                iD: "18050014",
                topColor: "#EDEDF2",
                bottomColor: "#FFB9C6",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050014/18050014.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050014/18050014.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050014/18050014_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050014/18050014_ld.png",
            },
            {
                iD: "18050015",
                topColor: "#EDEDF2",
                bottomColor: "#B9FFFE",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050015/18050015.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050015/18050015.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050015/18050015_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050015/18050015_ld.png",
            },
            {
                iD: "18050016",
                topColor: "#EDEDF2",
                bottomColor: "#FFDF7C",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050016/18050016.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050016/18050016.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050016/18050016_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050016/18050016_ld.png",
            },
            {
                iD: "18050017",
                topColor: "#EDEDF2",
                bottomColor: "#C7E7F5",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050017/18050017.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050017/18050017.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050017/18050017_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050017/18050017_ld.png",
            },
            {
                iD: "18050018",
                topColor: "#EDEDF2",
                bottomColor: "#F1DF47",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050018/18050018.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050018/18050018.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050018/18050018_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050018/18050018_ld.png",
            },
            {
                iD: "18050019",
                topColor: "#EDEDF2",
                bottomColor: "#6EE2FF",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050019/18050019.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050019/18050019.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050019/18050019_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050019/18050019_ld.png",
            },
            {
                iD: "18050020",
                topColor: "#EDEDF2",
                bottomColor: "#D3F44E",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050020/18050020.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050020/18050020.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050020/18050020_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050020/18050020_ld.png",
            },
            {
                iD: "18050021",
                topColor: "#EDEDF2",
                bottomColor: "#FFCF7B",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050021/18050021.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050021/18050021.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050021/18050021_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050021/18050021_ld.png",
            },
            {
                iD: "18050022",
                topColor: "#EDEDF2",
                bottomColor: "#FFAA7B",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050022/18050022.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050022/18050022.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050022/18050022_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050022/18050022_ld.png",
            },
            {
                iD: "18050023",
                topColor: "#58EEED",
                bottomColor: "#4492C6",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050023/18050023.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050023/18050023.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050023/18050023_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050023/18050023_ld.png",
            },
            {
                iD: "18050024",
                topColor: "#F8CC55",
                bottomColor: "#F47511",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050024/18050024.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050024/18050024.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050024/18050024_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050024/18050024_ld.png",
            },
            {
                iD: "18050025",
                topColor: "#FEFC34",
                bottomColor: "#19F60E",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050025/18050025.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050025/18050025.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050025/18050025_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050025/18050025_ld.png",
            },
            {
                iD: "18050026",
                topColor: "#10FF9D",
                bottomColor: "#F330DA",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050026/18050026.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050026/18050026.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050026/18050026_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050026/18050026_ld.png",
            },
            {
                iD: "18050027",
                topColor: "#FFFEAA",
                bottomColor: "#F95915",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050027/18050027.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050027/18050027.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050027/18050027_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050027/18050027_ld.png",
            },
            {
                iD: "18050028",
                topColor: "#FF1F1F",
                bottomColor: "#FFAE44",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050028/18050028.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050028/18050028.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050028/18050028_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050028/18050028_ld.png",
            },
            {
                iD: "18050029",
                topColor: "#FF4CA0",
                bottomColor: "#FFF0D4",
                ingameImagePath: "uiresources/pubg_id/clanplate/18050029/18050029.png",
                outgameImagePath: "coui://uiresources/pubg_id/clanplate/18050029/18050029.png",
                ingameImagePathLD: "uiresources/pubg_id/clanplate/18050029/18050029_ld.png",
                outgameImagePathLD: "coui://uiresources/pubg_id/clanplate/18050029/18050029_ld.png",
            },
]
        engine.trigger("OnRequestAllPubgIdData", mockNameplates, mockEmblems, mockMedals, mockClanPlates);
    });

    engine.mock("RequestReplayList", function (region, index, size) {
        console_log("engine received RequestReplayList");
        engine.trigger("OnReplayList", [
            {
                friendlyName:
                    "match.bro.official.2017-pre6.na.squad-fpp.2017.12.15.5411165b-4fa5-4014-9d43-6e8e4638995b",
                name: "match.bro.official.2017-pre6.na.squad-fpp.2017.12.15.5411165b-4fa5-4014-9d43-6e8e4638995b",
                bIsLive: false,
                date: "2018.01.04-08.29.23",
                sizeInBytes: 140559651,
                lengthInMS: 1837890,
                numViewers: 0,
                bIncomplete: false,
                bIsVersionCompatible: true,
                bIsCorrupted: false,
                bIsServerRecording: true,
                bShouldKeep: false,
                bArchived: false,
                mode: "squad-fpp",
                recordUserId: "UNKNOWN",
                recordUserNickName: "UNKNOWN",
                mapName: "Desert_Main",
                bAllDeadOrWin: true,
                archiveSizeInBytes: 31268733,
            },
            {
                friendlyName: "match.bro.official.2017-pre6.na.squad.2017.12.15.aae3c1ee-a864-410e-a883-ffb05653be91",
                name: "match.bro.official.2017-pre6.na.squad.2017.12.15.aae3c1ee-a864-410e-a883-ffb05653be91",
                bIsLive: false,
                date: "2017.12.25-21.19.28",
                sizeInBytes: 142651221,
                lengthInMS: 1835983,
                numViewers: 0,
                bIncomplete: false,
                bIsVersionCompatible: true,
                bIsCorrupted: false,
                bIsServerRecording: true,
                bShouldKeep: false,
                bArchived: false,
                mode: "squad",
                recordUserId: "UNKNOWN",
                recordUserNickName: "UNKNOWN",
                mapName: "Desert_Main",
                bAllDeadOrWin: true,
                archiveSizeInBytes: 31268733,
            },
            {
                friendlyName: "match.bro.official.2017-pre6.as.solo.2017.12.14.c1d1a591-bc79-4b4c-86f4-ba0225974ba8",
                name: "match.bro.official.2017-pre6.as.solo.2017.12.14.c1d1a591-bc79-4b4c-86f4-ba0225974ba8",
                bIsLive: false,
                date: "2017.12.24-03.50.41",
                sizeInBytes: 135155179,
                lengthInMS: 1777381,
                numViewers: 0,
                bIncomplete: false,
                bIsVersionCompatible: false,
                bIsCorrupted: false,
                bIsServerRecording: true,
                bShouldKeep: false,
                bArchived: false,
                mode: "solo",
                recordUserId: "UNKNOWN",
                recordUserNickName: "UNKNOWN",
                mapName: "Desert_Main",
                bAllDeadOrWin: true,
                archiveSizeInBytes: 31268733,
            },
            {
                friendlyName: "match.bro.official.2017-pre6.na.duo.2017.12.14.591255e6-b42f-4140-a87f-7400f1b9fad4",
                name: "match.bro.official.2017-pre6.na.duo.2017.12.14.591255e6-b42f-4140-a87f-7400f1b9fad4",
                bIsLive: false,
                date: "2017.12.23-23.16.51",
                sizeInBytes: 84069015,
                lengthInMS: 1590413,
                numViewers: 0,
                bIncomplete: false,
                bIsVersionCompatible: true,
                bIsCorrupted: false,
                bIsServerRecording: true,
                bShouldKeep: false,
                bArchived: false,
                mode: "duo",
                recordUserId: "UNKNOWN",
                recordUserNickName: "UNKNOWN",
                mapName: "Erangel_Main",
                bAllDeadOrWin: true,
                archiveSizeInBytes: 31268733,
            },
            {
                friendlyName: "match.bro.official.2017-pre6.na.duo.2017.12.14.591255e6-b42f-4140-a87f-7400f1b9fad4",
                name: "match.bro.official.2017-pre6.na.duo.2017.12.14.591255e6-b42f-4140-a87f-7400f1b9faqp",
                bIsLive: false,
                date: "2017.12.23-23.16.51",
                sizeInBytes: 84069011,
                lengthInMS: 1590513,
                numViewers: 2,
                bIncomplete: false,
                bIsVersionCompatible: true,
                bIsCorrupted: false,
                bIsServerRecording: true,
                bShouldKeep: false,
                bArchived: false,
                mode: "duo",
                recordUserId: "UNKNOWN",
                recordUserNickName: "UNKNOWN",
                mapName: "Summerland_Main",
                bAllDeadOrWin: true,
                archiveSizeInBytes: 31268666,
            },
        ]);
    });

    engine.mock("RequestReplaySummary", function (region, sessionName) {
        console_log("engine received RequestReplaySummary");
        engine.trigger("OnReplaySummary", {
            matchId: "match.bro.official.2017-pre6.na.squad-fpp.2017.12.15.5411165b-4fa5-4014-9d43-6e8e4638995b",
            bIsServerRecording: true,
            recordUserId: "UNKNOWN",
            recordUserNickName: "UNKNOWN",
            mapName: "Desert_Main",
            weatherName: "Weather_Desert_Clear",
            regionName: "na",
            numPlayers: 96,
            numTeams: 29,
            playerStateSummaries: [
                {
                    uniqueId: "76561198004311585",
                    playerName: "pupperr",
                    teamNumber: 2,
                    ranking: 4,
                    headShots: 2,
                    numKills: 2,
                    totalGivenDamages: 101.39862060546875,
                    longestDistanceKill: 26921.205078125,
                    totalMovedDistanceMeter: 28648.5625,
                },
                {
                    uniqueId: "76561198049476138",
                    playerName: "Tezz97",
                    teamNumber: 4,
                    ranking: 17,
                    headShots: 1,
                    numKills: 0,
                    totalGivenDamages: 287.5665588378906,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 17955.349609375,
                },
                {
                    uniqueId: "76561198151568693",
                    playerName: "KojiKondo",
                    teamNumber: 9,
                    ranking: 8,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 143.3246307373047,
                    longestDistanceKill: 3450.166748046875,
                    totalMovedDistanceMeter: 27396.5703125,
                },
                {
                    uniqueId: "76561198311858156",
                    playerName: "xXx_DiCKBUTT_xXx",
                    teamNumber: 11,
                    ranking: 13,
                    headShots: 2,
                    numKills: 2,
                    totalGivenDamages: 340.3948059082031,
                    longestDistanceKill: 411.3864440917969,
                    totalMovedDistanceMeter: 22962.4375,
                },
                {
                    uniqueId: "76561198151442659",
                    playerName: "zevv",
                    teamNumber: 11,
                    ranking: 13,
                    headShots: 3,
                    numKills: 3,
                    totalGivenDamages: 535.556640625,
                    longestDistanceKill: 5238.80029296875,
                    totalMovedDistanceMeter: 23264.3671875,
                },
                {
                    uniqueId: "76561197970453789",
                    playerName: "DeaDBau5",
                    teamNumber: 6,
                    ranking: 11,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 2.252549886703491,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 24012.94140625,
                },
                {
                    uniqueId: "76561198018732020",
                    playerName: "Dookee",
                    teamNumber: 5,
                    ranking: 20,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 21209.4140625,
                },
                {
                    uniqueId: "76561198098432338",
                    playerName: "Tr0utMasterJ",
                    teamNumber: 5,
                    ranking: 20,
                    headShots: 1,
                    numKills: 2,
                    totalGivenDamages: 214.84085083007812,
                    longestDistanceKill: 4138.54150390625,
                    totalMovedDistanceMeter: 21722.60546875,
                },
                {
                    uniqueId: "76561198054484897",
                    playerName: "ThiccNick",
                    teamNumber: 2,
                    ranking: 4,
                    headShots: 2,
                    numKills: 1,
                    totalGivenDamages: 99.99999237060547,
                    longestDistanceKill: 135.49139404296875,
                    totalMovedDistanceMeter: 22766.310546875,
                },
                {
                    uniqueId: "76561198347734114",
                    playerName: "RileyCs",
                    teamNumber: 10,
                    ranking: 19,
                    headShots: 2,
                    numKills: 1,
                    totalGivenDamages: 100,
                    longestDistanceKill: 410.5056457519531,
                    totalMovedDistanceMeter: 18558.03125,
                },
                {
                    uniqueId: "76561198133096977",
                    playerName: "Rumple_Foreskin_",
                    teamNumber: 11,
                    ranking: 13,
                    headShots: 2,
                    numKills: 0,
                    totalGivenDamages: 134.6699981689453,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 23211.34765625,
                },
                {
                    uniqueId: "76561198131175617",
                    playerName: "Vutang",
                    teamNumber: 6,
                    ranking: 11,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 68.48531341552734,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 21518.6484375,
                },
                {
                    uniqueId: "76561197962518724",
                    playerName: "2pretty_2kill",
                    teamNumber: 6,
                    ranking: 11,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 119.80000305175781,
                    longestDistanceKill: 116.87806701660156,
                    totalMovedDistanceMeter: 23736.15625,
                },
                {
                    uniqueId: "76561197964274931",
                    playerName: "Crazyred",
                    teamNumber: 13,
                    ranking: 1,
                    headShots: 1,
                    numKills: 3,
                    totalGivenDamages: 367.7102966308594,
                    longestDistanceKill: 15807.80078125,
                    totalMovedDistanceMeter: 28069.97265625,
                },
                {
                    uniqueId: "76561197983609405",
                    playerName: "Birdstheword",
                    teamNumber: 4,
                    ranking: 9,
                    headShots: 2,
                    numKills: 0,
                    totalGivenDamages: 118.52499389648438,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 23947.654296875,
                },
                {
                    uniqueId: "76561197961933044",
                    playerName: "Bakie",
                    teamNumber: 6,
                    ranking: 11,
                    headShots: 1,
                    numKills: 5,
                    totalGivenDamages: 558.0479736328125,
                    longestDistanceKill: 4874.44677734375,
                    totalMovedDistanceMeter: 24168.015625,
                },
                {
                    uniqueId: "76561197990355659",
                    playerName: "GusXD",
                    teamNumber: 3,
                    ranking: 29,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 14086.3193359375,
                },
                {
                    uniqueId: "76561197977758446",
                    playerName: "Phobia",
                    teamNumber: 9,
                    ranking: 12,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 105.07247924804688,
                    longestDistanceKill: 1468.561279296875,
                    totalMovedDistanceMeter: 25519.533203125,
                },
                {
                    uniqueId: "76561198219714413",
                    playerName: "Dymdez",
                    teamNumber: 15,
                    ranking: 19,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 18530.26171875,
                },
                {
                    uniqueId: "76561198026900792",
                    playerName: "Halfling",
                    teamNumber: 1,
                    ranking: 29,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 123.70913696289062,
                    longestDistanceKill: 80.52429962158203,
                    totalMovedDistanceMeter: 17006.62890625,
                },
                {
                    uniqueId: "76561198002257208",
                    playerName: "Tezima",
                    teamNumber: 15,
                    ranking: 15,
                    headShots: 1,
                    numKills: 3,
                    totalGivenDamages: 298.16448974609375,
                    longestDistanceKill: 7494.05615234375,
                    totalMovedDistanceMeter: 19174.095703125,
                },
                {
                    uniqueId: "76561198121292204",
                    playerName: "TestPMFB",
                    teamNumber: 16,
                    ranking: 23,
                    headShots: 3,
                    numKills: 3,
                    totalGivenDamages: 289.24615478515625,
                    longestDistanceKill: 703.356689453125,
                    totalMovedDistanceMeter: 17438.001953125,
                },
                {
                    uniqueId: "76561198049112001",
                    playerName: "MicroBoy",
                    teamNumber: 13,
                    ranking: 1,
                    headShots: 1,
                    numKills: 2,
                    totalGivenDamages: 349.37005615234375,
                    longestDistanceKill: 396.1410827636719,
                    totalMovedDistanceMeter: 34791.640625,
                },
                {
                    uniqueId: "76561198131113586",
                    playerName: "thatveganboy",
                    teamNumber: 18,
                    ranking: 3,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 21.93379020690918,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 21184.8671875,
                },
                {
                    uniqueId: "76561198076669215",
                    playerName: "leeb0",
                    teamNumber: 10,
                    ranking: 18,
                    headShots: 1,
                    numKills: 1,
                    totalGivenDamages: 210.1800079345703,
                    longestDistanceKill: 350.420654296875,
                    totalMovedDistanceMeter: 26031.50390625,
                },
                {
                    uniqueId: "76561198043360475",
                    playerName: "graspmybartwurst",
                    teamNumber: 16,
                    ranking: 23,
                    headShots: 3,
                    numKills: 0,
                    totalGivenDamages: 8.972978591918945,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 17476.19140625,
                },
                {
                    uniqueId: "76561198047315218",
                    playerName: "Sleurlee",
                    teamNumber: 12,
                    ranking: 10,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 113.2300033569336,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 22439.986328125,
                },
                {
                    uniqueId: "76561197989367891",
                    playerName: "Calomeni",
                    teamNumber: 8,
                    ranking: 5,
                    headShots: 2,
                    numKills: 2,
                    totalGivenDamages: 275.9329833984375,
                    longestDistanceKill: 13192.736328125,
                    totalMovedDistanceMeter: 24461.69140625,
                },
                {
                    uniqueId: "76561197991963661",
                    playerName: "Jubsies",
                    teamNumber: 20,
                    ranking: 21,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 35,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 17989.109375,
                },
                {
                    uniqueId: "76561198144244734",
                    playerName: "Motnel",
                    teamNumber: 14,
                    ranking: 16,
                    headShots: 1,
                    numKills: 1,
                    totalGivenDamages: 148.2089385986328,
                    longestDistanceKill: 5416.99658203125,
                    totalMovedDistanceMeter: 20901.771484375,
                },
                {
                    uniqueId: "76561197991438787",
                    playerName: "OgEzus",
                    teamNumber: 17,
                    ranking: 25,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 50.81999969482422,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 18344.0390625,
                },
                {
                    uniqueId: "76561197988098708",
                    playerName: "buk-kake-whore",
                    teamNumber: 17,
                    ranking: 25,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 18288.19140625,
                },
                {
                    uniqueId: "76561198393486904",
                    playerName: "steen013",
                    teamNumber: 1,
                    ranking: 29,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 24351.01953125,
                },
                {
                    uniqueId: "76561198066839914",
                    playerName: "yerm",
                    teamNumber: 18,
                    ranking: 3,
                    headShots: 2,
                    numKills: 1,
                    totalGivenDamages: 362.4772644042969,
                    longestDistanceKill: 341.1280822753906,
                    totalMovedDistanceMeter: 24071.404296875,
                },
                {
                    uniqueId: "76561198142433219",
                    playerName: "zOctanEz",
                    teamNumber: 16,
                    ranking: 23,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 17529.015625,
                },
                {
                    uniqueId: "76561197978360796",
                    playerName: "Kubla",
                    teamNumber: 17,
                    ranking: 25,
                    headShots: 2,
                    numKills: 2,
                    totalGivenDamages: 267.6199951171875,
                    longestDistanceKill: 848.3095092773438,
                    totalMovedDistanceMeter: 18336.625,
                },
                {
                    uniqueId: "76561198011612026",
                    playerName: "Jasperuu",
                    teamNumber: 20,
                    ranking: 25,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 18327.359375,
                },
                {
                    uniqueId: "76561198092847827",
                    playerName: "YaBoiEtDatPus445",
                    teamNumber: 21,
                    ranking: 7,
                    headShots: 1,
                    numKills: 1,
                    totalGivenDamages: 139.03018188476562,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 26431.76171875,
                },
                {
                    uniqueId: "76561198009550721",
                    playerName: "SHAMBAMPOW",
                    teamNumber: 9,
                    ranking: 8,
                    headShots: 0,
                    numKills: 2,
                    totalGivenDamages: 266.63812255859375,
                    longestDistanceKill: 5862.55419921875,
                    totalMovedDistanceMeter: 26608.890625,
                },
                {
                    uniqueId: "76561198396062747",
                    playerName: "NotGil",
                    teamNumber: 1,
                    ranking: 29,
                    headShots: 2,
                    numKills: 2,
                    totalGivenDamages: 127.89086151123047,
                    longestDistanceKill: 1316.299072265625,
                    totalMovedDistanceMeter: 17282.58203125,
                },
                {
                    uniqueId: "76561198025279607",
                    playerName: "TrillHypeFamJam",
                    teamNumber: 20,
                    ranking: 21,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 32.48291015625,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 19121.21875,
                },
                {
                    uniqueId: "76561197996206929",
                    playerName: "Christs_Love",
                    teamNumber: 22,
                    ranking: 22,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 21553.1328125,
                },
                {
                    uniqueId: "76561198051446068",
                    playerName: "PhantomOfEden",
                    teamNumber: 18,
                    ranking: 3,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 147.97097778320312,
                    longestDistanceKill: 508.8654479980469,
                    totalMovedDistanceMeter: 22917.87890625,
                },
                {
                    uniqueId: "76561198153677376",
                    playerName: "DentedWand",
                    teamNumber: 10,
                    ranking: 18,
                    headShots: 3,
                    numKills: 1,
                    totalGivenDamages: 140.13999938964844,
                    longestDistanceKill: 858.6952514648438,
                    totalMovedDistanceMeter: 20389.2578125,
                },
                {
                    uniqueId: "76561198254092523",
                    playerName: "MELVlN",
                    teamNumber: 26,
                    ranking: 29,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 15784.4365234375,
                },
                {
                    uniqueId: "76561198045290637",
                    playerName: "Belvin",
                    teamNumber: 26,
                    ranking: 29,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 14880.68359375,
                },
                {
                    uniqueId: "76561198066372710",
                    playerName: "SadRainbow",
                    teamNumber: 21,
                    ranking: 7,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 162.60855102539062,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 24178.53515625,
                },
                {
                    uniqueId: "76561197970072984",
                    playerName: "GruntMercenary",
                    teamNumber: 26,
                    ranking: 29,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 15151.189453125,
                },
                {
                    uniqueId: "76561198304034782",
                    playerName: "lHoltzman7",
                    teamNumber: 10,
                    ranking: 19,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 79.86000061035156,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 18685.791015625,
                },
                {
                    uniqueId: "76561197960822490",
                    playerName: "m8yh8m",
                    teamNumber: 22,
                    ranking: 22,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 119,
                    longestDistanceKill: 466.4131164550781,
                    totalMovedDistanceMeter: 21379.30078125,
                },
                {
                    uniqueId: "76561198010018355",
                    playerName: "ErikTheViking",
                    teamNumber: 7,
                    ranking: 19,
                    headShots: 1,
                    numKills: 5,
                    totalGivenDamages: 501.29168701171875,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 26639.08984375,
                },
                {
                    uniqueId: "76561198046436145",
                    playerName: "no-homo-no-shoot",
                    teamNumber: 4,
                    ranking: 17,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 18338.2109375,
                },
                {
                    uniqueId: "76561198050551462",
                    playerName: "KongoMongo",
                    teamNumber: 25,
                    ranking: 6,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 26.06255531311035,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 29537.5390625,
                },
                {
                    uniqueId: "76561198094626159",
                    playerName: "SynTurtle",
                    teamNumber: 24,
                    ranking: 14,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 24230.13671875,
                },
                {
                    uniqueId: "76561198012454654",
                    playerName: "joeveryold",
                    teamNumber: 24,
                    ranking: 14,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 20049.53515625,
                },
                {
                    uniqueId: "76561197989901233",
                    playerName: "Mrs_Nesbitt",
                    teamNumber: 27,
                    ranking: 26,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 19769.26171875,
                },
                {
                    uniqueId: "76561198145674060",
                    playerName: "infamousrage",
                    teamNumber: 24,
                    ranking: 14,
                    headShots: 1,
                    numKills: 2,
                    totalGivenDamages: 298.34808349609375,
                    longestDistanceKill: 753.3493041992188,
                    totalMovedDistanceMeter: 24338.314453125,
                },
                {
                    uniqueId: "76561197989865867",
                    playerName: "bongrip",
                    teamNumber: 27,
                    ranking: 26,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 19617.25,
                },
                {
                    uniqueId: "76561198326428437",
                    playerName: "Peebow",
                    teamNumber: 25,
                    ranking: 6,
                    headShots: 1,
                    numKills: 1,
                    totalGivenDamages: 77.13067626953125,
                    longestDistanceKill: 9516.1953125,
                    totalMovedDistanceMeter: 29663.4609375,
                },
                {
                    uniqueId: "76561198436785349",
                    playerName: "Norzy",
                    teamNumber: 23,
                    ranking: 27,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 16799.953125,
                },
                {
                    uniqueId: "76561198035818068",
                    playerName: "EwokLIVE",
                    teamNumber: 30,
                    ranking: 12,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 16793.66796875,
                },
                {
                    uniqueId: "76561198441872184",
                    playerName: "Erektus",
                    teamNumber: 25,
                    ranking: 6,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 123.76000213623047,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 20494.6484375,
                },
                {
                    uniqueId: "76561198018691800",
                    playerName: "JellyScissor",
                    teamNumber: 27,
                    ranking: 26,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 83.32933044433594,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 20217.4921875,
                },
                {
                    uniqueId: "76561198062599235",
                    playerName: "Dapurplekat",
                    teamNumber: 30,
                    ranking: 12,
                    headShots: 1,
                    numKills: 3,
                    totalGivenDamages: 249,
                    longestDistanceKill: 4921.9482421875,
                    totalMovedDistanceMeter: 26161.076171875,
                },
                {
                    uniqueId: "76561197984646788",
                    playerName: "Smokin-Joe",
                    teamNumber: 9,
                    ranking: 8,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 244.30123901367188,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 27337.33984375,
                },
                {
                    uniqueId: "76561197989832390",
                    playerName: "Skippidyboop",
                    teamNumber: 23,
                    ranking: 27,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 100,
                    longestDistanceKill: 229.75942993164062,
                    totalMovedDistanceMeter: 17185.826171875,
                },
                {
                    uniqueId: "76561198399960311",
                    playerName: "Nordy003",
                    teamNumber: 31,
                    ranking: 2,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 21401.603515625,
                },
                {
                    uniqueId: "76561198392779248",
                    playerName: "SirZachAttack01",
                    teamNumber: 31,
                    ranking: 2,
                    headShots: 5,
                    numKills: 7,
                    totalGivenDamages: 473.9432373046875,
                    longestDistanceKill: 10106.201171875,
                    totalMovedDistanceMeter: 25203.4453125,
                },
                {
                    uniqueId: "76561198092436891",
                    playerName: "MingRee",
                    teamNumber: 30,
                    ranking: 12,
                    headShots: 1,
                    numKills: 3,
                    totalGivenDamages: 416.1444091796875,
                    longestDistanceKill: 3144.5283203125,
                    totalMovedDistanceMeter: 24101.69140625,
                },
                {
                    uniqueId: "76561198337730133",
                    playerName: "cnc_trigger",
                    teamNumber: 5,
                    ranking: 20,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 41.399147033691406,
                    longestDistanceKill: 2677.728759765625,
                    totalMovedDistanceMeter: 21681.748046875,
                },
                {
                    uniqueId: "76561198046058739",
                    playerName: "Jerr310",
                    teamNumber: 12,
                    ranking: 10,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 21948.03125,
                },
                {
                    uniqueId: "76561198037751795",
                    playerName: "Tezz98",
                    teamNumber: 4,
                    ranking: 17,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 45.39043426513672,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 16309.33984375,
                },
                {
                    uniqueId: "76561197966881363",
                    playerName: "dodomart",
                    teamNumber: 8,
                    ranking: 5,
                    headShots: 6,
                    numKills: 3,
                    totalGivenDamages: 502.7724304199219,
                    longestDistanceKill: 2043.627197265625,
                    totalMovedDistanceMeter: 24150.90625,
                },
                {
                    uniqueId: "76561197972451205",
                    playerName: "Captkevin510",
                    teamNumber: 28,
                    ranking: 24,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 131.34999084472656,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 17462.7734375,
                },
                {
                    uniqueId: "76561198063914283",
                    playerName: "Pizwah",
                    teamNumber: 13,
                    ranking: 1,
                    headShots: 4,
                    numKills: 7,
                    totalGivenDamages: 671.891357421875,
                    longestDistanceKill: 17040.544921875,
                    totalMovedDistanceMeter: 28174.505859375,
                },
                {
                    uniqueId: "76561198002564190",
                    playerName: "neat",
                    teamNumber: 15,
                    ranking: 15,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 155.5462646484375,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 19313.0859375,
                },
                {
                    uniqueId: "76561198053374350",
                    playerName: "Pwnbot",
                    teamNumber: 24,
                    ranking: 14,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 77.00446319580078,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 24223.244140625,
                },
                {
                    uniqueId: "76561198045959051",
                    playerName: "bigtesteserver",
                    teamNumber: 27,
                    ranking: 27,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 16.67066764831543,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 20092.0625,
                },
                {
                    uniqueId: "76561198079437420",
                    playerName: "Canceled-Fish",
                    teamNumber: 14,
                    ranking: 16,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 101.50605773925781,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 21189.546875,
                },
                {
                    uniqueId: "76561198385238444",
                    playerName: "dEvilHash420",
                    teamNumber: 30,
                    ranking: 12,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 17450.50390625,
                },
                {
                    uniqueId: "76561198008783481",
                    playerName: "Bicyclops",
                    teamNumber: 20,
                    ranking: 21,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 61.599998474121094,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 19294.099609375,
                },
                {
                    uniqueId: "76561198316065073",
                    playerName: "SplashaDasha",
                    teamNumber: 23,
                    ranking: 27,
                    headShots: 3,
                    numKills: 2,
                    totalGivenDamages: 300,
                    longestDistanceKill: 1353.072509765625,
                    totalMovedDistanceMeter: 17019.33984375,
                },
                {
                    uniqueId: "76561198187439561",
                    playerName: "IdontKnoYet",
                    teamNumber: 28,
                    ranking: 24,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 16812.154296875,
                },
                {
                    uniqueId: "76561198296058306",
                    playerName: "ColeDanny",
                    teamNumber: 31,
                    ranking: 2,
                    headShots: 8,
                    numKills: 3,
                    totalGivenDamages: 717.3173828125,
                    longestDistanceKill: 2457.397216796875,
                    totalMovedDistanceMeter: 25541.005859375,
                },
                {
                    uniqueId: "76561198208791569",
                    playerName: "DuckThief",
                    teamNumber: 21,
                    ranking: 7,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 22596.64453125,
                },
                {
                    uniqueId: "76561198085833786",
                    playerName: "fonuc",
                    teamNumber: 25,
                    ranking: 6,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 28786.888671875,
                },
                {
                    uniqueId: "76561198059224398",
                    playerName: "KyoserAx",
                    teamNumber: 3,
                    ranking: 29,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 13475.9951171875,
                },
                {
                    uniqueId: "76561198069174737",
                    playerName: "CobbRossCornNail",
                    teamNumber: 14,
                    ranking: 16,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 21221.830078125,
                },
                {
                    uniqueId: "76561198012665323",
                    playerName: "froglegs",
                    teamNumber: 2,
                    ranking: 4,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 100.00000762939453,
                    longestDistanceKill: 390.3717956542969,
                    totalMovedDistanceMeter: 22865.24609375,
                },
                {
                    uniqueId: "76561198027016818",
                    playerName: "nicetryy",
                    teamNumber: 3,
                    ranking: 29,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 15468.173828125,
                },
                {
                    uniqueId: "76561198066235376",
                    playerName: "GaryLazor-Eyes",
                    teamNumber: 12,
                    ranking: 10,
                    headShots: 1,
                    numKills: 1,
                    totalGivenDamages: 397.2516174316406,
                    longestDistanceKill: 484.5870361328125,
                    totalMovedDistanceMeter: 25720.05078125,
                },
                {
                    uniqueId: "76561198089694396",
                    playerName: "Dee_Le",
                    teamNumber: 28,
                    ranking: 24,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 100,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 17343.142578125,
                },
                {
                    uniqueId: "76561198054210296",
                    playerName: "69fergiefan69",
                    teamNumber: 2,
                    ranking: 4,
                    headShots: 1,
                    numKills: 1,
                    totalGivenDamages: 121.45880889892578,
                    longestDistanceKill: 1406.1790771484375,
                    totalMovedDistanceMeter: 28262.296875,
                },
                {
                    uniqueId: "76561198198185719",
                    playerName: "MyNinjitsu",
                    teamNumber: 12,
                    ranking: 10,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 20726.94921875,
                },
                {
                    uniqueId: "76561197970426505",
                    playerName: "Sea_Turtle",
                    teamNumber: 22,
                    ranking: 22,
                    headShots: 0,
                    numKills: 1,
                    totalGivenDamages: 142.75,
                    longestDistanceKill: 102.34647369384766,
                    totalMovedDistanceMeter: 21444.9375,
                },
                {
                    uniqueId: "76561198125190782",
                    playerName: "Viico",
                    teamNumber: 14,
                    ranking: 16,
                    headShots: 0,
                    numKills: 0,
                    totalGivenDamages: 0,
                    longestDistanceKill: 0,
                    totalMovedDistanceMeter: 20597.2109375,
                },
            ],
        });
    });

    engine.mock(
        "RequestInstallProgress",
        (function () {
            var progress = 0;

            function rand(min, max) {
                // [min, max)
                return Math.floor(Math.random() * (max - min + 1) + min);
            }

            return function () {
                if (progress === 100) {
                    return progress;
                }
                progress = Math.min(progress + rand(20, 80), 100);
                return progress;
            };
        })()
    );

    engine.mock(
        "GetBlockUserInfos",
        function () {
            return ["account.3a3fac80c2bd47449e162f627bdf3f9e", "account.3a3fac80c2bd47449e162f627bdf3f9q"];
        },
        true
    );

    engine.mock("UpdateBlockedPlayerList", function (blockPlayerList) {
        console_log("UpdateBlockedPlayerList", blockPlayerList);
    });

    //engine.mock('GetCustomizableObjectIdForItem', function (slotIndex, itemId) {
    //    console_log('engine received GetCustomizableObjectIdForItem:' + slotIndex + ", itemId:" + itemId);

    //    return {
    //        CustomizableObjectKey: "Torso",
    //        CustomizableObjectValue: "F_Body_C_01"
    //    };
    //});

    engine.mock(
        "GetWebStore",
        function (key) {
            var memoryDB = JSON.parse(localStorage.getItem("MOCK_MEMORY_DB")) || {};
            return memoryDB[key] || null;
        },
        true
    );

    engine.mock("SetWebStore", function (key, value) {
        var memoryDB = JSON.parse(localStorage.getItem("MOCK_MEMORY_DB")) || {};
        memoryDB[key] = value;
        return localStorage.setItem("MOCK_MEMORY_DB", JSON.stringify(memoryDB));
    });

    engine.mock("OnHostControllerMismatched", function () {
        console_log("OnHostControllerMismatched");
    });

    engine.mock("SetDualMatchInfo", function (url, packet) {
        console_log("SetDualMatchInfo", url, packet);
    });

    engine.mock("UpdateLobbyCharacterStatus", function (slotIndex, status) {
        console_log("UpdateLobbyCharacterStatus", slotIndex, status);
    });

    engine.mock("OnCompleteUpdateLobbyCharacters", function () {
        console_log("OnCompleteUpdateLobbyCharacters");
    });

    engine.mock("IsReconnectingToLastSession", function (reconnecting) {
        console_log("IsReconnectingToLastSession", reconnecting);
    });

    engine.mock("HasUseableMic", function () {
        return true;
    });
    engine.mock("UpdateEmoteInLobbyCharacter", function (slotIdx, stopEmote, emoteName) {
        console_log("UpdateEmoteInLobbyCharacter", slotIdx, stopEmote, emoteName);
    });

    engine.mock("ShowProgressiveSkin", function (category, baseGameItemId, gameItemId, options) {
        console_log("ShowProgressiveSkin", category, baseGameItemId, gameItemId, options);
    });

    engine.mock("SetupKillFeedSkinPreview", function (visible, baseGameItemId, gameItemId, nickname) {
        console_log("SetupKillFeedSkinPreview", visible, baseGameItemId, gameItemId, nickname);
    });

    engine.mock(
        "UpdateStatTrak",
        function (killOption, killVisible, numOfKills, headshotKillVisible, numOfHeadshotKill) {
            console_log("UpdateStatTrack", killOption, killVisible, numOfKills, headshotKillVisible, numOfHeadshotKill);
        }
    );

    engine.mock("GetChatListOfLastMatch", function () {
        return [];
    });

    engine.mock(
        "RequestUserGameOptionSettingLog",
        function () {
            setTimeout(() => {
                engine.trigger("OnUserGameOptionSettingLog", [
                    {
                        key: "test",
                        value: "value1",
                    },
                ]);
            }, 500);
        },
        true
    );

    document.addEventListener("mousedown", function (e) {
        // press mouse right button
        if (e.button === 2) {
            let elem = e.target;
            let dataInputGroup = undefined;

            while (Boolean(elem)) {
                const attrValue = elem.getAttribute("data-input-group");

                if (attrValue !== null) {
                    dataInputGroup = attrValue;
                    break;
                }

                elem = elem.parentElement;
            }

            engine.trigger("OnPressedMouseRight", dataInputGroup);
        }
    });

    document.addEventListener("mouseup", function (e) {
        // release mouse right button
        if (e.button === 2) {
            let elem = e.target;
            let dataInputGroup = undefined;

            while (Boolean(elem)) {
                const attrValue = elem.getAttribute("data-input-group");

                if (attrValue !== null) {
                    dataInputGroup = attrValue;
                    break;
                }

                elem = elem.parentElement;
            }

            engine.trigger("OnReleasedMouseRight", dataInputGroup);
        }
    });

    document.addEventListener("keydown", function (e) {
        if (e.key === "Enter") {
            engine.trigger("OnPressedEnter");
        }
    });

    engine.mock("RequestEOSOfferList", function () {
        console_log("PlayEmoteAnimation");
        setTimeout(() => {
            engine.trigger("RequestEOSOfferListResult", [
                {
                    currencyCode: "KRW",
                    description: "10,000 G-Coin (+1,200 Bonus)",
                    expirationDate: "0001.01.01-00.00.00",
                    longDescription:
                        "<!--textBlock-->â†µ<!--title-->â†µ# 11,200 G-Coinâ†µ<!--text-->â†µ10,000 G-Coin (+1,200 Bonus)â†µ",
                    numericPrice: 102000,
                    offerId: "14bfa6c131e04baaba863187f176fddb",
                    priceText: "",
                    purchaseLimit: -1,
                    purchasedCount: 0,
                    regularPrice: 102000,
                    regularPriceText: "",
                    releaseDate: "0001.01.01-00.00.00",
                    title: "11,200 G-Coin",
                },
                {
                    currencyCode: "KRW",
                    description:
                        "This special one-time purchase bundle contains a variety of items at a great value price! Everything you need to get your start on thâ€¦",
                    expirationDate: "0001.01.01-00.00.00",
                    longDescription:
                        "<!--textBlock-->â†µ<!--title-->â†µ# PUBG - Starter Packageâ†µ<!--text-->â†µThis special one-time purchase bundle contains a variety of items at â€¦",
                    numericPrice: 2000,
                    offerId: "ec587e4001004569aa5bf81fdb3bd830",
                    priceText: "",
                    purchaseLimit: -1,
                    purchasedCount: 0,
                    regularPrice: 2000,
                    regularPriceText: "",
                    releaseDate: "0001.01.01-00.00.00",
                    title: "PUBG - Starter Package",
                },
                {
                    currencyCode: "KRW",
                    description:
                        "Enjoy exclusive BATTLEGROUNDS Plus benefits! Users with Plus Status are matched only with other Plus Status users in competitive matcheâ€¦",
                    expirationDate: "0001.01.01-00.00.00",
                    longDescription:
                        "<!--textBlock-->â†µ<!--title-->â†µ# PUBG - BATTLEGROUNDS Plusâ†µ<!--text-->â†µEnjoy exclusive BATTLEGROUNDS Plus benefits! Users with Plus Statuâ€¦",
                    numericPrice: 13000,
                    offerId: "92bab4adab774d128c4e4b502672d18c",
                    priceText: "",
                    purchaseLimit: -1,
                    purchasedCount: 0,
                    regularPrice: 13000,
                    regularPriceText: "",
                    releaseDate: "0001.01.01-00.00.00",
                    title: "PUBG - BATTLEGROUNDS Plus",
                },
                {
                    currencyCode: "KRW",
                    description: "Description is not set",
                    expirationDate: "0001.01.01-00.00.00",
                    longDescription: "",
                    numericPrice: 2000,
                    offerId: "23f24af065e146d89730139cc1b5d03c",
                    priceText: "",
                    purchaseLimit: 0,
                    purchasedCount: 0,
                    regularPrice: 2000,
                    regularPriceText: "",
                    releaseDate: "0001.01.01-00.00.00",
                    title: "HIT & RUN VALUE PACK",
                },
            ]);
            engine.trigger("RequestEOSAudienceIdListResult", [
                "3ff2274d6b244c3194479a45e755033d",
                "5d23ecca0aa5477b8fdadcc722bbc525",
                "327585454ab04c61b40892a2979234b0",
                "924d0b2b346e4454b766998b834068ad",
                "38c65829a7a14dc1ba786dae575c3101",
                "95dc2d5795064f55bc80f3679422aa0c",
                "2301b320f1d044289032f6b9b9ebeabd",
            ]);
        }, 500);
    });

    engine.mock("GetClanNameUgcLevel", function () {
        return 3;
    });

    engine.mock("GetClanNoticeUgcLevel", function () {
        return 1;
    });

    engine.mock("RequestEOSCheckout", function () {
        console_log("RequestEOSCheckout");
    });
})();