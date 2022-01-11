#include <iostream>
using namespace std;
int printFibonacciNumbers(int n)
{
    if (n==0)
        return 0;
    
    else
    {
        if(n==1)
        {
            return 1;
        }
        else
        {
            return printFibonacciNumbers(n-1)+printFibonacciNumbers(n-2);
        }
    }
}
int main()
{
    int f;
    for(int i=0;i<=40;i++)
    {
        f=printFibonacciNumbers(i);
        cout<<f<<"\n";
    }
<<<<<<< HEAD
}
=======
}
>>>>>>> 828e74863a303016b95801dc3c50101c9b17de76
