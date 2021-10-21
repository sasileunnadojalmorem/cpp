#include <iostream>
#include <cmath> //C++
using namespace std;

int main(){

    int a,b,v = 0 ;
    double cnt,num = 0;
    cin >> a >> b >> v;
    num = v - a ;
    num = num /(a-b);
    v = int(ceil(num));
    cout << v+1;
}

