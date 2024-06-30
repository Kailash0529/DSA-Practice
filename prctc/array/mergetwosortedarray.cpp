#include<iostream>
using namespace std;
int main()

{
    int arr1[]={1,5,9,30};
    int arr2[]={11,13,16,18,22};
int arr3[9];
int i=0,j=0,k=0,n=4,m=5;
while(i<n&&j<m)
{
if(arr1[i]<arr2[j])
{
arr3[k++]=arr1[i++];

}
else{
    arr3[k++]=arr2[j++];
}
}
if(i<n)

{
    while(i<n)

    {

        arr3[k++]=arr1[i++];
    }
}
else if(j<m)

{
    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
}
for(int l=0;l<9;l++)

{
    cout<<arr3[l]<<" ";
}

}