#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,cnt = 0;
    cin >> n>> k ;
    k -= 1;
    queue<int> queue;
    cout << '<';
    for(int i = 0 ; i <n ; i++){
        queue.push(i+1);
    }
    while(queue.size() != 0){
        for(int i = 0 ; i < k ; i++ ){
            queue.push(queue.front());
            queue.pop();
        }

        cout << queue.front();
        queue.pop();
        if(!queue.empty()){
            cout << ',' << ' ' ; 
        }
    }
    cout << '>';
    
}