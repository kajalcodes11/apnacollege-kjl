#include <iostream>
using namespace std;

int main() {
    int arr[] = {34, 56, 78, 21, 9};
    int size = 5;

    int smallestIndex = 0;
    int largestIndex = 0;

    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }

        if(arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
    }

    cout << "Smallest Number = " << arr[smallestIndex]
         << " at Index = " << smallestIndex << endl;

    cout << "Largest Number = " << arr[largestIndex]
         << " at Index = " << largestIndex << endl;

    return 0;
}