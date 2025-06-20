#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter two integers";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<"the greatest number is"<<num1<<endl;
    }
    else if (num2>num1){
        cout<<"the greatest number is"<<num2<<endl;
    }
    else{
        cout<<"both are equal"<<endl;
    }
    return 0;
}