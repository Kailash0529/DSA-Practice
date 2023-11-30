#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int i,j,k=0;int n1=3,n2=3,n3=3;
    vector<int>ans;
    set<int>st;
    int a[1,2,3];
    int b[1,2,5];
    int c[1,4,5];
    while(i<n1&&j<n2&&k<n3)
    {
        if(a[i]==b[j]&&b[j]==c[k])
        {
            // ans.push_back(a[i]);
            st.insert(a[i]);
            i++,j++,k++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<c[k]){

j++;
        }
        else{
            k++;
        }
    }
    for(auto i:st)
    {
ans.push_back(i);

    }
    return ans;
}