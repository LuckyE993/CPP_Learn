//
// Created by LuckyE on 2024/11/27.
//
#include <iostream>
#include <memory>
#include <cstring>
using namespace std;

class Box
{
public:
    Box()
    {
        cout << "Constructor called!" << endl;
    }

    ~Box()
    {
        cout << "Destructor called!" << endl;
    }
};


int main()
{
    double* pvalue = nullptr; // Pointer initialized with null

    if (!((pvalue = new double)))
    {
        cout << "Error: out of memory." << endl;
        exit(1);
    }

    *pvalue = 29494.99;
    cout << "Value of pvalue: " << *pvalue << endl;

    delete pvalue;

    char* pcharvalue = nullptr; // Pointer initialized with null

    pcharvalue = new char [20];
    strcpy(pcharvalue, "LuckyE");
    cout << "Value of pcharvalue: " << pcharvalue << endl;

    delete [] pcharvalue;

    cout << "--------------------------------" << endl;

    int** pMulti = nullptr;
    pMulti = new int*[3]; // 分配 3 个指针
    // 为每个指针分配大小为 4 的数组
    for (int i = 0; i < 3; ++i)
    {
        pMulti[i] = new int[4];
    }
    // 使用完毕后记得释放内存
    for (int i = 0; i < 3; ++i)
    {
        delete[] pMulti[i]; // 释放每一行
    }
    delete[] pMulti; // 释放主指针数组

    cout << "--------------------------------" << endl;

    Box* pbox = new Box[4];
    delete[] pbox;

    return 0;
}
