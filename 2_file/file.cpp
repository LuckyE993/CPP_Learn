//
// Created by LuckyE on 2024/11/25.
//
#include <iostream>
#include <fstream>
using namespace std;

string filename_path = "../file/filename.txt";
string read_file_path = "../file/readfile.txt";

int main()
{
    ofstream MyFile(filename_path);

    MyFile << "Files can be tricky, but it is fun enough!";

    MyFile.close();

    string myText;
    ifstream MyReadFile(read_file_path);

    while (getline(MyReadFile, myText))
    {
        cout << myText << endl;
    }

    MyReadFile.close();

    return 0;
}
