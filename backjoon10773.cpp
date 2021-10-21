#include <iostream>
#include <cstring>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
//자료구조 c++내에서 구현 각종 헤더 파일들 공부해야됨
int main(int argc, char *argv[])
{
	int n;
	int num;
	int sum = 0;
	stack<int> s;
 
	cin >> n;
 
	for (int i = 0; i < n; ++i) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}
 
	for (int i = 0; !s.empty(); ++i) {
		sum += s.top();
		s.pop();
	}
 
	cout << sum << endl;
 
	return 0;
}	cout<< 
