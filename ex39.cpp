#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    double A, B, C, D, x1, x2;
    cout << "Write number A more than 0: ";
    cin >> A;
    cout << "Write number B: ";
    cin >> B;
    cout << "Write number C: ";
    cin >> C;
    D = pow(B,2) - 4*A*C;
    x1 = (-B + sqrt(D)) / (2*A);
    x2 = (-B - sqrt(D)) / (2*A);
    if (x1 < x2) {
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    } else {
        cout << "x1 = " << x2 << endl << "x2 = " << x1 << endl;
    }
    

    return 0;
}
