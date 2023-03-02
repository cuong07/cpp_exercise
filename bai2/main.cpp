#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout << "Nhap so phan tu cau mang: ";
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++) {
        cout << "nhap v[" << i<< "] :";
        cin >> v[i];
    }

    for(int i = 0; i < n ; i++ ){
        if(v[i] % 2 == 0)
            cout << v[i] << " ";
    }

    return 0;
}
