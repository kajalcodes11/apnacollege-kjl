#include<iostream>
using namespace std;
int SumOfDigits(int num){
   int DigitSum=0;
    while(num>0){
        int lastdigit = num % 10 ;
        num /= 10;
        DigitSum += lastdigit;
    }
return DigitSum ;
}
int main(){
   cout<< "Sum = " << SumOfDigits(145)<<endl;
   return 0;
}