#include <iostream>
#include <cmath>
using namespace std;
int n,r,c;
int divide(int num,int x,int y){
    if (num == 0) return 0; //base condition
    if ( x >= pow(2,num)/2 && y >= pow(2,num)/2 ) return pow(2,num) * pow(2,num)/4* 3 + divide(num-1,x-pow(2,num)/2,y-pow(2,num)/2);
    else if ( x >= pow(2,num)/2 && y < pow(2,num)/2) return pow(2,num) * pow(2,num)/4 * 2 + divide(num-1,x-pow(2,num)/2,y);
    else if ( x < pow(2,num)/2 && y >= pow(2,num)/2) return pow(2,num) * pow(2,num)/4 * 1 + divide(num-1,x,y-pow(2,num)/2);
    else  return divide(num-1,x,y);
    return 0;

}

int main () {
    cin >> n >> r >> c;
    divide(n,r,c);
    cout << divide(n,r,c);
}