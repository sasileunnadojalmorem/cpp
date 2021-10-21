#include<iostream>
#include<stack>
using namespace std;

int arr[1001][1001];
int state[1001];
int n,m;


const int not_visitied = 0;
int dfs(int v){
    state[v] = 1 ;
    stack<int> stack;
    stack.push(v);
    while(!stack.empty()){
        int a = stack.top();
        stack.pop();
        for(int i = 1; i< n+1; i++){
            if (i != a){
                if (arr[a][i] == 1 && state[i] == not_visitied){
                    state[i] = 1;
                    stack.push(i);
                }
            }
            

        }

        }
    return 0;
    }
    

int main(){
    ios::sync_with_stdio(false);
    
    int p,q,cnt;
    cnt = 0;
    cin >> n >> m;
    for (int i = 0 ; i< m; i++){
        cin >>  p >> q;
        arr[p][q] = 1;
        arr[q][p] = 1;}

    for (int i = 1; i< n+1 ; i++){
        if (state[i] == not_visitied){
            cnt ++;
            dfs(i);
    
        }

    }    
    cout << cnt;
    

}

