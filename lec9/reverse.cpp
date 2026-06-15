#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    for(int i = vec.size() - 1; i >= 0; i--) {
        cout << vec[i] << " ";
    }

    return 0;
}