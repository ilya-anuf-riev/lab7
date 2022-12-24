#include <string>
#include <iostream>
#include <regex>
#include <math.h>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    float r;
    cout << "Введите радиус окружности: ";
    cin >> r;
    cout << "Длина окружности = " << trunc(2 * M_PI * r * 1000 + 0.5) / 1000 << "\n";
    
    string str;
    fstream file;
    cout << "Введите строку: ";
    cin >> str;
    string f = "/Users/ilaanufriev/lab7/lab7/text.txt\ ";
    string data = " ";
    
    while (true){
        if(str == "read"){
            file.open(f, ios::in);
            cout << "\n Содержимое файла: \n";
            string data = " ";
            string line;
            while (getline(file, line)) {
                data += line + "\n";
            }
            file.close();
            cout << data << "\n";
        }
        else if(str == "erase"){
            file.open(f, std::ios::out);
            file << " ";
            file.close();
        }
        else if(str == "exit"){
            break;
        }
        else{
            file.open(f, ios::in);
            string data = " ";
            string line;
            while (getline(file, line)) {
                data += line + "\n";
            }
            file.close();
            file.open(f, ios::out);
            file << data;
            file << str;
            file << "\n";
            file.close();
        }
        cout << "Введите строку: ";
        cin >> str;
    }
}
