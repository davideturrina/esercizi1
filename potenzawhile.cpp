#include <iostream>
using namespace std;


int potenzaintera(int base, int exp)
{
    int result = 1;
    
    int k = 0;
    while ( k < exp ) {
        k++;
        result *= base;
    }
    return result;
}

int main()
{
    int x, y;

    cout << "ins base: ";
    cin >> x;

    cout << "Ins esponente: ";
    cin >> y;


    cout << x << "^" << y << " = "
         << potenzaintera(x, y) << endl;
         return 0;
}
