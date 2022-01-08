#include <iostream>
using namespace std;
int main(){
  int R1,R2,C1,C2;
  cout<<"Type the number of rows in first matrix";
  cin>>R1;
  cout<<"Type the number of columns in first matrix";
  cin>>C1;
  cout<<"Type the number of rows in second matrix";
  cin>>R2;
  cout<<"Type the number of columns in second matrix";
  cin>>C2;
  int a[R1][C1],b[R2][C2],r[R1][C2]={0};
  if(C1!=R2){
    cout<<"Matrix cannot be multiplied";
  }
  else{
    cout<<"Enter elements of first matrix\n";
    for(int i=0;i<R1;i++){
      for(int j=0;j<C1;j++){
        cout<< "enter number in pocket["<<i<<"]["<<j<<"]";
        cin>>a[i][j];

      }
    }
    cout<<"Enter elements of second matrix\n";
    for(int i=0;i<R2;i++){
      for(int j=0;j<C2;j++){
        cout<< "enter number in pocket["<<i<<"]["<<j<<"]";
        cin>>b[i][j];

      }
    }
    for(int i=0;i<R1;i++){
      for(int j=0;j<C2;j++){
        r[i][j]=0;
        for(int k=0;k<R2;k++){
          r[i][j]+=a[i][k]*b[k][j];
        }
      }
    }
    for(int i=0;i<R1;i++){
      for(int j=0;j<C2;j++){
        cout<<r[i][j]<<" ";
      }
      cout<<endl;
    }
    



  
  }
}