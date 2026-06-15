#include<iostream>
using namespace std;
int main(){
    int arr[]={24,14,56,11,14,24};
    int size =6;
    int ans;
    for(int i = 0 ; i<size ; i++){
        int count = 0;
        for(int j= 0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<endl;
        }
    } 
    
    return 0;
}