#include<iostream>
using namespace std;
int main(){

    int n;
    bool isPrime = true;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Prime No."<<endl;
    }
    else{
        cout<<"Non-Prime No."<<endl;
    }
    return 0;
}