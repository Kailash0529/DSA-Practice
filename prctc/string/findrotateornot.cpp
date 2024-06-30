#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    

string str="ishaan";
string trs="nishaa";
string str3=str+str;
cout<<str3;
if( str3.find(trs)!=string::npos)

{
    cout<<"found at "<<str3.find(trs);
}

else{
    cout<<"no";
}





}