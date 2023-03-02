#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "vo manh cuong lop ct05a";
    name.erase(0, name.find_first_not_of(" "));
    name.erase(name.find_last_not_of(" ") + 1);
    int pos = 0;
    while ((pos = name.find("  ", pos)) != -1) {
        cout << pos << endl;
        name.erase(pos, 1);
    }
    cout<< name << endl;
    return 0;
}
