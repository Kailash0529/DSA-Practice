#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={1,2,3};
    string ans;
    int n=sizeof(a)/sizeof(int);
    int b[]={1,2,3};
    int m=sizeof(b)/sizeof(int);
    int carry=0;
    int i=n-1;
    int j=m-1;
    while(i>=0&&j>=0)
    {
        int x=a[i]+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
        i--,j--;
    }
    while(i>=0)
    {
int x=a[i]+0+carry;
int digit=x%10;
ans.push_back(digit+'0');
carry=x/10;
i--;
    }
     while(j>=0)
    {
int x=0+b[j]+carry;
int digit=x%10;
ans.push_back(digit+'0');
carry=x/10;
i--;
    }
    if(carry)
    {
        ans.push_back(carry+'0');
    }
    while(ans[ans.size()-1]=='0')
    {
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;

}