#include<bits/stdc++.h>
using namespace std;

int fact(int);

int main(int argc, char * argv[]) {

    int num = 0;
    cout << fact(num) << endl;
    return 0;
}

int fact(int num) { // TC = O(N), SC = O(N)

    if(num == 0) {
        return 1;
    }

    return num*fact(num-1);
}