#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>m;
    string k="kailashjoshiishaanjosh";
    for(int i=0;i<k.length();i++)
    {
        m[k[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
cout<<i->first<<" "<<i->second<<endl;
    }
    m.find()

}