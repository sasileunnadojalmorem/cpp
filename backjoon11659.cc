#include<iostream>
using namespace std;
int n;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,c;
    
    cin >> n >> c;
    int a[100001];
    
    for (int i = 1; i < n+1; i ++){
        int num ;
        cin >> num;
        a[i] = a[i-1]+ num;
    }
    for (int i = 0; i < c; i++){
        int x,y;
        cin >> x >> y;
        cout << a[y] - a[x-1]<< '\n';
    }

}