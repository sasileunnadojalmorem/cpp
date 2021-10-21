#include <iostream>
#include <utility>
using namespace std;

int main (){
    pair<int,int> arr[50];
    int n,x,y;
    cin >> n ;
    for(int i = 0; i<n ;i++){
        cin>> x >> y;;
        arr[i].first = x;
        arr[i].second = y;

    }
    for(int i = 0; i < n; i++){
        int rate = 1;
        for (int j = 0; j < n;j++){
            
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second){
                rate++;

            }

        }
        cout << rate << ' ';
    }
}