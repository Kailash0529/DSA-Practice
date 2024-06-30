#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    
set<char>s;
string str="aquickbrownfoxjumpsoverthelazydogaaaaa";
for(auto i:str)

{
    s.insert(i);
}

if(s.size()!=26)
{
    cout<<"no";
}

else{
    cout<<"yes";
}


}