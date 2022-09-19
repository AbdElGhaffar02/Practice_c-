#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
void reverse_str(string& str)
{
    reverse(str.begin(), str.end());
}
int main()
{

    string n ;
   cin>>n;
   reverse_str(n);
    cout<<n;
    return 0;
}
