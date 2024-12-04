#include <iostream>
using namespace std;

class FunctionOverLoad
{
public:
    void fun()
    {
        cout << "I am a function with no arguments." << endl;
    }

    void fun(int x)
    {
        cout << "I am a function with int  arguments." << endl;
    }

    void fun(double x)
    {
        cout << "I am a function with double arguments." << endl;
    }
};

int main()
{
    FunctionOverLoad obj;
    obj.fun();
    obj.fun(6);
    obj.fun(6.4);
    return 0;
}
