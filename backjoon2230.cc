#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int arr[100001];
int minx = 0x7fffffff;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int start = 0;
    int end = 0;
    cin >> n >> m;
    int num;
    for (int i = 0 ; i < n; i++ ){
        cin >> num;
        arr[i] = num;
    }
    sort(arr , arr + n);
    while ( end  < n ){
        int resu = arr[end] - arr[start] ;
        if(resu>=m){
            minx = min(minx,resu);
            start++;
        }
        else end ++ ;
    }
    cout << minx;
    
}