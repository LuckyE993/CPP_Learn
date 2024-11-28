//
// Created by LuckyE on 2024/11/26.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void print(vector<string> ds)
{
    for (auto a : ds)
    {
        cout << a << " ";
    }
    cout << endl;
}

void print(vector<int> ds)
{
    for (auto a : ds)
    {
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    print(cars);

    sort(cars.begin(), cars.end());
    print(cars);

    sort(cars.rbegin(), cars.rend());
    print(cars);

    vector<int> numbers = {1, 2, 7, 3, 2, 56, 7, 4, 5};
    auto it = find(numbers.begin(), numbers.end(), 7);
    if (it != numbers.end())
    {
        cout << "Found " << *it << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    auto it2 = upper_bound(numbers.begin(), numbers.end(), 2);
    if (it2 != numbers.end())
    {
        cout << "Found " << *it2 << endl;
    }
    else
    {
        cout << "Not found" << endl;
        cout << *it2 << endl;
    }

    auto max_it = max_element(numbers.begin(),numbers.end());
    cout<<"Max element is "<<*max_it<<endl;

    auto min_it = min_element(numbers.begin(),numbers.end());
    cout<<"Min element is "<<*min_it<<endl;

    vector<int> copy_vec(numbers.size());
    copy(numbers.begin(),numbers.end(),copy_vec.begin());
    print(copy_vec);

    fill(copy_vec.begin(),copy_vec.end(),0);
    print(copy_vec);

    cout << rand()<<endl;
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNum = rand() % 10001;

    cout << randomNum;
    return 0;
}
