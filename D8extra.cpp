/* C++ Program to Demonstrate Use of Ternary Operator */ 
#include<iostream>
using namespace std;
 int main(){
    float marks;
    cout<<"Enter the Marks: ";
    cin>>marks;
    string RESULT = (marks>=40)?"Passed":"Failed";
    cout<<"You "<<RESULT<<" the Exam!"<<endl;
    return 0;
 }