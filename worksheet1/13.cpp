#include <iostream>
using namespace std;
int addnumrecursion(int a)
{
  if(a == 0)
    return 0;
  else
    return (a%10) + addnumrecursion(a/10);
}
void addnum(int a)
{
    int sum=0;
    
    while(a!=0){
        
        sum=sum+a%10;
        a=a/10;
        
    }
    cout<<sum;
}
int main()
{
    int a,c;
    cout<<"enter number";
    cin>>a;
    cout<<"enter choice 1 for with recursion, 2 for without recursion";
    cin>>c;
    switch(c){
        case 1:
        cout<<addnumrecursion(a);
        break;
        case 2:
        addnum(a);
        break;
        default:
        cout<<"wrong choice";
        break;
    }
    

}