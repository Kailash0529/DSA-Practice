#include<iostream>
using namespace std;
class exp{
 
int value=0;
public:
int age=111;
void get(int w)
{
    value=w;
}
int give()
{
    return value;
}
};
int main()
{
    exp k;
    k.get(19);

    cout<<k.give()<<endl;
    cout<<k.age;
}

