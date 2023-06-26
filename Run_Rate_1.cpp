#include <bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;

    double current_run_rate, need_run_rate;
    double total_run, current_run, ball_left, ball_done, have_to_run;

    for(int i=1; i<=test; i++){
        cin >> total_run >> current_run >> ball_left;

        if (total_run>=current_run){
            ball_done = (300-ball_left)/6;
            ball_left /= 6;

            have_to_run = total_run-current_run+1;

            current_run_rate = current_run/ball_done;
            need_run_rate = have_to_run/ball_left;

            cout << fixed << setprecision(2) << current_run_rate << " " << need_run_rate << endl;
        } else {
            ball_done = (300-ball_left)/6;
            current_run_rate = current_run/ball_done;
            cout << fixed << setprecision(2) << current_run_rate << " " << 0.00 << endl;
        }

        
    }
    
    return 0;
}