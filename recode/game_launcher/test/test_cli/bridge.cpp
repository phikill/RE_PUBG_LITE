// bridge.cpp
// Inclua o cabeçalho CLI

/* c/c++ code before call*/
void NativeFunction();


/* CLI Function call */
#using <mscorlib.dll>

using namespace System;

// Classe gerenciada (acessível no C#)
public ref class BridgeClass {
public:
    // Método para chamar código nativo
    void CallNativeCode() {
        NativeFunction();  // Função nativa C++
    }
};

/* c/c++ code */
#include<stdio.h>

// Função nativa C++ (não gerenciada)
void NativeFunction() 
{
    printf("Função nativa C++ foi chamada.\n");
}

int main() {
    // Criar uma instância da classe gerenciada
    BridgeClass^ bridge = gcnew BridgeClass();
    // Chamar o método que usa código nativo
    bridge->CallNativeCode();

    return 0;
}

