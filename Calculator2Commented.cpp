#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

namespace Calculator // namespace to keep it clean :)
{
    void DoMath(int d, int e) // we will add the int's d + int e.
    {
        std::cout << d + e << std::endl; // print out the integers.
        d = 0; // clear it so we wont add the same exact thing :D
        e = 0;
    }
    
    void DoSubtract(int a, int b) // use - for subtraction.
    {
        std::cout << a - b << std::endl; // subtract b from a.
        Sleep(100); // remove if you are big brain :D
        a = 0;//as again change the integer into NULL;
        b = 0;
    }
}

int main(){
    Calculator::DoMath(5, 5); // return "10"
    Calculator::DoSubtract(10, 4); // returns "6"
    getchar();//when someone types a letter and clicks enter.
    exit(0);//kill the process.
    return NULL;//need return since its a int.
}
