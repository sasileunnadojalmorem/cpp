#include <iostream> 
using namespace std;


int n,x,vis[20];

int cnt = 0;
int currentsum = 0;
void dfs(int current){
    if(current == n) return ;
    if(currentsum + vis[current] == x) cnt = cnt +1 ;
    dfs(current + 1 );
    currentsum = currentsum + vis[current];
    dfs(current + 1 );
    currentsum = currentsum - vis[current];
}
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> x ;
    for (int i = 0; i< n ; i++){
        cin >>  vis[i];

    }
    dfs(0);
    cout << cnt;
}
