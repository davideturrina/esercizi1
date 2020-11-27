#include <iostream>
using namespace std;
#include  "_fatt.hpp"


int main()
{
    int numero;
        cout<< "inserisci un numero"<<endl;
        cin >> numero;
    int fattoriale;
    fattoriale= fatt(numero);
if (numero<13)
    {
        cout<< "n!= "<<fattoriale;
    }
else
    {
    cout<< "numero troppo grande per int";
    }
return 0;
    
}


