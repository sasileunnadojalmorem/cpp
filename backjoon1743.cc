#include<iostream>
#include<stack> 
#include<utility>
using namespace std;
int arr[101][101];
int state[101][101];
int const not_visted = 0;
int n,m;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int dfs(int f,int s){
    stack<pair<int,int>> stack;
    int cnt = 1;
    state[f][s] = 1;
    stack.push(make_pair(f,s));
    
    while(!stack.empty()){
        pair<int,int> top = stack.top();
        stack.pop();
        int y = top.first;
        int x = top.second;
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<=0 || nx>m || ny<=0 || ny>n) continue;
            if(state[ny][nx] == 0 && arr[ny][nx] == 1){
                stack.push(make_pair(ny,nx));
                state[ny][nx] = 1;
                cnt ++;
            }

    }}
    return cnt ;
    
}


int main(){
    int size = 0;
    int k,p,q;
    cin >> n >> m >> k;
    for (int i = 0 ; i < k; i++){
        cin >> p >> q;
        arr[p][q] = 1; 
    }
    for (int i = 1 ; i < n+1; i++){
        for (int j = 1; j < m+1; j++){
            if(arr[i][j] == 1 && state[i][j] == not_visted){
                int a = dfs(i,j);
                size = max(size,a);
            }
        }

    }
    cout << size;
}