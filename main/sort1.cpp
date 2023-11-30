#include<iostream>

#include<vector>
using namespace std;
int main()
{
    int n;
    vector <int> num;
    cout<<"enter the numbers"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    { int laao;
        cout<<"enter the numbers"<<endl;
cin>>laao;
num.push_back(laao);
    }
    // for(int j=0;j<n-1;j++)
    // {
    //     if(num[j]==num[j+1])
    //     {
    //         cout<<"duplicate found"<<num[j]<<endl;
    //     }
    //     else{
    //     cout<<"no duplicate found"<<endl;
    //     }
    // }
    // second method..............................................................................................................................
    // for(int j=0;j<n;j++)
    // {
    //     int index=abs (num[j]);
    //     if(num[index]<0)
    //     {
    //         cout<<"duplicate exists"<<num[j]<<endl;
    //     }
    //     // else{
    //     //     cout<<"alright!"<<endl;
    //     // }

    //     num[index]=-1;
        
    // }
    // third method.....................................................................................................
    while(num[0]!=num[num[0]])
    {
        swap(num[0],num[num[0]]);
    }
    return num[0];
}