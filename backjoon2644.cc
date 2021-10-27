//문제 : 촌수 계산
//입력 : 첫째줄 에는 전체 사람의 수  , 둘째줄 에는 서로 다른 두사람의 번호 , 셋째줄에는 그래프의 간선개수 ,4줄에는 간선들


#include <iostream>
#include <queue>
using namespace std;
int n, first,secend,num;
int arr[101][101];
int visit[101];
queue<int> que;
int bfs(int a, int b) {
    visit[a] = 1;
    que.push(a);
    while (!que.empty()){
        int front = que.front();
        que.pop();
        
        for (int i = 1 ; i < n+1 ; i++ ){
            if (arr[front][i] == 1 && visit[i] == 0){
                que.push(i);
                visit[i] = visit[front] + 1;
            }
        }

    }
    
    return visit[b] - 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> first >> secend >> num;
    int num1,num2;
    for (int i =  0 ; i < num; i++ ){
        cin >> num1 >> num2;
        arr[num1][num2] = 1;
        arr[num2][num1]= 1;
    }
    int result = bfs(first,secend);
    cout << result ;



}