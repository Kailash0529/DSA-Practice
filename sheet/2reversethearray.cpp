#include<iostream>
using namespace std;
void reverse(int arr[],int i,int j)
{
if(j<=i)
{

    
     return;
}
swap(arr[i],arr[j]);
reverse(arr,i+1,j-1);
}
int main()
{
    int arr[]={1,5,6,9,7,3};
    int i=0,j=(sizeof(arr)/sizeof(arr[0]))-1;
    // int k=0;
    reverse(arr,i,j);
 for (int k = 0; k <= j; ++k) {
            cout << arr[k] << endl;
        }
}