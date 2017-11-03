#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x = 0;
    cout << "Введите х" << endl;
    cin >> x;
    double sqx = pow(x, 2);
    int result = (sqx + x) * (sqx + 1) + 1;
    cout << "Значение Х^4 + Х^3 + Х^2 + Х^2 + Х + 1 = 1" << result;
}
