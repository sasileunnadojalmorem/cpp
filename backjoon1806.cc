#include<iostream>
using namespace std;
int n,m;
int arr[100001];
int presum[100002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int minx = n +2;
    int start = 0 ; 
    int end = 0; 
    int num;
    int sum = 0;
    for (int i = 0 ; i < n; i++){
        cin >> num;
        arr[i] = num;

    }
    presum[0] = 0;
    for (int i = 0 ; i < n+1; i++){
        presum[i] = presum[i-1] + arr[i-1];   
    }
    while (end < n && start < n){
        sum = presum[end+1] - presum[start];
        if (sum>=m){
            minx = min(end-start+1,minx);
            start ++ ;
        }
        else {
            end ++;
        }
    }
    if (minx == n+2){
        cout << 0;
    }
    else cout << minx;
   

}