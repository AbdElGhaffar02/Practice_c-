#include <iostream>

using namespace std;
void add_number(double a,double b)
{

cout<<"result of add:"<<a+b<<"\n";
}void subtract_number(double a,double b)
{

cout<<"result of subtract:"<<a-b<<"\n";
}void multiply_number(double a,double b)
{

cout<<"result of multiply:"<<a*b<<"\n";
}void divide_number(double a,double b)
{
if(b =!0)
{
cout<<"result of divide:"<<a/b<<"\n";
}
else
{
cout<<"cnat divide on zero";
}
}
void menu_calc()
{   int num=0;
    while(true)
    {int n;
    cout<<"please choice \n";
        cout<<"1:Add Tow numbers \n";
        cout<<"2:Subtract Tow numbers \n";
        cout<<"3:Multiply Tow numbers \n";
        cout<<"4:Divide Tow numbers \n";
        cout<<"5:End the program \n";
        cin>>n;
        if(n>=1 && n<=5)
        {

        double a ,b;
        cout<<"Enter Tow Number \n";

        if(n==5)
        {
            cout<<num<<" operations \n";
            break;
        }
        cin>>a>>b;
        num++;
        if(n==1)
        {
            add_number(a,b);
        }
        else if(n==2)
        {
         subtract_number(a,b);
        }
        else if(n==3)
        {
         multiply_number(a,b);
        }
        else if(n==4)
        {
            divide_number(a,b);
        }
        }
        else
        {
        continue;
        }



    }
}

int main()
{
menu_calc();
    return 0;
}
