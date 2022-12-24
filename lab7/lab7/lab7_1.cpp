#include <iostream>
#include <string>
using namespace std;

void print(string s) {
    cout << s << endl;
}

int main() {
    
    string s1;
    cout<<"Введите строку = ";
    cin>>s1;
    
    print(s1.substr(1,3));
    
    int index;
    index = s1.find("a");
    if(index == -1)
    {
        cout<<"Символа не найдено"<<endl;
    }
    else
    {
        print(to_string(index));
    }
    return 0;
}
