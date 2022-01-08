#include <iostream>
using namespace std;
int main(){
    int num1,num2,sum1=0,sum2=0;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;
    for(int i=1;i<num1;i++)
        if(num1 % i==0)
            sum1=sum1+i;
    
    for(int i=1;i<num2;i++)
        if(num2 % i==0)
            sum2=sum2+i;
    
    if(sum1==num2 && sum2==num1){
        cout<<"Given numbers are Amicable numbers";
    }
    else{
        cout<<"Given numbers are not Amicable numbers";
    }


}