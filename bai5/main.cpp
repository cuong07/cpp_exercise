#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k , x;
    cout << "Nhap so phan tu cau mang: ";
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++) {
        cout << "nhap v[" << i<< "] :";
        cin >> v[i];
    }
    cout << "Nhap gia tri muon thay the: ";
    cin >> k;
    cout << "nhap vi tri muon thay the: ";
    cin >> x;
    v.insert(v.begin() + x , k);
    for(int i = 0; i < v.size() ; i++ ){
       cout << v[i] << " ";
    }
    return 0;
}
