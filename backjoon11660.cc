#include <iostream>
using namespace std;
int arr[1026][1026];
int add[1026][1026];
int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i = 1 ; i < n+1; i++){
        for (int j = 1 ; j < n+1; j++){
            cin >> arr[i][j];

        }
    }
    cout<<arr[2][2];
    for (int i = 1 ; i < n+1; i++){
        for(int j = 1 ; j < n+1; j++){
            add[i][j] = add[i-1][j] + add[i][j-1]  - add[i-1][j-1] + arr[i][j];
        }
    }
    int x1,x2,y1,y2;
    for(int i = 0; i < m; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << add[x2][y2] - add[x1-1][y2] - add[x2][y1-1]+ add[x1-1][y1-1] << "\n"  ;

    }

}