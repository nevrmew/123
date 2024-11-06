#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{ // y =x/2;  x[x1; x2]  h
    double x, y, x1, x2, h;
    cout << "enter [x1; x2] and step h \n";
    cin >> x1 >> x2 >> h;
    cout << "***********WHILE************************" << endl;
    x = x1;
    while (x <= x2 + h / 2) {
        y = pow(x, 3) + 2 * log(fabs(x)) + 3; // Y= x3 + 2ln|x| + 3
        cout << setw(10) << x << setw(15) << y << endl;
        x += h;
    }
    cout << "***********DO_WHILE************************" << endl;
    x = x1;
    do {
        y = pow(x, 3) + 2 * log(fabs(x)) + 3;
        cout << setw(10) << x << setw(15) << y << endl;
        x += h;
    } while (x <= x2 + h / 2);
    return 0;

}
