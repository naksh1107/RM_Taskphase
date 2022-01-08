#include<iostream>
using namespace std;

int GCD(int b, int s)
{
    if(s==0){
        return b;
    }
    if(b==s){
        return b;
    }
    else
    {
        return GCD(s, b%s);     
    }
}

int main()
{
    int n1,n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    cout<<"greatest divisor is "<<GCD(n1,n2);
}