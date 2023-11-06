/**
 * NOTES: 
 * Backtracking is the process of recrusively doing same steps/calling function,
 * so as to explore all possible outcomes first, in case of failure of a later called function
 * backtrack steps to the last successful/correct step and explore any other possible option from there
 * Time Complexity of recursive function = num of times the function is called * account of any iterations in each call
 * Space Complexity of recursive function = num of times the faction is called(here auxilary space = stack space each call requires) * any auxilary space on each call
*/

#include<bits/stdc++.h>
using namespace std;

int max_count = 10, coun = 0;
void counter_1_N(int, int); // TC = O(N), SC = O(N)
void counter_N_1(int, int); // TC = O(N), SC = O(N)
void counter_N_1_backtrack(int, int); // TC = O(N), SC = O(N)

int main(int argc, char * argv[]) {
    int start=1, end=10;
    // counter_1_N(start, end);
    counter_N_1_backtrack(start, end);
    return 0;
}

void counter_1_N(int curr, int end) {

    if(curr > end) {
        return;
    }

    cout << curr << endl;
    counter_1_N(curr+1, end);
}

void counter_N_1(int curr, int end) {
    if(curr<1) {
        return;
    }
    cout << curr << endl;
    counter_N_1 (curr-1, end);
}

void counter_N_1_backtrack(int curr, int end) {
    if(curr>end) {
        return;
    }

    counter_N_1_backtrack(curr+1, end);
    cout << curr << endl;
}
