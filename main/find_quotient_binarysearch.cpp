#include<iostream>
using namespace std;
int dividesearch(int dividend,int divisor)
{

    
int s=0;
int e=abs(dividend);
int ans;
int m=s+(e-s)/2;
while(s<=e)
{
    
    if(abs(divisor*m) ==abs(dividend))
    {
        ans=m;
        return ans;
    }
    else if(abs(divisor*m)>abs(dividend))
    {
        e=m-1;

    }
    else{
        ans=m;

        s=m+1;
    }
    

    m=s+(e-s)/2;
}
    return ans;


}
int main()
{
    int dividend,divisor;
    cin>>dividend>>divisor;
   int Quotient= dividesearch(dividend,divisor);
   if(dividend<0&&divisor<0||dividend>0&&divisor>0)
   {
   cout<<Quotient;

   }
   else{
    int nega=-Quotient;
    cout<<nega<<endl;
   }

    
}