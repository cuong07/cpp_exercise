#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string name;
    cout << "Nhap ten: ";
    getline(cin , name);
    string firstName, lastName;
    int pos = name.find_last_of(' ');
    lastName = name.substr(pos+1);
    firstName = name.substr(0, pos);
    cout <<  lastName + " " + firstName;
    return 0;
}
