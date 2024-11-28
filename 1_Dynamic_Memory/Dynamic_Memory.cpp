//
// Created by LuckyE on 2024/11/27.
//
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    double* pvalue = NULL; // Pointer initialized with null

    if(!((pvalue = new double)))
    {
        cout << "Error: out of memory." << endl;
        exit(1);
    }

    *pvalue = 29494.99;
    cout << "Value of pvalue: " << *pvalue << endl;

    delete pvalue;

    return 0;
}
