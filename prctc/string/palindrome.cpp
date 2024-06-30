#include<iostream>
#include<string>
using namespace std;
int main()
{
string str="aaaaaaaaaaaaaaa";
int l=str.length();int i=0,j=l-1;
while(i<=j)
{
if(str[i]==str[j])i++,j--;
else{cout<<"no";
    return -1;
}
}
cout<<"yes";


}