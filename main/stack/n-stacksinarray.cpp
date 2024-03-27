#include<iostream>
using namespace std;
class stack{
    public:
    int *a,*next,*top;
    int n,s,freespace=0;
    stack(int n,int s){

        this->n=n;
        this->s=s;
        a=new int(s);
        top=new int(n);
        next=new int(s);

        for(int i=0;i<n;i++)
        {
            top[i]=-1;
        }
        for(int i=0;i<s;i++)
        {
            next[i]=i+1;
        }
        next[s-1]=-1;

    }
    bool push(int ele,int m)
    {
        if(freespace==-1)

{
    return -1;
}     
   int index=freespace;
        freespace=next[index];
        a[index]=ele;
        next[index]=top[m-1];
        top[m-1]=index;
        return true;

    }
    int pop(int m)
    {
        if( top[m-1]==-1)
        {
return -1;  
        }
        int index=top[m-1];
        int popedele=a[index];
        top[m-1]=next[index];
        next[index]=freespace;
        freespace=index;
        return popedele;
    }

};
int main()
{
stack st(5,10);
cout<<st.push(1,1)<<endl;
cout<<st.pop(1);
cout<<st.pop(1);

}