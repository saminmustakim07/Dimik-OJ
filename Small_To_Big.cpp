#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int test;
    cin >> test;

    for (int j=1; j<=test; j++){

        int value_1, value_2, value_3;
        cin >> value_1 >> value_2 >> value_3;

        vector <int> main;
        
        main.push_back(value_1);
        main.push_back(value_2);
        main.push_back(value_3);

        sort(main.begin(), main.end());

        cout << "Case " << j << ": ";

        cout << main[0] << ' ' << main[1] << ' ' << main[2] << endl;
    }

    return 0;

}