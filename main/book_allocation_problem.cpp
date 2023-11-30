#include<iostream>
#include <numeric>
using namespace std;
bool ispossiblesolution(int a[],int books,int stu,int mid)
{
    int c=1;
    int sum=0;
    for(int i=0;i<books;i++)
    {
        if(a[i]>mid)return false;
        if(a[i]+sum>mid)
        {
c++;
sum=a[i];
if(c>stu)return false;

        }
        else{
            sum=sum+a[i];
        }
    }
    return true;
}
int findpages(int a[],int stu,int books)
{
if(stu>books)return -1;
int s=0;
int e=accumulate(a,a+books,0);
int ans=-1;
while(s<=e)
{
    int mid=(s+e)/2;
    if(ispossiblesolution(a,books,stu,mid))
    {
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    }
    return ans;
}
int main()
{
    int a[]={12,34,67,90};
    int stu;
    int books=sizeof(a)/sizeof(int);
    cout<<"enter the number of students: "<<endl;
    cin>>stu;
    int uttar=findpages(a,stu,books);
    cout<<uttar<<endl;
}