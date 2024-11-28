//
// Created by LuckyE on 2024/11/25.
//
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> cars;

    cars.emplace("Volvo");
    cars.emplace("BMW");
    cars.emplace("Ford");
    cars.emplace("Mazda");

    cout << "-------------------" << endl;
    cout << cars.top()<<endl;

    cars.top() = "Tesla";
    cout << cars.top() << endl;

    cout << "-------------------" << endl;

    cars.pop();
    cout << cars.top() << endl;

    cout << "-------------------" << endl;

    cout << cars.size() << endl;

    cout << "-------------------" << endl;
    return 0;
}
