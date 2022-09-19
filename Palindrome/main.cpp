#include <iostream>

using namespace std;
int Read_array(int arr[])
{
    int n;
    cout<<"Enter length of array \n";
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    return n;
}
string is_palindrone(int len,int arr[])
{
    int st = 0 ,en = len-1;
    while(st<en)
    {
        if(arr[st] != arr[en])
        {
            return "the number is not palindrone";
        }
        st++;
        en--;
    }
    return "the number is palindrone";
}
int main()
{
    int arr[100];
    int len = Read_array(arr);
cout<<is_palindrone(len,arr);
    return 0;
}
