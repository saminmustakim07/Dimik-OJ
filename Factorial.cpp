#include <bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;

    int value;

    long long int fact=1;

    while (test--){
        cin >> value;
        for(int i=value; i>=1; i--){
            fact *= i;
        }
        cout << fact << endl;
        fact = 1;
    }
    
    return 0;
}