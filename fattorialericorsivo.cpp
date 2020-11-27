#include <iostream>
using namespace std;
#include  "fatt2.hpp"


int main()
{
    long long numero;
        cout<< "inserisci un numero"<<endl;
        cin >> numero;
    long long fattoriale;
    fattoriale= fatt(numero);
if (numero<21)
    {
        cout<< "n!= "<<fattoriale;
    }
else
    {
    cout<< "numero troppo grande per int";
    }
return 0;
    
}