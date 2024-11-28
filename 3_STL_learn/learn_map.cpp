//
// Created by LuckyE on 2024/11/26.
//
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,int> people = {{"Tom", 18}, {"Jerry", 20}};

    cout<<"Tom's age is "<<people["Tom"]<<endl;
    cout<<"Jerry's age is "<<people.at("Jerry")<<endl;

    people["Tom"] = 20;
    cout<<"Tom's age is "<<people["Tom"]<<endl;

    cout<<"prefer to use at() to get value, because it will throw exception if key not exist"<<endl;
    cout<<"Tom's age is "<<people.at("Tom")<<endl;

    people["John"] = 25;
    cout<<"John's age is "<<people["John"]<<endl;

    // Trying to add two elements with equal keys, it will only keep the first one
    people.insert({"LuckyE", 23});
    people.insert({"LuckyE", 24});
    cout<<"LuckyE's age is "<<people.at("LuckyE")<<endl;

    people.erase("Tom");
    cout<<"-----------------"<<endl;

    for (auto person : people)
    {
        cout<<person.first<<"'s age is "<<person.second<<endl;
    }
    return 0;
}
