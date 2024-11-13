#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enter numbers ";
    cin >> number;
    int sto = number / 100;
    int desat = (number / 10) % 10;
    int od = number % 10;
    int newnumber = sto * 100 + od * 10 + desat;
    cout << "new numbers " << newnumber << endl;
    return 0;
    // cooomment
}
