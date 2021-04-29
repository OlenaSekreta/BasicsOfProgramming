#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define SIZE 100

void putIntoFile()
{
    ofstream MyFile("filename.txt");

    MyFile << "hi!! olleh wor!d dlrow";

    MyFile.close();
}

void readLine(const char* filename)
{
    string line;

    ifstream MyReadFile;
    MyReadFile.open(filename);

    cout << "Reading from the file" << endl;

    while (getline(MyReadFile, line))
    {
        cout << line << '\n';
    }

}

void readFromFile(const char* filename)
{

    char data[SIZE];

    ifstream MyReadFile;
    MyReadFile.open(filename);


    cout << "Reading from the file" << endl;
    MyReadFile >> data;

    cout << data << endl;

    MyReadFile >> data;
    cout << data << endl;

    MyReadFile.close();

}

void progr() {
    char str[SIZE];
    cout << "Enter string: ";
    cin.getline(str, SIZE);
    char* result;

    for (int i = 1; i < strlen(str); ++i) {
        char buffer[SIZE] = "";
        if (str[i] > 67 && str[i] < str[i] < 96) {
            buffer[i] = str[i];
        }
        else {
            continue;
        }
        if (str[i] == ' ' && str[i - 1] != ' ') {

        }
}




int main()
{
    putIntoFile();
    readLine(filename);
    readFromFile(filename);
    

}
//Надто мало часу!!!!!!!!!!!!