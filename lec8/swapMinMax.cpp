#include<iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int arr[]={12,34,87,11,2};
    int size = 5;
   int  smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0 ; i<size ; i++){
        smallest = min(arr[i],smallest);
        largest = max(arr[i],largest);
    }
    cout<<"Smallest before swap : "<<smallest<<endl;
    cout<<"Largest before swap : "<<largest<<endl;
   swap(smallest,largest);
   cout<<"Smallest after swap : "<<smallest<<endl;
    cout<<"Largest after swap : "<<largest<<endl;
    return 0;
}