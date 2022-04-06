#include <iostream>
#include "IntRange.hpp"
using namespace std;

int main() {
    IntRange m(0, 0);

    cout << "m++: " << m++ << endl;
    cout << "m: " << m << endl;
    cout << "m-- " << m-- << endl;
    cout << "m " << m << endl;
    cout << "++m: " << ++m << endl;
    cout << "--m: " << --m << endl;
    
    Read(m);
    IntRange n(m);
    Display(n);
    int c;
    cout << "Check the number "; cin >> c;
    n.checkResult(c);
    return 0;
}
