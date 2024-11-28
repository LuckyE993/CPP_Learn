//
// Created by LuckyE on 2024/11/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (const auto& car : cars)
    {
        cout << car << " ";
    }
    cout << endl;
    cout << "-------------------" << endl;

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cout << "-------------------" << endl;

    cout << cars.at(0) << endl;
    cout << cars.at(1) << endl;

    cout << "-------------------" << endl;

    cars.at(0) = "Opel";
    cout << cars.at(0) << endl;

    cout << "-------------------" << endl;

    cars.emplace_back("Tesla");
    cars.emplace_back("Audi");
    cars.emplace_back("Toyota");

    for (const auto& car : cars)
    {
        cout << car << " ";
    }
    cout << endl;

    cout << "-------------------" << endl;

    cout << cars.size() << endl;

    cout << "-------------------" << endl;

    cout << cars.empty() << endl;
    return 0;
}
