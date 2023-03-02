#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool descending(int ele1 , int ele2 )
{
    return ele1 > ele2;
}

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    sort(v.begin(), v.end(),descending );
    for(int i = 0; i < v.size() ; i++ ){
       cout << v[i] << " ";
    }
    return 0;
}
