using namespace std;
#include <iostream>


int sum_number(int number)
{
    int sum = 0;
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{   
    int arg;
    cin >> arg;
    (pow(sum_number(arg),2) == arg) == 1 ? cout << "true" : cout << "false";
}



