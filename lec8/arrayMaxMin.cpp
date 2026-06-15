#include<iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int arr[] = {34,56,78,21,9};
     int size = 5;
   int  smallest = INT_MAX;
   int  largest = INT_MIN;
     for(int i = 0 ; i<size;i++){
        smallest = min(smallest ,arr[i]);
        largest = max(largest ,arr[i]);
     }
     cout<<"Smallest Number is : "<<smallest<<endl;
     cout<<"Largest Number is : "<<largest<<endl;
     return 0;
}