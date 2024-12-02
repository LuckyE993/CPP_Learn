//
// Created by LuckyE on 2024/12/2.
//
#include <functional>
#include <iostream>
#include <thread>

using namespace std;

void process(function<void()> func)
{
    func();
}

int main()
{
    auto add = [](int a, int b) -> int
    {
        return a + b;
    };

    std::cout << add(3, 4) << endl;

    int x = 10;
    int y = 20;
    auto lambda_value = [x]()
    {
        cout << "X: " << x << endl;
    };
    lambda_value();

    auto lambda_ref = [&y]()
    {
        cout << "Lambda_ref: " << y << endl;
    };
    lambda_ref();

    auto lambda_mix = [x,&y]()
    {
        cout << "Lambda_mix: " << x << "  " << y << endl;
    };
    lambda_mix();

    auto lambda_cap_value = [=]()
    {
        cout << "Lambda Cap all Value: " << x << endl;
    };
    x = 100;
    lambda_cap_value();

    auto lambda_cap_ref = [&]()
    {
        cout << "Lambda Cap all Ref: " << y << endl;
    };
    lambda_cap_ref();

    auto div = [](int x, int y)-> double
    {
        return x / (double)y;
    };
    cout << "Lambda_Div: " << div(x, y) << endl;

    auto lambda_infer_type = [](auto x, auto y)
    {
        return x + y;
    };
    cout << "Lambda infer type: " << lambda_infer_type(4, 5.6) << endl;

    auto lambda_mutable = [x]() mutable
    {
        x = 20;
        return x;
    };
    cout << "Lambda mutable: " << lambda_mutable() << endl;

    process([]()
    {
        std::cout << "Hello from Lambda!" << std::endl;
    });

    function<int(int, int)> lambda_STL = [](int a, int b)
    {
        return a + b;
    };

    cout << "Lambda_STL: " << lambda_STL(4, 3) << endl;

    std::thread t([]()
    {
        std::cout << "Running in a thread!" << std::endl;
    });

    t.join();

    return 0;
}
