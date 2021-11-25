#include<iostream>
#include<string>
#include<queue>
#include<utility>
using namespace std;
int arr[101][101];
bool visit[101][101];
int n,m;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int bfs(int x, int y, int cnt) {
	queue <pair <pair <int, int>, int>> que;
	que.push(make_pair(make_pair(x, y), cnt));

	while (!que.empty()) {
		x = que.front().first.first;
		y = que.front().first.second;
		cnt = que.front().second;
		que.pop();

		if (x == 0 && y == m - 1) return cnt ;

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (arr[nx][ny] == 0 && !visit[nx][ny]) {
				visit[nx][ny] = true;
				que.push(make_pair(make_pair(nx, ny), cnt + 1));
			}
		}
	}
    return -1;
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < m; j++)	arr[i][j] = temp[j] - '0';
	}
	
    visit[0][0] = true;
    cout << bfs(n-1,0,1);
	

	return 0;
}