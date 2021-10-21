#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;


    
int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n ;
    
    vector<vector<int>> b(n,vector<int>(2,0));
    for(int i = 0; i<n ;i++){
        cin>>b[i][1];
        cin>>b[i][0]; 
    
    }
    sort(b.begin(),b.end());
    for(int i = 0; i < n  ; i++)
    {
        cout << b[i][1] << ' ' << b[i][0]  << '\n';
    }

}