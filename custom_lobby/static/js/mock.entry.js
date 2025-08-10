
// Entry 에 대한 mock API.
// 브라우저에서 테스트를 위해서 사용한다.
// 세번째 인자로 true가 들어가면 function call이라는 의미고, 아니면 trigger이다.

engine.mock('GetLobbyUrl', function () {
    return "http://localhost:23847";
}, true);

engine.mock('GetClientAuthData', function () {
    return {
		platformType:"None",
		userSerial:"UserId",
		accessToken:"abcde",
		playerNetId:"UserId_abcde",
	};
}, true);

engine.mock('GetDisplayResoultions', function () {
	return [
		{ X: 1024, Y: 768 },
		{ X: 1280, Y: 1024},
		{ X: 1920, Y: 1024 },
	];
}, true);

engine.mock('GetCurrentOptions', function () {
	return {
		resolution: '1280x1024',
		//resolution: '1280x124',
		quality: 'Low',
		fullscreen: 'true',
		gamma: '20',
		aim: '20',
		invertY:'false',
	};
}, true);

engine.mock('GetMapNames', function () {
	return ['Sanctuary', 'Highrise'];
}, true);

engine.mock('GetJoinMapNames', function () {
	return ['Any', 'Sanctuary', 'Highrise'];
}, true);

engine.mock('GetSearchServerResult', function () {
    return {
        bFinish: true,
        statusText: "Status message",
        entryList: [
            {
                serverName: 'Server1',
                currentPlayers: 5,
                maxPlayers: 12,
                gameType: 'FFA',
                mapName: 'TestMap',
                ping: 201,
                searchResultsIndex: 0,
            },
            {
                serverName: 'Server2',
                currentPlayers: 15,
                maxPlayers: 22,
                gameType: 'FFA',
                mapName: 'TestMap2',
                ping: 101,
                searchResultsIndex: 1,
            },
        ],
    };
}, true);


///////////////////////////////////////////////////////////////////////////////
// WebSocket wrapping 함수 이벤트 들.
engine.mock('Ws_NewWebsocket', function (name, url, cookie) {
    window.setTimeout(function () {
        engine.trigger('Ws_OnConnected', 1);
    }, 1000);
    windows.setTimeout(function () {
        engine.trigger('Ws_OnReceived', 1, 'null-json-data');
        engine.trigger('Ws_OnError', 1, 'unknown');
        engine.trigger('Ws_OnDisconnected', 1);
    }, 2000);
    return 1;      // return new WebSocket Id. (0 means failed to create)
}, true)

engine.mock('Ws_GetWebsocket', function (name) {
    return 0;      // return connected WebSocket Id, if 0, fail to find.
}, true)

engine.mock('Ws_Send', function (socketId, data) {
    console.log("call Ws_Send");
})
engine.mock('Ws_Close', function (socketId) {
    console.log("call Ws_Close");
})

//engine.mock('Ws_OnDisconnect', function (socketId) { })
//engine.mock('Ws_OnError', function (socketId, error) { })
//engine.mock('Ws_OnReceived', function (socketId, data) { })

///////////////////////////////////////////////////////////////////////////////
// 여기서 부터 이벤트.
engine.mock('Quit', function () {
    console.log('engine received Quit!!!!');
});

engine.mock('UpdateOptions', function (options) {
	console.log('engine received options');
	console.log(options);
});

engine.mock('StartHost', function (options) {
	console.log('engine received StartHost');
	console.log(options);
});

engine.mock('StartSearchJoin', function (options) {
    console.log('engine received StartSearchJoin');
    console.log(options);

    window.setTimeout(function () { engine.trigger('BeginServerSearch'); }, 1000);
});

engine.mock('JoinToServer', function (serverIndex) {
    console.log('engine received JoinToServer');
    console.log(serverIndex);
});

engine.mock('JoinToDedicatedServer', function (serverAddress) {
    console.log('engine received JoinToDedicatedServer:' + serverAddress);
});

engine.mock('InputFocusChange', function (isFocusIn) {
    console.log('engine received InputFocusChange:' + isFocusIn);
});

engine.mock('ReadFriendList', function (contextId) {
    engine.trigger('ReadFriendListResult', contextId, 'not supproted');
});
