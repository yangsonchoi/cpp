#include <iostream>

using std::cout;
using std::endl;

void f(int& b) {
	b++;
}

int main(void) {
	int a = 3;
	cout << a << endl;
	f(a);
	cout << a << endl;
	return 0;
}

