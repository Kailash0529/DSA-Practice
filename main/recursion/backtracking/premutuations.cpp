#include<iostream>
using namespace std;
void find(string &s,int i)
{
    //basecase
    if(i>=s.size())
    {
        cout<<s<<endl;
    }
    for(int j=i;j<s.size();j++)
    {
        swap(s[i],s[j]);
        find(s,i+1);
        swap(s[i],s[j]);

    }

}
int main()
{
string name="abc";
int i=0;
find(name,i);
}