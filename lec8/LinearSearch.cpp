#include<iostream>
using namespace std;
int LinearSearch(int arr[] ,int size , int target){
    for(int i=0 ; i<size ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr1[]={12,16,24,96,11};
    int size = 5;
    int target = 96;
    cout <<"Element found at index "<<LinearSearch(arr1,size,target)<<endl;
    return 0;
}