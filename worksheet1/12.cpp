#include <iostream>
using namespace std;
int fact=1;
int facto(int n)
{
    
    if(n>=1)
    {
        return n*facto(n-1);
    }
    else
    {
     return 1;   
    }
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<facto(n);

}