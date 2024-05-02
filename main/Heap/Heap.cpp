#include<iostream>
using namespace std;
class heap{
    public:
    int size;
    int arr[];
    heap()
    {
        size=0;
    }
    void insert(int val)
    {
        size++;
        int index=size;
        arr[index]=val;
      while(index>1)
      {
          if(arr[index]>arr[index/2])  
        {
            swap(arr[index],arr[index/2]);
            cout<<val<<"inserted at"<<index/2<<endl;
        }
        else{
            cout<<val<<"inserted at "<<index<<endl;
            break;
        }
      }
    }
    int delete()
    {
        arr[1]=arr[size];
        size--;
        int ans=arr[1];
        // int index=1;
      
        // int largest=index;
        while(index<size)
        {
              int left=2*index;
        int right=2*index+1;
        largest=index;
            if(left<size&&arr[index]<arr[left])
            {
                largest=left;
            }
            else if(right<size&&arr[index]<arr[right])
            {
                largest=right
            }
            if(largest==index)
            {
                break;
            }
            swap(arr[index],arr[largest])
            index=largest;
        }
        return ans;
    }
};
int main()
{
    heap h;
    h.insert(5);
    h.insert(7);
    h.insert(5);
    h.insert(6);
    cout<<h.delete();

}