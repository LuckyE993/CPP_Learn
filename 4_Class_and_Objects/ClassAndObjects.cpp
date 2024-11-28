//
// Created by LuckyE on 2024/11/27.
//
#include <iostream>
#include <vector>

class Box
{
private:
    double length{};
    double breadth{};
    double height{};

public:
    static int boxCount;

    Box()
    {
        boxCount++;
    }

    friend void display_box(Box box);

    double getVolume() const;

    static int getCount()
    {
        return boxCount;
    }

    void setBox(double len, double bre, double hei)
    {
        length = len;
        breadth = bre;
        height = hei;
    }

    int compare(const Box box) const
    {
        return this->getVolume() > box.getVolume();
    }
};

void display_box(Box box)
{
    std::cout << "Length: " << box.length << std::endl;
    std::cout << "Breadth: " << box.breadth << std::endl;
    std::cout << "Height: " << box.height << std::endl;
}

class Coordinates
{
private:
    int latitude;
    int longitude;

public:
    explicit Coordinates(int lat = 0, int lon = 0)
    {
        latitude = lat;
        longitude = lon;
    }

    Coordinates& setLatitude(int lat)
    {
        latitude = lat;
        return *this;
    }

    Coordinates& setLongitude(int lon)
    {
        longitude = lon;
        return *this;
    }

    void display() const
    {
        std::cout << "Latitude: " << latitude << std::endl;
        std::cout << "Longitude: " << longitude << std::endl;
    }
};

double Box::getVolume() const
{
    return length * breadth * height;
}

int Box::boxCount = 0;

int main()
{
    std::cout << "Total objects: " << Box::getCount() << std::endl;

    Box Box1;
    Box Box2;

    Box* ptrBox;
    ptrBox = &Box1;

    std::cout << "Total objects: " << Box::boxCount << std::endl;

    Box1.setBox(10, 20, 30);
    Box2.setBox(20, 30, 40);

    std::cout << "Volume of Box1: " << ptrBox->getVolume() << std::endl;
    std::cout << "Volume of Box2: " << Box2.getVolume() << std::endl;

    if (Box1.compare(Box2))
    {
        std::cout << "Box1 is larger than Box2" << std::endl;
    }
    else
    {
        std::cout << "Box2 is larger than Box1" << std::endl;
    }

    Coordinates obj;
    obj.setLatitude(10).setLongitude(20);
    obj.display();

    display_box(Box1);
    display_box(Box2);

    return 0;
}
