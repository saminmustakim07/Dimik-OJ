#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int num, value;
    cin >> num;

    for(int i=1; i<=num; i++){
        cin >> value;
        cout << "Case " << i << ":";
        for(int j=1; j<=value; j++){
            if(value%j==0){
                cout << " " << j;
            }
        }cout << endl;
    }

    return 0;
}