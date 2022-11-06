#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a, b1, b2, b3, b4;
	int b = 0;
	cin >> a;
	b4 = a%2;
	a/=2;
	b3 = a%2;
	a/=2;
	b2 = a%2;
	a/=2;
	b1 = 1;
	b = b4*8 +b3 * 4 + b2 * 2 + b1;
	cout << b;
	

}