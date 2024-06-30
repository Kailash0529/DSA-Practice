#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name="kailash";
    int l=name.length();
    int i=0,j=l-1;
    while(i<j)
    {
        swap(name[i],name[j]);
        i++,j--;
    }
    cout<<name;


}

