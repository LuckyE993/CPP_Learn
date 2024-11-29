//
// Created by LuckyE on 2024/11/29.
//
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T const& Max(T const& a, T const& b)
{
    return a < b ? b : a;
}

template <class T>
class Stack
{
private:
    vector<T> elems;

public:
    void push(T const&);
    void pop();
    T top();

    bool empty()
    {
        return elems.empty();
    }
};


template <class T>
void Stack<T>::push(T const& elem)
{
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
    if (elems.empty())
    {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    elems.pop_back();
}

template <class T>
T Stack<T>::top()
{
    if (elems.empty())
    {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    return elems.back();
}

// Function template
template <typename T>
void printValue(T value)
{
    cout << "Value: " << value << endl;
}

// Class template
template <typename T>
class Holder
{
public:
    Holder(T value):data(value){}

    void show()
    {
        cout<<data<<endl;
    }
private:
    T data;
};

int main()
{
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 3.14;
    double f2 = 3.11;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;

    try
    {
        Stack<int> intStack;
        Stack<string> stringStack;

        intStack.push(7);
        cout << intStack.top() << endl;

        stringStack.push("Hello");
        cout << stringStack.top() << std::endl;

        stringStack.pop();
        intStack.pop();
    }
    catch (...)
    {
        cout << "Exception occurred" << endl;
    }

    printValue(42);
    printValue("Hello");
    printValue(3.14);

    // only available in C++17
    Holder h1(42);
    Holder h2("Hello");
    Holder h3(3.14);

    h1.show();
    h2.show();
    h3.show();
    return 0;
}
