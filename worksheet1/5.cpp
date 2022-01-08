#include <iostream>
using namespace std;
 
void decToOctal(int n)
{
    int octalNum[100];
    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    cout<<"Octal form is=";
    for (int j = i - 1; j >= 0; j--){
        cout << octalNum[j];
    }
    cout<<endl;
}
void decToHexa(int n)
{
    
    char hexaDeciNum[100];
    int i = 0;
    while (n != 0) {
        
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
 
        n = n / 16;
    }
    cout<<"Hexadecimal form is=";
    for (int j = i - 1; j >= 0; j--){
        cout << hexaDeciNum[j];
    }
    cout<<endl;
}
void decToBinary(int n)
{
    int binaryNum[32];
 
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout<<"Binary form is=";
    for (int j = i - 1; j >= 0; j--){
        cout << binaryNum[j];
    }
    cout<<endl;
}
 
int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;
    decToOctal(n);
    decToHexa(n);
    decToBinary(n);
}