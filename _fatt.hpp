#include <iostream>
using namespace std;
int result =1;

int fatt(int numero )
{
for (int i = 1; i < numero+1; i++)
    {   

          result*=(i);
         
    }
    return result;
}