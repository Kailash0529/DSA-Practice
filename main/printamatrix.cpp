#include<iostream>
#include<vector>
using namespace std;
void printwave(vector<vector<int>>k)
{
   int m=k.size();
   int n=k[0].size();
   for(int loc=0;loc<n;loc++)
   {
    if((loc&1)==0)
    {
        for(int i=0;i<m;i++)
        {
           
cout<< k[i][loc]<<endl;
        }
    }
    else{
        for(int i=m-1;i>=0;i--)
        {
cout<<k[i][loc]<<endl;
        }
    }
   }
}
int main()
{
    int i,n,m;
vector<vector<int>>k{
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
};
printwave(k);

}