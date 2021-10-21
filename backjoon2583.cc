#include <iostream>
#include <stack>
#include <utility>
#include <vector>
#include<algorithm>
using namespace std;

int arr[101][101];
vector<int> answer ;

int const  non_visited = 0;
int n,m,k;

int dx[4] ={1,0,-1,0};
int dy[4] = {0,1,0,-1};

int dfs(int f,int s){
    stack<pair<int,int>> stack;
    int cnt = 1;
    arr[f][s] = 1;
    stack.push(make_pair(f,s));
    
    while(!stack.empty()){
        pair<int,int> top = stack.top();
        stack.pop();
        int y = top.first;
        int x = top.second;
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<0 || nx>=m || ny<0 || ny>=n) continue;
            if( arr[ny][nx] == 0){
                stack.push(make_pair(ny,nx));
                arr[ny][nx] = 1;
                
                cnt ++;
            }

    }}
    return cnt ;

}
int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < k; i ++ ){
        int fx,fy,sx,sy;
        cin >> fx >>  fy >>sx >> sy;
        for (int j = fy; j < sy; j++){
            for (int q = fx; q < sx ; q++ ){
                if (arr[j][q] != 1){
                    arr[j][q] = 1;
                    
                }

            }
        }
    }
    for (int i = 0; i < n ; i++){
        for(int j =0; j < m; j++){
            if (arr[i][j] == 0 ){
                int a = dfs(i,j);
                answer.push_back(a);
                

            }

        }
    }
    sort(answer.begin(),answer.end());
    cout << answer.size() << "\n";
    for (int i = 0 ; i < answer.size() ; i++){
        cout << answer[i] << ' ';
    }
}