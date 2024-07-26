#include<iostream>
using namespace std;

bool isprime(int number);
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(isprime(num)){
        cout<<num<< " is a prime number"<<endl;
    }
    else{
        cout<<num<<"i s not a prime number"<<endl;
    }
}
bool isprime(int number){
    if(number<=1){
        return false;
    }
    for(int i=2;i<=number/2;i++){
        if(number % i==0){
            return false;
        }
    }
    return true;
}