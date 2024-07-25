#include<iostream>
using namespace std;
//Function Prototype 
int add(int a, int b);//a and b are parameters
int main(){
    int result = add(5,6);//here 5 and 6 are arguments
    cout<<"result: "<<result<<endl;
}
// Function Definition
int add(int a, int b){
    return a+b;
}