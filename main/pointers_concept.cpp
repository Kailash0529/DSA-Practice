#include<iostream>
using namespace std;
int main()
{    //integer
cout<<"SIMPLE POINTERS"<<endl;
int a=5;
int *ptr=&a;
int *cpy=ptr;
cout<<a<<" "<<&a<<" "<<ptr<<" "<<*ptr<<" "<<cpy<<" "<<*cpy<<endl<<endl;

    //array of integer
    cout<<"INTEGER VAALA ARRAY"<<endl;
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int *p=arr,*q=p;
    cout<<arr<<endl;//array ko dene par humesha address hi aaega
    cout<<p<<endl;//sirf array ka pointer dene par array ka hi address aaega
    cout<<*p<<endl;//pointer ko *(dereference)ke sath dene par humesha value hi aaegi *p=*p+0=p[0]
    cout<<q<<endl;//sirf array ka pointer dene par array ka hi address aaega
    cout<<*q;//pointer ko *(dereference)ke sath dene par humesha value hi aaegi *q=*q+0=q[0]
cout<<endl;
    //char vaala array
    cout<<"CHARACTER VAALA ARRAY"<<endl;
    char ch[10]={"kailash"};
    char *chp=ch;
    char *cpych=chp;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<chp<<endl;
    cout<<*chp<<endl;
    cout<<&chp<<endl;
    cout<<cpych<<endl;
    cout<<*cpych<<endl;
    cout<<&cpych<<endl;

}