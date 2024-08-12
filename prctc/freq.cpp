#include<iostream>
#include<map>
using namespace std;
int main()
{
    string name="kail ash joshi";
    map<char,int>freq;
    for(char ch:name)
    {
        freq[ch]++;
    }
    for(auto it:freq)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

}