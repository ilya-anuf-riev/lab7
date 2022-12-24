#include <string>
#include <iostream>
#include <regex>
#include <math.h>
#include <cmath>
#include <fstream>
#include <vector>
#include "Settings.h"
using std::string;

using namespace std;

void print(std::vector<float> v){
    
    for (int n : v) std::cout << n << " ";
    std::cout << "\n---------------------------------------------------------------------\n";
    
}
int main() {

vector <float> arr{0,2,4,8,11};
print(arr);
auto i = arr.begin();
i++;
i++;
i++;
arr.insert(i, -2);
print(arr);
arr.pop_back();
print(arr);

Settings user;
user.Add("Первое",17);
user.Add("Второе",29);
user.Add("Третье",10);
user.Add("Четвёртое",7);

user.print_map();

cout << user.Get("Первое") << "\n";
cout << user.Get("Четвёртое") << "\n";

}
