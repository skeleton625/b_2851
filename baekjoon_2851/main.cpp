#include <iostream>
using namespace std;

int i1,r;

int main() {
	for (int i = 0; i < 10; i++) {
		cin >> i1;
		if (r + i1 >= 100) {
			 r = r+i1-100 <= 100-r ? r+i1 : r;
			 break;
		}
		else r += i1;
	}
	cout << r;
	return 0;
}