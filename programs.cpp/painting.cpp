#include<iostream>
using namespace std;
int main(){
    int w1l,w2b,p1l,p2b,p3l,p4b,wa,pa;
    cin>>w1l>>w2b>>p1l>>p2b>>p3l>>p4b;
    wa=w1l*w2b;
    pa=(p1l*p2b)+(p3l*p4b);
    if(wa>pa)
    {
        cout<<"raj can fix both  painting";
    }
    else{
        cout<<"raj cannot fix both painting";
    }
    return 0;
}