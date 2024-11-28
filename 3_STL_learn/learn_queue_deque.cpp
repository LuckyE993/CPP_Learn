//
// Created by LuckyE on 2024/11/25.
//
#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    queue<string> cars;
    cars.emplace("Volvo");
    cars.emplace("BMW");
    cars.emplace("Ford");
    cars.emplace("Mazda");

    cout << "-------------------" << endl;

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cout << "-------------------" << endl;

    cars.front() = "Tesla";
    cars.back() = "Audi";
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cout << "-------------------" << endl;

    deque<string> cars2 = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << cars2.front() << endl;
    cout << cars2.back() << endl;

    for (const auto& car : cars2)
    {
        cout << car << " ";
    }
    cout<<endl;
    cout << "----------change element---------" << endl;

    cars2[0] = "Tesla";
    cars2[3] = "Audi";

    for (const auto& car : cars2)
    {
        cout << car << " ";
    }
    cout<<endl;
    cout << "----------change element---------" << endl;

    cars2.emplace_front("Lucky");
    cars2.emplace_back("E");

    cout<<"-------------------"<<endl;
    for (const auto& car : cars2)
    {
        cout << car << " ";
    }
    cout<<endl;

    return 0;
}
