#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cout << "Nhap so phan tu cau mang: ";
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++) {
        cout << "nhap v[" << i<< "] :";
        cin >> v[i];
    }
    cout << "ban muon xoa bo so o vi tri thu may: ";
    cin >> k;
    if(k>=1 && k <= n){
        v.erase(v.begin() +(k-1));
    }else{
        return;
    }
    for(int i = 0; i < v.size() ; i++ ){
       cout << v[i] << " ";
    }
    return 0;
}
