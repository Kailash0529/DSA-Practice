#include<iostream>
#include<vector>
using namespace std;
void find(vector<int>&v,int start,int end)
{
    //basecase1 
    if(start==v.size())
    {
        return;
    }
    //ek case solve karlo
    int sum=0;

    for(int i=start;i<end;i++)
    {sum+=v[i];
        cout<<v[i]<<" ";
    }
    cout<<sum<<endl;
    cout<<endl;
    if(end<v.size())
    {
        find(v,start,end+1);
    }

    else{
        find(v,start+1,start+1);
    }


}
int main()
{
    vector<int>v={5,-9,6,-2,8,6,-7};
    int start=0;
    int end=start;
    find(v,start,end);
    return 0;
}