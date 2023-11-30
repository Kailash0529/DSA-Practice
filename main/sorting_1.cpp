#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int st,ed,md;
int k[]={1,2,3,4,5,6,7};
int n=sizeof(k)/sizeof(int);
int target=8;
 st=0;
 ed=n-1;
    md=(st+ed)/2;


//  cout<<n<<endl;
while(ed>=st)
{

    int element=k[md];
 

if(element==target)
{
    cout<<"found at location"<<md<<endl;
    break;
}
else if(target<element)
{
    ed=md-1;
    // cout<<"chota hai";
}
else{
    st=md+1;
    // cout<<"chota hai";

}

md=(st+ed)/2;

}
return -1;
}