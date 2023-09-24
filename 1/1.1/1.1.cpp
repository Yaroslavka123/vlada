#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;

float result, arg, comp_1,comp_2;

int main()
{    
    int sqr_arg = pow(arg, arg);
    cin >> arg;
    comp_1 = sin(sin(arg) + exp(cos(arg)) + sqr_arg);
    comp_2 = pow(sin(M_PI * sqr_arg + log(sqr_arg)) , 1 / 4.0);
    cout << comp_1 * comp_2;
    return  0;
}

