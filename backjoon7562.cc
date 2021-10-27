//문제 : 나이트의 이동
//입력 : 1줄에는 테스트케이스의 개수 -t , 2줄에는 각테스트케이스마다의 체스판 한변의 길이 - i (크기 : i*i) 3줄에는 현재  나이트의 칸  4줄에는 가야하는 나이트의 칸

#include <iostream>
#include <queue>
#include <utility>
#include <cstring>

using namespace std;
int t,l,nowx,nowy,gox,goy;
int arr[301][301];

int xxy[8]= {-2, -1 ,1,2,-1,-2,1,1};
int xxx [8]= {-1,-2,-2,1,+2,1,2,2};
int dfs(int a,int b ,int c,int d){
    memset(arr,0,sizeof(arr));
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
            
            if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
            if (arr[ny][nx] == 0){
			que.push(make_pair(ny,nx));
            arr[ny][nx] = arr[num1][num2] + 1;
            

        }


    }
    
    }
    
    return arr[c][d] ;
}
int main () {
    
    cin >> t;
    for(int i = 0; i< t; i++ ){
        cin >> l >> nowy >> nowx >> goy >> gox;
        int result = dfs(nowy,nowx,goy,gox);
        cout <<  result;

    }
}