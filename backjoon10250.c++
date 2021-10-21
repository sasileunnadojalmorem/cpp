#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cnt,h,w,n;
    cin >> cnt;
    int floor,room = 0;
    for(int i = 0; i<cnt; i++){
        cin >>h >> w >>n;
        floor = n % h;
        if(floor == 0) floor = h;
        room =ceil(float(n/h));
        cout << floor*100 + room << endl;
        
    }
    




}
