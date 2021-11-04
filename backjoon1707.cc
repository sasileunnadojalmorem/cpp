#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> graph[20001];
int color[20001];

int k,v,e;
void dfs(int x,int colornum){
    color[x] = colornum;
    for (int i = 0; i < graph[x].size(); i++){
        if (color[graph[x][i]] == 0){
        dfs(graph[x][i],3-colornum);
        }
    }


}
bool ok(void){
    for (int i = 1; i <= v; i++){
        for (int j = 0; j< graph[i].size(); j++) {
            if (color[graph[i][j]] == color[i]) return false;
        }
    }
    return true;

}
int main (){
    cin >> k;
    for (int i = 0; i < k ; i++){
        for (int j = 0 ; j < 20001; j++){
            graph[j].clear();
        }
        memset(color,0,sizeof(color));
    
        cin >> v >> e;
        for (int j = 0; j < e; j++ ){
            int x ,y;
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        for (int j = 1; j <= v; j++ ){
            if (color[j] == 0){
                dfs(j,1);
            }
        }
        if (ok()){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    
    }
}


