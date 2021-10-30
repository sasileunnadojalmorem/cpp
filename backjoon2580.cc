#include<iostream>
#include <utility>
#include<vector>
using namespace std;
int arr[9][9];
vector<pair<int,int>> xy;

void print_sedoku(){
        
    for(int i= 0; i< 9; i++){
        for (int j = 0 ; j< 9;j++){
            cout<< arr[i][j] << " ";

        }
        cout << "\n";
    }
}
void check1(bool check[],int x){
    for (int i = 0 ; i < 9; i++){
        if(arr[x][i] != 0){
            int where = arr[x][i] - 1;
            check[where] = true;
        }
    }

}

void check2(bool check[],int y){
    for (int i = 0 ; i < 9; i++){
        if(arr[i][y] != 0){
            int where = arr[i][y] - 1;
            if(check[where] == false){
                check[where] = true;
            }
        }
    }
}
void check3(bool check[],int x,int y){
    int xx = x/3;
    int yy = y/3;
    for (int i = 3 * xx ; i < 3* xx+3 ; i++ ){
        for (int j = 3 * yy; j < yy*3 +3 ; j++){
            if(arr[i][j] != 0 ){
                int where = arr[i][j] - 1;
                if(check[where] == false){
                    check[where] = true;
                }

            }
        }
    }

}
bool istrue = false;
void dfs(int cnt){
    
    if (istrue == true){
        return;
    }
    if (cnt == xy.size()){
        istrue = true;
        print_sedoku();
        return;
    }
    
    int x = xy[cnt].first;
    int y = xy[cnt].second;
    bool can[9] =  {false,false,false,false,false,false,false,false};
    check1(can,x);
    
    check2(can,y);
    
    check3(can,x,y);
    
    
    
    
    //xy좌표로 가능한 리스트 불러온다
    for (int i = 0; i < 9; i++){
        if (can[i] == false){
            arr[x][y] = i+1;
            dfs(cnt + 1);
            arr[x][y] = 0;



        }
    }
}


int main(){
    for (int i =0; i< 9; i++){
        for (int j = 0 ;j< 9; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 0) xy.push_back(make_pair(i,j));
            }
    }
   
    dfs(0);
    
}
