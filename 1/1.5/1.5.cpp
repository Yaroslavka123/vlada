
using namespace std;
#include <iostream>

int main()
{
    float x, y;
    cin >> x;
    if (x < -10 || x>4 ) {
        cout << "Вне области определения ";
    }
    else {
        if (x >= -10 && x <= -6) {
            y = 4 - (sqrt(4 - pow(x+8,2))+2);
        }
        if (x>-6 && x <=-4) {
            y = 2;
        }
        if (x > -4 && x <= 2) {
            y = -x / 2;
        }
        if (x>2 && x<=4) {
            y = x - 3;
        }
    }
    cout << y;
}
