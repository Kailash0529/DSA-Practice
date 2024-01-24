#include<iostream>
using namespace std;
bool find(string &s,int i,int j)
{
    //basecase
    if(j<=i)
    {
        return true;
    }
    //ek case solve karlo
    if(s[i]==s[j])
    {
        //baakki recursion sambhaal lega
        find(s,i+1,j-1);
    }
    else{
        return false;
    }
}
int main()
{
    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    if(find(s,i,j))
    {
cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}