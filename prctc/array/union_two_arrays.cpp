#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int arr1[]={1,2,8,9}; 
    int arr2[]={1,2,6,7}; 
    unordered_set<int>s;
   for(int i=0;i<4;i++)
   {
    s.insert(arr1[i]);

   } 
   for(int i=0;i<4;i++)
   {
    s.insert(arr2[i]);

   }
   cout<<s.size();



}