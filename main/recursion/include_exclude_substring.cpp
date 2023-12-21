#include<iostream>
using namespace std;
 void findsubstrngs(string mains,string substrngs,int i,int n)
{
    //basecase
    if(i>=n)
    {
        cout<<substrngs<<endl;
        return;
    }
    //ek case solve karlo
    //exclude
    findsubstrngs(mains,substrngs,i+1,n);
    //exclude
    substrngs.push_back(mains[i]);
    findsubstrngs(mains,substrngs,i+1,n);
}
int main()
{
    string mains={"abcd"};
    string substrngs="";
    int i=0,n=mains.size();
    findsubstrngs(mains,substrngs,i,n);

}