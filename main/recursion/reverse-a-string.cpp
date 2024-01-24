#include<iostream>
using namespace std;
void reverse(string &s,int start,int end)
{
    //basecase
    if(start>=end)
    {
        return;
    }
    //baaki recursion sambhal lega
    swap(s[start],s[end]);
    reverse(s,start+1,end-1);
}
int main()
{
    string s;
    cin>>s;
    int start=0;
    int end=s.size()-1;
    reverse(s,start,end);
    cout<<s<<endl;
}