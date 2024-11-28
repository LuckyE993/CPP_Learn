//
// Created by LuckyE on 2024/11/27.
//
#include <iostream>
using namespace std;

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(); // This is the constructor
    Line(double len);
    ~Line(); // This is the destructor
private:
    double length;
};

Line::Line()
{
    cout << "Object is being created" << endl;
}

// Line::Line(double len)
// {
//     cout << "Object is being created, length = " << len << endl;
//     length = len;
// }

Line::Line(double len): length(len)
{
    cout << "Object is being created, length = " << len << endl;
}

Line::~Line()
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

class CopyLine
{
public:
    CopyLine();
    CopyLine(int len);
    CopyLine(const CopyLine& obj); // This is the copy constructor
    ~CopyLine();

    int getLength();
    void setLength(int len);

private:
    int* ptr;
};

CopyLine::CopyLine()
{
    cout << "Object is being created" << endl;
    ptr = new int;
}

CopyLine::CopyLine(int len)
{
    cout << "Object is being created, length = " << len << endl;
    ptr = new int;
    *ptr = len;
}

CopyLine::CopyLine(const CopyLine& obj)
{
    cout << "Object is being created by copy constructor" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

CopyLine::~CopyLine()
{
    cout << "Object is being deleted" << endl;
}


int CopyLine::getLength()
{
    return *ptr;
}

void CopyLine::setLength(int len)
{
    *ptr = len;
}


int main()
{
    Line line1;
    line1.setLength(100.0);
    cout << "Length of line: " << line1.getLength() << endl;

    Line line2 = line1;
    cout << "Length of line2: " << line2.getLength() << endl;

    CopyLine copyLine;
    copyLine.setLength(10);
    cout << "Length of copyLine: " << copyLine.getLength() << endl;

    CopyLine copyLine2 = copyLine;
    cout << "Length of copyLine2: " << copyLine2.getLength() << endl;


    return 0;
}
