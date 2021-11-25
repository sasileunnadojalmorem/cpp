#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int arr[101][101];

int n,q,z;
int xx[4] = {0,-1,0,1};
int xy[4] = {-1,0,1,0};
queue<pair<int,int>> que; 
void dfs(int x,int y){
    arr[x][y] = 1;
    que.push(make_pair(x,y));
    while (!que.empty()){
        int num1 = que.front().first;
        int num2 = que.front().second;
        que.pop();
        for (int i =0; i< 4; i++){
            int xxx = num1 + xx[i];
            int xxy = num2 + xy[i];
            if (xxx < 0 || xxx >= n || xxy < 0 || xxy >= n) continue;
            if(arr[xxx][xxy] == 0){
                que.push(make_pair(xxx,xxy));
                arr[xxx][xxy] = arr[num1][num2] +1;
            }
        }

    }


}
int main(){
    cin >> n >> q >> z;
    dfs(q-1,z-1);
    for (int i = 0 ; i< n; i++){
        for(int j = 0; j<n; j++){
            cout << arr[i][j] << ' ';
        }
        cout<< "\n";
    }



}