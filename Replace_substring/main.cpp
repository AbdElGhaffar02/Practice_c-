#include <iostream>
#include<string.h>
using namespace std;
bool starts_with(string input,string pattern,int pos)
{
if(pos+pattern.size()> input.size())
{
    return false;
}
for(int i = 0; i < pattern.size();i++)
{
    if(pattern[i] != input[pos+i])
    {
        return false;
    }
}
return true;
}
string replace_str(string input,string pattern, string to)
{
    string result="";
for(int i = 0;i<input.size();i++)
{
    if(starts_with(input,pattern,i))
    {
        result =result+to;
        i++;

    }
    else
    {
        result = result+input[i];
    }

}
return result;
}
int main()
{
cout<<replace_str("aabcabaaad","aa", "x");

    return 0;
}
