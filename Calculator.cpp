#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

namespace Calculator
{
    void DoMath(int d, int e)
    {
        std::cout << d + e << std::endl;
    }
    
    void DoSubtract(int a, int b)
    {
        std::cout << a - b << std::endl;
        Sleep(100);
        a = 0;
        b = 0;
    }
}

int main(){
    Calculator::DoMath(5, 5); // return "10"
    Calculator::DoSubtract(10, 4); // returns "6"
    getchar();
    exit(0);
    return NULL;
}
