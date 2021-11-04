#include <iostream>
#include <vector>
#include <string> 
using namespace std;
int main(){
    vector<string> a[100];
    char ch[2] = {"a"};
    a[0].push_back(ch);
    cout << a[0][0];

}

