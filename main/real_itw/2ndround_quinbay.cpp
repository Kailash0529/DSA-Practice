// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    string str="      th is      i   s    a sam       p le   te  x   t        ";
    string ans="";
    int i=0;
while(i<str.length())
{
    if(str[i]!=' ')
    {
        ans.push_back(str[i]);
        i++;
    }
    else if(str[i]==' ')
    {
        i++;
        if(str[i]!=' ')
        {
            ans.push_back(str[i-1]);
            
        }
        else{
            while(str[i]!=' ')
            {
                i++;
            }
        }
    }
    for(int i=0;i<ans.length();i++)
    {
        cout<<ans[i];
    }
}
    return 0;
}