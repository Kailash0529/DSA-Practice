#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=1234;
    string ans="";
   while(n>0)
   {
    int m=n%10;
    ans.append(to_string(m));
    n=n/10;
   }
   cout<<ans;
}