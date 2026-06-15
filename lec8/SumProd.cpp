#include<iostream>
using namespace std;
int main(){
    int arr[]={12,45,7,18,19};
    int size = 5;
    int sum=0;
    int product = 1;
    for(int i = 0 ; i<size ; i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Product is : "<<product<<endl;
        cout<<"Sum is : "<<sum<<endl;
        return 0 ;
}