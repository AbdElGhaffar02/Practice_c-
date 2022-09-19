#include <iostream>

using namespace std;
bool is_prime(int num)
{
    for(int i = 2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int nth_prime(int n)
{   int i =2,c=0;
    while(true)
    {
     if(is_prime(i))
     {c++;
         if(c==n)
         {
             return i;
         }
     }
     i++;
    }
    return -1;
}
int main()
{
    cout<<nth_prime(6);

    return 0;
}
