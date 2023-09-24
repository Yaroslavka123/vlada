using namespace std;
#include <iostream>

int main()
{
    float x, y;
   cin >> x;
    cin >> y;

    (((x >= 0 && y >= x - 1) || (x <= 0 && y >= -x - 1)) && y <= 0) ? cout << "true" << endl : cout << "false" << endl;
}
