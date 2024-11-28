//
// Created by LuckyE on 2024/11/27.
//
#include <iostream>
#include <cstring>
using namespace std;

class MyClass
{
public:
    char* data;

    MyClass() : data(nullptr)
    {
    }

    // 构造函数
    MyClass(const char* str)
    {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // 拷贝构造函数
    MyClass(const MyClass& obj)
    {
        data = new char[strlen(obj.data) + 1];
        strcpy(data, obj.data);
    }

    // 移动构造函数
    MyClass(MyClass&& obj) noexcept
    {
        data = obj.data;
        obj.data = nullptr;
    }

    // 析构函数
    ~MyClass()
    {
        delete[] data;
    }

    // 拷贝赋值操作符
    MyClass& operator=(const MyClass& obj)
    {
        if (this != &obj)
        {
            delete[] data;
            data = new char[strlen(obj.data) + 1]; //深拷贝
            strcpy(data, obj.data);
        }
        return *this;
    }

    // 移动赋值操作符
    MyClass& operator=(MyClass&& obj) noexcept
    {
        if (this != &obj)
        {
            delete[] data;
            data = obj.data;
            obj.data = nullptr;
        }
        return *this;
    }
};

class CopyClass
{
private:
    int* data;

public:
    CopyClass(int value)
    {
        data = new int(value);
    }

    // //Shallow copy
    // CopyClass(const CopyClass& obj)
    // {
    //     data = obj.data;
    // }

    //Deep copy
    CopyClass(const CopyClass& obj)
    {
        data = new int(*obj.data);
    }

    ~CopyClass()
    {
        delete data;
    }

    void display()
    {
        cout << "Data: " << *data << endl;
    }
};


int main()
{
    MyClass obj1("Hello");
    MyClass obj2 = obj1;
    cout << "obj2.data: " << obj2.data << endl;
    MyClass obj3("World");
    obj3 = obj1;
    cout << "obj3.data: " << obj3.data << endl;

    MyClass obj4;
    obj4 = move(obj3);
    cout << "obj4.data: " << obj4.data << endl;

    CopyClass obj5(5);
    CopyClass obj6 = obj5;
    obj5.display();
    obj6.display();
    //shallow copy output: free(): double free detected in tcache 2

    return 0;
}
