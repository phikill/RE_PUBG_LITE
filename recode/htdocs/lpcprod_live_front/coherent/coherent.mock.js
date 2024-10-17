(function (engine) {
    if (engine.isAttached && !engine.forceEnableMocking) {
        return;
    }
    var OVERLAY_ID = "coherent-browser-debug-overlay",
        JS_CALLS_LIST_ID = "coherent-browser-debug-js-list",
        CPP_CALLS_LIST_ID = 'coherent-browser-debug-cpp-list';

    var logoDataUrl = "data:image/png;base64,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";
    var docsLink = "http://coherent-labs.com/Documentation/cpp/db/dbc/_java_script.html";

    var createBrowserOverlay = function () {
        var overlay = document.createElement("nav");
        overlay.id = OVERLAY_ID;
        overlay.classList.add("open");
        var html = "<div class='contents'>" +
                        "<img src='" + logoDataUrl + "'></img>" +
                        "<h1>Mocker</h1>" +
                        "<hr>" +
                        "<p>" +
                            "Click the buttons below or hit "+
                            "<strong>ENTER</strong> to " +
                            "mock interaction with the engine. Type " +
                            "<code>engine.hideOverlay()</code> " +
                            "in the console to hide this overlay. See " +
                            "the " +
                            "<a target='_blank' href='" + docsLink + "'>" +
                            "docs</a> for details." +
                        "</p>" +
                        "<h2 class='left'>" +
                            "Call / trigger this <em>UI</em> " +
                            "function / event:" +
                        "</h2>" +
                        "<h2 class='right'>with arguments:</h2>" +
                        "<ul id='" + JS_CALLS_LIST_ID + "'></ul>" +
                        "<hr>" +
                        "<h2 class='left'>"+
                            "Call / trigger this <em>Engine</em> " +
                            "function / event:" +
                        "</h2>" +
                        "<h2 class='right'>with arguments:</h2>" +
                        "<ul id='" + CPP_CALLS_LIST_ID + "'></ul>" +
                   "</div>" +
                   "<div class='docked-contents'>" +
                        "<button id='coherent-dock-overlay-button'>" +
                            "Dock me!" +
                        "</button>" +
                   "</div>";

        overlay.innerHTML = html;
        var OverlayState = {
            Open: 0,
            Docked: 1,
            Hidden: 2
        };
        overlay.state = OverlayState.Open;
        overlay.querySelector("#coherent-dock-overlay-button")
                .addEventListener("click", function () {
                    if (overlay.state == OverlayState.Open) {
                        overlay.state = OverlayState.Docked;
                        overlay.classList.remove("open");
                        overlay.classList.add("docked");
                    }
                    else if (overlay.state == OverlayState.Docked) {
                        overlay.state = OverlayState.Open;
                        overlay.classList.remove("docked");
                        overlay.classList.add("open");
                    }
                });
        return overlay;
    };
    var executeMock = function (name, isCppCall, isEvent, argsInput) {
        var functionArgs = "'" + name + "'";
        if (argsInput.value.length !== 0) {
            functionArgs += ", " + argsInput.value;
        }
        var command = (isCppCall && !isEvent) ? "call" : "trigger";
        try {
            eval("engine." + command + "(" + functionArgs + ")");
        }
        catch (e) {
            var text = "An error occured while executing mock function: ";
            console.warn(text, e);
        };
    };

    var LI_ID_PREFIX = "COHERENT_MOCKING_";
    var addMockButton = function (name, args, isCppCall, isEvent) {
        var id = LI_ID_PREFIX + name;
        if (document.getElementById(id) !== null) {
            // Button has already been created
            return;
        }
        var li = document.createElement("li");
        li.id = id;
        var button = document.createElement("button");
        button.textContent = name;
        button.classList.add("left");
        li.appendChild(button);
        var argsInput = document.createElement("input");
        argsInput.placeholder = args;
        argsInput.classList.add("right");
        argsInput.addEventListener("keyup", function (eventArgs) {
            if (eventArgs.keyCode === 13) { // Enter
                button.onclick();
            }
        }, false);
        li.appendChild(argsInput);

        button.onclick = executeMock.bind(undefined,
                                          name,
                                          isCppCall,
                                          isEvent,
                                          argsInput);

        var parentId = isCppCall ? CPP_CALLS_LIST_ID : JS_CALLS_LIST_ID;
        var parentSelector = "#" + OVERLAY_ID + " #" + parentId;
        var menu = document.querySelector(parentSelector);
        menu.appendChild(li);
    };


    var removeMockButton = function (name, isFunctionCall) {
        var li = document.getElementById(LI_ID_PREFIX + name);
        if (li && li.parentNode) {
            li.parentNode.removeChild(li);
        }
    };

    var systemEvents = [
        "_coherentCreateImageData",
        "_coherentUpdatedImageData",
        '_Result',
        '_Register',
        '_Unregister',
        '_OnReady',
        '_OnError',
        'replayEventsRecord'
    ]


    engine.browserCallbackOn = function (name, callback) {
        if (systemEvents.indexOf(name) === -1)
            this._mockImpl(name, callback, false, true);
    };

    engine.browserCallbackOff = function (name) {
        if (systemEvents.indexOf(name) === -1)
            removeMockButton(name);
    };

    engine.browserCallbackMock = addMockButton;

    var overlay = createBrowserOverlay();
    document.body.appendChild(overlay);


    engine.hideOverlay = function () {
        overlay.classList.add("hidden");
        overlay.classList.remove("shown");
    };
    engine.showOverlay = function () {
        overlay.classList.add("shown");
        overlay.classList.remove("hidden");
    };
})(engine || {});
