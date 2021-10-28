// 문제 상범 빌딩
// 입력: 각 층 정보를 3차원 정보를 제공한후 이에 맞는 각층의 정보를 준다. 각칸에 대한 정보는 막힌공간은 #으로 뚤려있는 공간은 .으로 표시된다. 각칸을 이동할떄마다 1초씩증가한다 000이 되면 종료된다.
// 출력: Escaped in  time minute(s). or trapped!

#include<iostream>
#include<queue>
#include<utility>
#include<cstring>
#include<tuple> 
#include<string>


using namespace std;
int l,r,c;
char arr[32][32][32];
int visit[32][32][32];
int ffx[6] = {0,0,0,0,1,-1};
int ffy[6] = {-1,0,1,0,0,0};
int ffz[6] = {0,-1,0,1,0,0};
int bfs(int a,int b,int c, int d, int e, int f){
    queue<tuple<int,int,int>> que;
    que.push(make_tuple(a,b,c));
    visit[a][b][c] = 1;
    while (!que.empty()){
        
        int x = get<0>(que.front());
        int y = get<1>(que.front());
        int z = get<2>(que.front());
        if (x ==  d && y == e && z == f) return visit[x][y][z] ;
        que.pop();
        for (int i =0; i < 6; i++){
            int nx = x + ffx[i];
            int ny = y + ffy[i];
            int nz = z + ffz[i];
            if (nx < 0 || nx >= l || ny < 0 || ny >= r || nz < 0 || nz >= c )  continue;
			if (arr[nx][ny][nz] == '#') continue;

            if ( arr[nx][ny][nz] == '.' && visit[nx][ny][nz] == 0){
                que.push(make_tuple(nx,ny,nz));
                visit[nx][ny][nz] = visit[x][y][z] +1 ;
                cout << 1;


            }
            

        }
		
        
    }
     return 0; 

}
   

int main(){
    int escx,escy,escz;
    int savex,savey,savez ;
    string str;
    while (true){
        memset(arr,'0',sizeof(arr));
        cin >> l >> r >> c;
        if(l == 0 && r== 0 && c==0) break;
        for (int i = 0; i < l; i++ ){
            for (int j = 0; j < r; j++){
                cin >> str;
                for (int q = 0; q <c ; q++){
                    arr[i][j][q] = str[q];
                    if (arr[i][j][q] == 'S'){
                        savex = i ;
                        savey = j ;
                        savez = q ;
                    }
                    if (arr[i][j][q] == 'E'){
                        arr[i][j][q] = '.';
                        escx = i  ;
                        escy = j ;
                        escz = q ;
                    }
                    
                }
                
            }

        }
        int time = bfs(savex,savey,savez,escx,escy,escz);
        if (visit[escx][escy][escz] != 0){
            cout <<"Escaped in " << time << " minute(s)."<< "\n";

        }
        else{
            cout << "Trapped!"<< "\n";
        }
    }

}