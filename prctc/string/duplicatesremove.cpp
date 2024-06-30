#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<char,int>m;

string str="aaaaaaaaaaaaabb";
for(auto i:str)

{
m[i]++;
}
for(auto it:m)
{
    if(it.second>1)
    {
        cout<<it.first<<" "<<it.second;
    }
}



}