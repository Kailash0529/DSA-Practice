#include<iostream>
// #include<limits>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int index=i;
    int largest=index;
    int left=2*i;
    int right=2*i+1;
    if(left<=n&&arr[index]<arr[left])
    {
       largest=left;
    }
    if(right<=n&&arr[index]<arr[right])
    {
        largest=right;
    }
    if(index!=largest)
    {
        swap(arr[index],arr[largest]);
        index=largest;
        heapify(arr,n,index);
    }
}
void buildHeap(int arr[],int n)
{
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
}
void heapsort(int arr[],int n)
{
    
    while(n>1)
    {
    swap(arr[1],arr[n]);
    n--;
    heapify(arr,n,1);
    }
}
int main()
{

}