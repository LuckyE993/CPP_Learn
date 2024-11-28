//
// Created by LuckyE on 2024/11/25.
//
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (const auto& car : cars)
    {
        cout << car << " ";
    }
    cout << endl;
    cout << "-------------------" << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cout << "-------------------" << endl;

    cars.front() = "Opel";
    cars.back() = "Toyota";

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cout << "-------------------" << endl;

    cars.emplace_front("Tesla");
    cars.emplace_back("VW");

    for (const auto& car : cars)
    {
        cout << car << " ";
    }

    cout << endl;
    cout << "-------------------" << endl;

    cout << cars.size() << endl;
    return 0;
}
