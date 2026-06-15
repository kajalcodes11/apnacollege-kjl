#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> vec={23,34,45};
   int target = 34;
   int index =0;
   for(int i : vec){
    if(i==target){
        cout<<"Element found at index "<<index<<endl;
     return 0;
    }
   index++;
   }
   cout<<"Element not found"<<endl;
   return 0;
}