#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int test, value;
    cin >> test;

    while (test--){
        cin >> value;
        int summation;
        int first_value = value/10000;
        summation = (value%10) + first_value;
    
        cout << "Sum = " << summation << endl;
    }

    return 0;
}