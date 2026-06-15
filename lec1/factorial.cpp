#include<iostream>
using namespace std;
int main(){
int n;
int fact = 1 ;
int count = 1;
cout<<"Enter n :";
cin>>n;
while (count <= n ){
    fact = fact*count;
    count = count+1;
}
cout << fact ;
return 0;
}