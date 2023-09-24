#include <iostream>
using namespace std;

int main()
{
	float arg;
	cin >> arg;
	int frac = int(arg * 10) % 10;

	while (arg > 9999) {
		arg /= 10;
	}
	int(arg) % 10 == frac ? cout << "true" : cout << "false";
	return 0;
}
