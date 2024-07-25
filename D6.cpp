#include<iostream>
using namespace std;

double square(double number){
    return number * number;
}
int main(){
    double num;
    cout<<"enter the number: ";
    cin>>num;

    double result=square(num);
    cout<<"The Square of "<<num<<" is "<<result<<endl;
    return 0;
}