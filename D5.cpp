#include<iostream>
using namespace std;

int main(){
    double num1, num2;
    int choice;
    cout<<"Enter the two numbers :";
    cin>>num1>>num2;
    cout<<"==========choose the operation========="<<endl;
    cout<<" Add: 1\t Subtract: 2\t Multiply: 3\t Divide: 4\n";
    cout<<"Enter The choice :";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"Result : "<<num1 + num2<<endl;
        break;
    case 2:
       cout<<"Result : "<<num1 - num2<<endl;
       break;
    case 3:
        cout<<"Result : "<<num1 * num2<<endl;
        break;
    case 4:
      if(num2!=0){
        cout<<"Result : "<<num1 / num2<<endl;
      }else{
        cout<<"Error: Divided by zero!"<<endl;
      }
      break;
    default:
    cout<<"invalid code"<<endl;
        break;
    }
    return 0;
}