using System;
using System.Runtime.InteropServices;

class Program {
    [DllImport("native.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern int Add(int a, int b);

    static void Main() {
        int result = Add(5, 10);
        Console.WriteLine("Resultado da função nativa: " + result);
    }
}