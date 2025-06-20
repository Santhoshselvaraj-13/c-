#include<iostream>
using namespace std;
int main(){
    int n,exps1,exps2,exps3,exps4,total,salary;
    cin>>n>>exps1>>exps2>>exps3>>exps4;
    total=exps1+exps2+exps3+exps4;
    salary=n;
    if(salary>total){
        cout<<"he save money";
    }
    else{
        cout<<"he wants to work hard";
    }
    return 0;
}