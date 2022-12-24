#include <string>
#include <iostream>
#include <regex>

using namespace std;

int main() {
 
    // ЗАДАНИЕ 7_2
    string name;
    cout << "Введите своё имя: ";
    cin >> name;
    regex reg("^([A-Z])([a-z]*)$");
    bool found = regex_match(name, reg);
    
    if (found){
        cout << "Исправьте имя " << name << "! \n \n";
    } else {
        cout << "Спасибо! \n \n";
    }
    
    regex re("^[a-z0-9_][a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}$");
    
    char arr[] = "На почте ilyamail.com находятся письма от alex@mail.ru и kira@inbox.ru";
        char *tmp_char;
        tmp_char = strtok(arr," ");
        while (tmp_char != NULL) {
            if (regex_search(tmp_char,re)) cout << tmp_char << "\n";
            tmp_char = strtok(NULL, " ");
        }
}
