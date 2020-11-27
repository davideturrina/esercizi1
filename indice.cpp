#include <iostream>
using namespace std;


int potenza10(int esp)
{
    int base =10;
    int result = 1;
    for (int k = 0; k < esp; k++) {
        result *= base;
    }
    return result;
}


int main()
{
    int indice, numero;

    cout << "ins numero: ";
    cin >> numero;

    cout << "Ins indice : ";
    cin >> indice;
    cout<<(numero%potenza10(indice))/potenza10(indice-1) << endl;
 
}
