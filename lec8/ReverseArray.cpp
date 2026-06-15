#include<iostream>
using namespace std;
int ReverseArr(int arr[],int size){
int start = 0;
int end = size - 1;
while(start <= end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
int main(){
    int arr1[]={24,16,67,98,46};
    int size = 5;
    ReverseArr(arr1 , size);

    for(int i=0;i<size;i++){
        cout<< arr1[i]<<" ";
    }
    return 0;
}