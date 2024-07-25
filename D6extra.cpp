#include<iostream>
using namespace std;

int sum(int a, int b);
int main(){
    int num1,num2;
    cout<<"enter the both numbers: ";
    cin>>num1>>num2;
    int result = sum(num1,num2);
    cout<<"sum of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    return 0;
}
 int sum(int a,int b){
    return a+b;
 }
