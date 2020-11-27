#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

long double     sommaeulero=1.0;
long double       neperiziamolo=0;
long double result=1;

long long  fatt(long long numero, long double &sommaeulero )
{
for (long double i = 1; i < numero+1; i++)
    {   
        result*=(i); 
        sommaeulero+=1/result; 
    }
    return result;
}


int main()
{
    long long  numero;
        cout<< "inserisci un numero"<<endl;
        cin >> numero;
    long long  fattoriale=1;
    fattoriale= fatt(numero,sommaeulero); 
    neperiziamolo= sommaeulero ;
if (numero<21)
    {
        cout<< "n!="<< fattoriale<<endl;
        cout<<"(setprecision(8))"<<endl;
        cout<< "e calcolato con 1+(1/n)!= "<< setprecision(8)<< neperiziamolo<<endl;
        cout<< "e calcolato con math.h ="<< setprecision(8)<< exp(1);
        

    }
else
    {
    cout<< "numero troppo grande per int";
    }
return 0;
    
}

