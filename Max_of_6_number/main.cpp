#include <iostream>

using namespace std;
int max_three_number(int a,int b,int c)
{

    return  max(a ,b) > c ? max(a,b):c;
}int max_four_number(int a,int b,int c,int d)
{

    return  max_three_number(a ,b,c) > d ? max_three_number(a,b,c):d;
}int max_five_number(int a,int b,int c,int d,int e)
{

    return  max_four_number(a ,b,c,d) > e ?max_four_number(a ,b,c,d):e;
}int max_six_number(int a,int b,int c,int d , int e,int f)
{

    return  max_five_number(a ,b,c,d,e) > f ? max_five_number(a ,b,c,d,e):f;
}

int main()
{
    cout << max_six_number(1,2,5,7,8,3) << endl;
    return 0;
}
