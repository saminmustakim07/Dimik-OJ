#include <bits/stdc++.h>

using namespace std;

int main(){
    int num, value;
    cin >> num;

    while (num--){
        cin >> value;
        if (value%2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;
    }

    return 0;
}