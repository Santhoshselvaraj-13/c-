#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cin>>n;
    int odd_term=10;
    int even_term=5;
    for(i=1;i<n;++i){
        if(i%2==!0){
            cout<<odd_term<<" ";
            odd_term+=50;
        }
        else{
            cout<<even_term<<" ";
            even_term+=10;
           
        }
    }
    return 0;
}
