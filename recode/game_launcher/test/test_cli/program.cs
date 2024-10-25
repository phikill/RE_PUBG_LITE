// program.cs
using System;

class Program {
    static void Main() {
        // Instancia a classe gerenciada do C++/CLI
        BridgeClass bridge = new BridgeClass();
        // Chama o método que invoca código nativo
        bridge.CallNativeCode();
    }
}