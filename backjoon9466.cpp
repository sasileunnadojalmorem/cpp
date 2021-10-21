#include <iostream>
#include <stack>
#include <vector>
#include <utility>
using namespace std;

int main () {
    int n , num, number,po,cnt;
    cin >> n;
    
    for(int i= 0 ; i <n ; i++){
        cnt = 0 ;
        vector<pair<int,int>> array;
        vector<int> finished(num,0);
        stack<int> stack;
        cin >> num ;
        for (int j = 0; j< num ; j++){
            cin >> number ;
            array.push_back(make_pair(j,number-1));
        }
        for (int j = 0; j < num; j++){
            cnt = 0;
            vector<int> visited(num,0);
            if (finished[j] == 0){
                stack.push(array[j].second);
                visited[array[j].first] = 1;
                while(stack.size() > 0){
                    po = stack.top();
                    stack.pop();
                    if (visited[po] == 1 && visited[po] == 1){
                        cout << cnt ;    
                        break;
                    }
                    else if (visited[po] == 0){
                        visited[po] = 1;

                        stack.push(array[po].second);
                    }

                    else if (visited[po] == 1 && finished[po] == 0){
                        finished[po] = 1;
                        
                        stack.push(array[po].second);}
                }
                
            
        
            }
        
            
        }
          
        }
}
