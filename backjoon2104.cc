#include<iostream>
using namespace std;
typedef long long ll;
ll n , m[100005];
// 중앙값 오른쪽값 왼쪽값
ll devide(int start,int end){
    if (start == end) return (ll) m[start] * m[start] ;
    ll mid = (start + end)/2;
    ll result = max(devide(start,mid),devide(mid+1,end));
    ll s = mid;
    ll e = mid + 1;
    ll sum = 0 ;
    for(int i = s; i <= e ; i++ ){
        sum +=  m[i];
    }
    ll small = min(m[s],m[e]);
    result = max(result, sum * small );
    while (start<s || e < end){
        if (e<end && (start == s || m[e+1] > m[s-1])){
            small = min(small,m[++e]);
            sum += m[e];
        }
        else {
            small = min(small,m[--s]);
            sum += m[s];
        }
        result = max(result,sum * small);
        
    }
    return result;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i =1; i<n+1; i++){
        cin >>  m[i];
    }
    cout << devide(1,n);
}