//
// Created by LuckyE on 2024/11/26.
//
#include <iostream>
#include <set>
using namespace std;

void print(set<string> ds)
{
    for (auto a : ds)
    {
        cout << a << " ";
    }
    cout << endl;
}

void print(set<int> ds)
{
    for (auto a : ds)
    {
        cout << a << " ";
    }
    cout << endl;
}

void print(set<int, greater<int>> ds)
{
    for (auto a : ds)
    {
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    for (auto car : cars)
    {
        cout << car << " ";
    }
    cout << endl;
    cout <<
        "The elements in the set are sorted automatically. \n In this case, alphabetically, as we are working with strings."
        << endl;

    set<int> numbers = {9, 5, 1, 3, 6, 2, 3, 3, 3, 3};
    for (auto number : numbers)
    {
        cout << number << " ";
    }

    cout << "-------------------" << endl;
    set<int, greater<int>> numbers2 = {9, 5, 1, 3, 6, 2, 3, 3, 3, 3};
    print(numbers2);

    cars.insert("Tesla");
    cars.insert("Audi");
    print(cars);

    cars.erase("Ford");
    print(cars);

    cars.clear();
    print(cars);

    cars.insert("Volvo");
    cout<<"cars size: "<<cars.size()<<endl;

    return 0;
}
