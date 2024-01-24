#include<iostream>
using namespace std;
void find(string &s,int i,int x,int &ans)
{
    //basecase
    if(i>=s.size())
    {
        return;
    }
    //ek case solve karlo
    if(s[i]==x)
    {
        ans=i;
    }
    //baaki recursion karlega
    find(s,i+1,x,ans);
}
int main()
{
    string s={"kailash"};
    char x;
    cin>>x;
    int ans=-1;
    find(s,0,x,ans);
    cout<<ans<<endl;

}