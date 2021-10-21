#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cin >> n ;
    int arr[n];
    if (n < 5){
        if (n == 3){
            cout << 1;
            return 0;
        }
        cout << -1 ;
        return 0;
    }
    arr[0] =  -1;
    arr[1] =  -1;
    arr[2] =  1;
    arr[3] = -1;
    arr[4] =  1;
    for(int i = 5; i < n; i++ )
    {
        int min  = 99999999;
        if(arr[i-3] >= 1){
            min = arr[i-3] + 1;
        }

        if(arr[i-5] >= 1 && min > arr[i-5] + 1 ){
            min = arr[i-5] +1 ;
            
        }
        if(min == 99999999){
            min = -1;
        }
        arr[i] = min;
    }
    
    cout << arr[n-1] << endl ; 
    
    
    return 0;


}