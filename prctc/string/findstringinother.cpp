#include<iostream>
#include<string>
using namespace std;
int main()
{
    string mains="kailash joshi is the best";
    string sub="ailash joshi";
    if(mains.find(sub)!=string::npos)
    {
        cout<<"right";
    }
    cout<<mains.find(sub);
    cout<<(char)98;
    
}