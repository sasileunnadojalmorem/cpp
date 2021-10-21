#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,num = 0 ;
    cin >> n;
    vector<int> a(10000);
    for(int i = 0; i <n; i++){
        cin  >> num;
        num = num - 1;
        a[num] += 1 ;
        
    }
    for(int i =0; i<10000 ; i++){
        for (int j = 0 ; j<a[i]; j++){
            cout << i+1 << "\n";
        }
    }
}