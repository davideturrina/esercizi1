#include <iostream>
using namespace std;
int result =1;

long long fatt(long long n )
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*fatt(n-1);
    }
}