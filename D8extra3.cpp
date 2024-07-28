#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout<<"Enter the 3 numbers: ";
    cin>>num1>>num2>>num3;
    if(num1>=num2 && num1>=num3){
        cout<<num3<<" is the largest Number"<<endl;
    }
    else if(num2>=num1 && num2>=num3){
        cout<<num2<<" is the largest NUmber"<<endl;
    }
    else if(num3>=num1 && num3>=num2){
        cout<<num3<<" is the largest NUmber"<<endl;
    }
   
   return 0; 
}