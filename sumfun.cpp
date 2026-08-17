//Make a program that sum of two integers with using fuction
#include<iostream>
using namespace std;
int sum(int a,int b){
    int result = a+b;
    return result;
}
int main(){
    int num1,num2;
    cout<<"Enter the value of num1:";
    cin>>num1;
    cout<<"Enter the value of num2:";
    cin>>num2;
    cout<<sum(num1,num2);
    return 0;
}