#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the number of letters";
    cin>>l;
    char str[l+1];
    cout << "Type the word ";
    cin >> str;
    for(int i=0;i<l;i++){
        str[i] = tolower(str[i]);
    }
    for (int i = 0; i <l-1; ++i) {
        for (int j = 0; j <l - i-1; ++j) {
            if (str[j] > str[j + 1]) {
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
 
      }
    }
  }
  cout<<str;
}
