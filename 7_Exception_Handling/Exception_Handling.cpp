//
// Created by LuckyE on 2024/11/29.
//
#include <iostream>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return a / b;
}

struct MyException:public exception
{
    const char* what() const throw()
    {
        return "C++ Exception";
    }
};

int main()
{
    int x = 50, y = 25;
    double z = 0;
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char* msg)
    {
        cerr << msg << endl;
    }

    try
    {
        throw MyException();
    }catch (MyException& e)
    {
        cout<<"MyException caught"<<endl;
        cout<<e.what()<<endl;
    }
    catch (...)
    {
        cout<<"other errors"<<endl;
    }

    return 0;
}
