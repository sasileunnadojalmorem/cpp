#include<iostream>
#include<utility>
#include<map>
using namespace std;
#define ll long long

map<ll,ll> tree;

ll n,P,Q ;
ll dp ( ll n ){
    if(n == 0 ) return 1;

    ll&ret = tree[n];
    if(ret !=0) return ret;

    return ret = dp(n/P) + dp(n/Q);




}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> P >> Q;
    cout << dp(n);

    return 0;

}