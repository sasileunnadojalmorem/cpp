#include <iostream>
using namespace std;

int n,m[100001];

int devide(int start,int end){
    if (start == end) return m[start];
    int mid = (start + end)/2;
    int ret = max(devide(start,mid),devide(mid+1,end));
    int s = mid; 
    int e = mid +1 ;
    int h = min(m[s],m[e]);
    ret = max(ret,h*(e-s+1));
    while (s> start || e < end){
        if(e <end &&(s==start||m[e+1]> m[s-1] )){
            h = min(h,m[++e]);

        }
        else {
            h = min(h,m[--s]);
        }
        ret = max(ret,h*(e- s + 1 ));
    }

    return ret;
}


int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    cin >> n;
    for(int i = 1 ; i <= n; i++){
        cin >> m[i];
    } 
    cout << devide(1,n);
}