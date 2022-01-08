#include<iostream>
using namespace std;
bool isCorrectOrder(int n)
{
    bool flag = true;
    int prev = -1;
    int type = -1;
 
    while(n != 0)
    {
        if(type ==-1)
        {
            if(prev ==-1)
            {
                prev = n % 10;
                n = n/10;
                continue;
            }
            if(prev == n % 10)
            {  
                flag = false;
                break;
            }
            if(prev > n % 10)
            { 
                type = 1;
                prev = n % 10;
                n = n/10;
                continue;
            }
             
            prev = n % 10;
            n = n / 10;
        }
        else
        {  
            
            if(prev == n % 10)
            {  
                flag = false;
                break;
            }
            
            if(prev < n % 10)
            {          
                flag = false;
                break;
            }
              
            prev = n % 10;
            n = n / 10;
        }
    }
 
    return flag;
}
 
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
     
    if(isCorrectOrder(n))
        cout<<"It is a hill number";
    else
        cout<<"It is not a hill number";
     
}
