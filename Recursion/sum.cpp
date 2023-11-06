/*
    Find sum of first n natural numbers using recursion
*/

#include<bits/stdc++.h>
using namespace std;

void sum_non_return(int, int); // in here the result is stored and passed around as a parameter to next recursion calls
int sum_return(int, int); // here we RETURN the result of each recursive call to prev recursive call,
//the 1st call gets all returns, computes, and returns final result to main function

int main(int argc, char * argv[]) {
    int sum = 0, end = 10;
    cout << sum_return(sum, end) << endl;
    return 0;
}

void sum_non_return(int curr, int sum) { // TC = O(N), SC = O(N)
    if(curr<1) {
        cout << sum << endl;
        return;
    }

    sum_non_return(curr-1, sum+curr);
}

int sum_return(int curr, int end) { // TC = O(N), SC = O(N)
    if(curr==end) {
        return curr;
    }

    return curr+sum_return(curr+1, end);
}