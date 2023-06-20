#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    double a, degree;
    const double Pi = 3.14;
    cout << "Write corner: ";
    cin >> a;
    degree = 180*a / Pi;
    cout << "The corner is equal: " << degree;
    

    return 0;
}
