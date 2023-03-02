#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s ;
    cout << "Nhap chuoi s: ";
    getline(cin , s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
}
