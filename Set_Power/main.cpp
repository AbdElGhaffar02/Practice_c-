#include <iostream>
#include<array>
using namespace std;
void set_powers(int arr[],int len=5,int m=2)
{
    int mul = 1;
    for(int i = 0;i<len;i++)
    {
     arr[i]=mul;
     mul *=m;
    }

}
int main()
{
    int arr[100];
    int len,m;
    cin>>len>>m;
   set_powers(arr,len,m);
   for(int i =0;i<len;i++)
    cout<<arr[i]<<" ";

    return 0;
}
