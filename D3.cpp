#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Enter the Two Num: ";
    cin>>a>>b;
    if (a==b){
        cout<<"Both are equal"<<endl;
    }
    else if(a>b)
    {
          cout<<a<<" is greater than "<<b<<endl;
    }
    else
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
    return 0;
}