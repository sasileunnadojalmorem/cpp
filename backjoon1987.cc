// 입력 r과 c 둘째줄 R개줄에 걸쳐서 c개의대문자 알파벳드링 빈칸없이 주어진다.

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int r,c,maxa;
char str[20][20];
bool visit[20][20];
bool alpha[26];
int fx[4] = {-1,0,1,0 };
int fy[4] = { 0, -1, 0,1 };
void dfs(int cnt,int x,int y){
    maxa = max(maxa,cnt);
    visit[x][y] = 1;
    visit[x][y] = true;
    alpha[str[x][y] - 'A'] = true;
    for( int i = 0 ; i < 4; i++){
        int fxx = x + fx[i];
        int fyy = y + fy[i];
        if ( fxx < 0 || fxx >= r || fyy < 0 || fyy >= c || visit[fxx][fyy]) continue;
        if (!alpha[str[fxx][fyy] - 'A']) dfs(cnt+1,fxx,fyy);
    }
    visit[x][y] = false;
    alpha[str[x][y] - 'A'] = false; 
     
    
}
int main(){
    cin >> r >> c;
    for (int i = 0 ; i < r; i++){
        getchar();
        for (int j = 0 ;j < c; j++){
        str[i][j] = getchar();
        }
    }
    dfs(1,0,0);
    cout << maxa;

}