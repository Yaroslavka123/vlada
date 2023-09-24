using namespace std;
#include <iostream>



int main()
{
	int number_1, number_2, number_3;
	cin >> number_1;
	cin >> number_2;
	cin >> number_3;
	(number_1 > 0 || number_2 > 0 || number_3 > 0) ? cout << "true" : cout << "false";
}
