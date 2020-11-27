#include <iostream>
using namespace std;




int potenza10(int esp)
{
    int base =10;
    int result = 1;
    for (int k = 0; k < esp; k++) 
    {
        result *= base;
    }
    return result;
}

int main()
{
    int numero;

    cout << "ins numero di 5 cifre ";
    cin >> numero;

    int first= (numero%potenza10(1))/potenza10(0);
    int fifth= (numero%potenza10(5))/potenza10(4);
    int second= (numero%potenza10(2))/potenza10(1);
    int fourth= (numero%potenza10(4))/potenza10(3);    


    if  (numero>9999 && numero<100000) 

        {
        if(first==fifth && second==fourth )

                {
                    cout<< "e' palindromo";
                }
        else
                {
                    cout<< "non e' palindromo"<<endl;
                }
    
        }

    else
        {
        cout<<"non ha 5 cifre"; 
        }    

         return 0;
    
} 

