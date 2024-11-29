//
// Created by LuckyE on 2024/11/29.
//
#include <iostream>
using namespace std;

class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }

    void setHeight(int h)
    {
        height = h;
    }

    void showInfo()
    {
        cout << "Width is: " << width << endl;
        cout << "Height is: " << height << endl;
    }

protected:
    int width = 0;
    int height = 0;
};

class Rectangle : public Shape
{
public:
    int getAera()
    {
        return (width * height);
    }
};

class Car : virtual public Shape
{
public:
    void drive()
    {
        cout << "Car is driving" << endl;
    }

    void show()
    {
        cout << "Car is showing" << endl;
    }
};

class Boat : virtual public Shape
{
public:
    void sail()
    {
        cout << "Boat is sailing" << endl;
    }

    void show()
    {
        cout << "Boat is showing" << endl;
    }
};

class DualModeVehicle : public Car, public Boat
{
public:
    void use()
    {
        drive();
        sail();
    }

    void show()
    {
        Car::show();
        Boat::show();
    }

    void showInfo()
    {
        Car::showInfo();
        Boat::showInfo();
    }
};

int main()
{
    Rectangle rectangle;
    rectangle.setHeight(20);
    rectangle.setWidth(10);
    cout << "Rectangle aera is: " << rectangle.getAera() << endl;
    //--------------------------------
    DualModeVehicle dualModeVehicle;
    dualModeVehicle.use();
    dualModeVehicle.show();
    dualModeVehicle.showInfo();
    return 0;
}
