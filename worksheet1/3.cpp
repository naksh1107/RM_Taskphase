#include <iostream>
using namespace std;
int main(){
  int R1,C1;
  cout<<"Type the number of rows in matrix";
  cin>>R1;
  cout<<"Type the number of columns in matrix";
  cin>>C1;
  int a[R1][C1],b[R1][C1];
  cout<<"Enter elements of matrix\n";
    for(int i=0;i<R1;i++){
      for(int j=0;j<C1;j++){
        cout<< "enter number in pocket["<<i<<"]["<<j<<"]";
        cin>>a[i][j];          
      }
    }
    for(int i=0;i<R1;i++){
      for(int j=0;j<C1;j++){
            int num=a[i][j];
                  if (num==0){
                      for(int x=0;x<C1;x++){
                          b[i][x]=0;
                      }
          
                      for(int k=0;k<R1;k++){
                          b[k][j]=0;
                        }
                  }
      }
    }
    for(int i=0; i<R1; i++)
    {
        for(int j=0; j<C1; j++)
        {
            if(b[i][j]!=0)
            {
                b[i][j]=a[i][j];
            }
        }
    }
    for(int i=0;i<R1;i++){
      for(int j=0;j<C1;j++){
        cout<<b[i][j]<<" ";
      }
      cout<<endl;
    }
}
