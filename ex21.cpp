#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    int x1, y1, x2, y2, x3, y3, p, S, P, a, b, c;
    cout<<"Type coord 1: ";
    cin >> x1;
    cout<<"Type coord 2: ";
    cin >> y1;
    cout<<"Type coord 3: ";
    cin >> x2;
    cout<<"Type coord 4: ";
    cin >> y2;
    cout<<"Type coord 5: ";
    cin >> x3;
    cout<<"Type coord 6: ";
    cin >> y3;
    a = sqrt ((pow(x2-x1, 2)) + (pow(y2-y1,2)));
    b = sqrt ((pow(x3-x2,2)) + (pow(y3-y2,2)));
    c = sqrt ((pow(x3-x1, 2)) + (pow(y3-y1,2)));
    P = a+b+c;
    p = (a+b+c)/2;
    S = sqrt (p*(p-a)*(p-b)*(p-c));
    cout << "The square is equal: " << S;
    cout << "The perimetr is equal: " << P;
    

    return 0;
}
