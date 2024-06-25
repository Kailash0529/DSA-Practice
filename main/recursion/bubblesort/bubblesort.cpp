#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=1;i<n;i++)
    {
        //if you try this approach then set i=0;i<n-1;i++
    //    if(i==0)
    //    {
    //         for(int j=0;j<n-1;j++)
    //     {
    //         if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
    //     }
    //    }
    //    else{
    //         for(int j=0;j<n-i;j++)
    //     {
    //         if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
    //     }
    //    }
     for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
}
