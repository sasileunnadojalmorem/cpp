#include <iostream>
#include <queue>
#include <utility>
#include <cstring>

using namespace std;
int t,l,nowx,nowy,gox,goy;
int arr[101][101];

int xxy[8]= {2, 1, -1, -2, -2, -1, 1, 2};
int xxx [8]= {1, 2, 2, 1, -1, -2, -2, -1};
int dfs(int a,int b ,int c,int d){
    
    queue<pair<int,int>> que;
    que.push(make_pair(a,b));
    arr[a][b] = 1;
    
    while (!que.empty()){
        
        int num1= que.front().first;
        int num2= que.front().second;
        
        if (num1 == c && num2 ==d){
            return arr[c][d] -1 ;
        }
        que.pop();
        for (int i = 0; i < 8; i ++ ){
            int ny = num1 + xxy[i];
            int nx = num2 + xxx[i];
            
            if (nx < 0 || nx >= 100 || ny < 0 || ny >= 100) continue;
            if (arr[ny][nx] == 0){
			que.push(make_pair(ny,nx));
            arr[ny][nx] = arr[num1][num2] + 1;
            

        }


    }
    
    }
    
    return arr[c][d] ;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> nowy >> nowx >> goy >> gox;
    int result = dfs(nowy,nowx,goy,gox);
    cout << result;
}
