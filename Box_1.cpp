#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int num, value;
    cin >> num;

    while(num--){
        cin >> value;
        for(int i=1; i<=value; i++){
            for(int j=1; j<=value; j++){
                cout << '*';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}