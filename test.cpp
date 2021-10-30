#include <iostream>
using namespace std;

int main (){
    bool arr[10] = {false,false,false,false,false,false,false,false,false};
    for (int i = 0; i<=10 ; i++ ){
        if(arr[i] == false){
            cout << "yes" << i;
        }
    }
}