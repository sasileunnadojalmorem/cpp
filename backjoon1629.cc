#include<iostream>
using namespace std;

long long divide(long long a,long long b,long long c){
    if (b == 0) return 1;
    if (b == 1) return a%c;
    long long temp = divide(a,b/2,c);
    if(b%2 == 0 ) return (temp*temp) %c;
    else return (((temp*temp) % c)*a) %c;

}
int main (){
    long long a,b,c;
    cin >> a >> b >> c;
    cout << divide(a,b,c);
}