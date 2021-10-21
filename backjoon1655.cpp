#include <iostream>
#include <queue>

using namespace std;

int main (void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int p,q;
    int n,num;
    cin >> n;
    
    priority_queue<int> max_heap;
    priority_queue<int,vector<int>,greater<int>> min_heap;
        
    for (int i = 0 ; i < n ; i++){
        cin >> num;
        
        if (max_heap.size() > min_heap.size()) min_heap.push(num);

        else max_heap.push(num);


        if (max_heap.size() > 0 && min_heap.size() > 0 ){
          if( max_heap.top() > min_heap.top()){
            p = max_heap.top();
            q = min_heap.top();

            min_heap.pop();
            max_heap.pop();

            max_heap.push(q);
            min_heap.push(p);
          }
        }

        cout << max_heap.top() << "\n";
        
        


    }


}