#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int test, value;

    cin >> test;

    while(test--){
        cin >> value;

        double sq_value_1;
        long long int sq_value_2;

        sq_value_1 = sqrt(value);
        sq_value_2 = sqrt(value);

        if (sq_value_1 == sq_value_2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}