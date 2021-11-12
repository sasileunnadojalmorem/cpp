#include<iostream>

using namespace std;
char arr [26][2];

void front (char root){
    if (root  == '.'){
        return;
    }
    else{
        cout << root;
        front(arr[root - 'A'][0]);
        front(arr[root - 'A'][1]);
    }
}
void middle (char root){
    if (root  == '.'){
        return;
    }
    else{
        
        middle(arr[root - 'A'][0]);
        cout << root;
        middle(arr[root - 'A'][1]);
    }
}
void end (char root){
    if (root  == '.'){
        return;
    }
    else{
        
        end(arr[root - 'A'][0]);
        end(arr[root - 'A'][1]);
        cout << root;
    }
}
int main(){
    int  n ;
    cin  >> n;
    char m,r,c;
    for (int i = 0 ; i < n; i++){
        
        cin >> m >> r >> c;
        arr[m - 'A'][0] = r;
        arr[m - 'A'][1] = c;
    }
    front('A');
    cout << "\n";
    middle('A');
    cout << "\n";
    end('A');




}