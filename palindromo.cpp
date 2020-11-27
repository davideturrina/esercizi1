#include <iostream>
using namespace std;




long long potenza10(long long esp)
{
    long long base =10;
    long long result = 1;
    for (long long k = 0; k < esp; k++) 
    {
        result *= base;
    }
    return result;
}

int main()
{
    long long numero;

    cout << "ins numero (max 12 cifre) ";
    cin >> numero;
   
    long long first=    (numero%potenza10(1))/potenza10(0);
    long long second=   (numero%potenza10(2))/potenza10(1);
    long long third=    (numero%potenza10(3))/potenza10(2);
    long long fourth=   (numero%potenza10(4))/potenza10(3);
    long long fifth=    (numero%potenza10(5))/potenza10(4);
    long long sixth=    (numero%potenza10(6))/potenza10(5);
    long long seventh=  (numero%potenza10(7))/potenza10(6);
    long long eighth=   (numero%potenza10(8))/potenza10(7);
    long long ninth=    (numero%potenza10(9))/potenza10(8);
    long long tenth=    (numero%potenza10(10))/potenza10(9);
    long long eleventh= (numero%potenza10(11))/potenza10(10);
    long long twelveth= (numero%potenza10(12))/potenza10(11);

    if (99999999999<numero && numero<1000000000000)
    {
            if (first==twelveth && second==eleventh && third==tenth && fourth==ninth && fifth==eighth && sixth==seventh  )
            {
                cout<< "e' palindromo";
      
            }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }

    }
    else if (9999999999<numero && numero<100000000000)
    {
            if (first==eleventh && second==tenth && third==ninth && fourth==eighth && fifth==seventh  )
            {
                cout<< "e' palindromo";
      
            }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }

    }
    
    else if (999999999<numero && numero<10000000000)
    {
            if (first==tenth && second==ninth && third==eighth && fourth==seventh && fifth==sixth  )
        {
                cout<< "e' palindromo";
      
        }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }

    }
    
    else if (99999999<numero && numero<1000000000)
    {
            if (first==ninth && second==eighth && third==seventh && fourth==sixth   )
        {
                cout<< "e' palindromo";
      
        }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }

    }
    
    else if (9999999<numero && numero<100000000)
    {
            if (first==eighth && second==seventh && third==sixth && fourth==fifth  )
        {
                cout<< "e' palindromo";
      
        }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }

    }
    
    else if (999999<numero && numero<10000000)
    {
            if (first==seventh && second==sixth && third==fifth )
        {
                cout<< "e' palindromo";
      
        }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }

    }
    else if (99999<numero && numero<1000000)
    {
            if (first==sixth && second==fifth && third==fourth )
        {
                cout<< "e' palindromo";
      
        }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }

    }

    else if (9999<numero && numero<100000)
    {
            if (first==fifth && second==fourth )
        {
                cout<< "e' palindromo";
      
        }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }
    }

    else if (999<numero && numero<10000)
    {
            if (first==fourth && second==third)
        {
                cout<< "e' palindromo";
      
        }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }
    }
    else if (99<numero && numero<1000)
    {
            if (first==third )
        {
                cout<< "e' palindromo";
      
        }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            } 
    }       
    else if (9<numero && numero<100)
    {
            if (first==second )
        {
                cout<< "e' palindromo";
      
        }
            else
            {
                cout<< "non e' palindromo "<<endl;
    
            }
    }

    else if (0<=numero && numero<10)
        {
                cout<< "e' palindromo";
        }
    
 
    return 0;
}
