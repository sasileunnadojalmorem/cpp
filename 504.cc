#include<iostream>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

#define MAX 100


int N,M;
int arr[MAX][MAX];
bool visit[MAX][MAX];
int house_cnt;
int dx[8] = { 1, -1, 0, 0, -1,1,-1,1 };
int dy[8] = { 0, 0, 1, -1 ,-1,-1,1,1};

vector <int> vec;

void DFS(int x, int y) {
	visit[x][y] = true;

	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
		if (arr[nx][ny] == 1 && visit[nx][ny] == false){
			DFS(nx, ny);
		}
	}
}

int main() {
	cin >> N >> M;
	int cnt;
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < M; j++)	{
            if(temp[j] == 'W'){
                arr[i][j] = 1;
            }
            else arr[i][j] = 0; 
        }
            
        
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] == 1 && visit[i][j] == false) {
				cnt ++;
				DFS(i, j);
				
			}
		}
	}

    cout << cnt;
	return 0;
}