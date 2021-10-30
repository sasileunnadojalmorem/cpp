#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int l ,c ;
char a[15];
char  pwd[16];
bool alhpa[26];
void dfs(int cnt,int num,int aei,int b){
    if(cnt == l){
        if( aei >=1 && b >=2) puts(pwd);
        
        return;
    }

    for (int i = num+1; i < c; i++ ){
        pwd[cnt] = a[i];
        dfs(cnt+1,i,aei + alhpa[a[i]-'a'], b+ !alhpa[a[i]-'a'] );
    }


}

int main () {
    cin >> l >> c;
    for (int i = 0;  i < c ; i++){
        cin >> a[i]; 
    }
    sort(a, a + c);
    alhpa[0] = alhpa[4] = alhpa[8] = alhpa[14] = alhpa[20] = true;
    dfs(0,-1,0,0);

}