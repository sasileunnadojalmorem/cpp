#include <iostream>
#include <stack>
#include<queue>
#include <cstring>
using namespace std;
int n,e;
int stack_arr[100001];
int queue_arr[100001];
int state[10001][10001];

int maxa = 0;
void dfs(int num,int cnt,int stay){
    stack_arr[num] = 1;
    maxa = max(maxa,cnt);
    for (int i = 0;i < n;i++){
        if (state[num][i] == 1 &&stack_arr[i] == 0 && stay != 1  ){
            state[i][num] = 0;
            state[num][i] = 0;
            stack_arr[i] =1;

            dfs(i,cnt+1,0);
            
            stack_arr[i] = 0;
            state[i][num] = 1;
            state[num][i] = 1;
        }
        else if(state[num][i] == 1 &&stack_arr[i] == 1 && stay == 0){
            dfs(i,cnt+1,1);
            stack_arr[i] = 0;
        }
    }

}

int main() {
    cin >> n>> e;
    for (int i =0 ; i < e; i++){
        int a,b;
        cin >> a >> b;
        state[a][b] = 1;
        state[b][a] = 1;
    }
    for (int i = 1; i < n+1 ; i++){
        dfs(i,0,0);
        memset(stack_arr,0,n+2);
    }
    cout << maxa;
    
}