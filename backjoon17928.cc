#include<iostream>
#include <stack>
using namespace std;
int n;
int num[1000002];
int arr[1000002];
stack<int> sta;
int maxa = -1;

int main (){
    cin >> n;
    for (int i = 1; i < n + 1; i++) 
        cin >> num[i];
    for (int i = n+1; i > 0 ; i--){
        
       
        while(!sta.empty() && num[i] >= sta.top()) 
            sta.pop();
        

        if (sta.empty()) arr[i] = -1;
        else arr[i] = sta.top();

        sta.push(num[i]);
        
    }
    for (int i = 1; i < n+1; i++ ){
        cout << arr[i] << " ";
    }
}