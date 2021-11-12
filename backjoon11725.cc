#include<iostream>
#include<vector>

using namespace std;
vector<int> vec[100001];
bool visited[100001];
int answer[100001];
void dfs(int num){
    

    visited[num] = true;

    for (int i = 0; i < vec[num].size(); i++ ){
        
        if(!visited[vec[num][i]]){
            answer[vec[num][i]] = num;
            dfs(vec[num][i]);

        }
    }

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n; 
    int x,y;
    for(int i = 0 ; i < n-1;i++ ){
        
        cin  >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);

    }
    dfs(1);
    for(int i = 2; i <= n; i ++ ){
        cout << answer[i] << "\n";
    }
}