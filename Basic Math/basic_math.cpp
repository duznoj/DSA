#include<bits/stdc++.h>
using namespace std;

int digitsCount(int);
int revNum(int);

int main(int argc, char * argv[]) {
    int num, digits, rev, gcd;
    cout << "Enter num: ";
    cin >> num;
    digits = digitsCount(num);
    rev = revNum(num);
    cout << "The number " << num << " has " << digits <<" number of digits and its reverse is "<< rev << endl;
    return 0;
}

int digitsCount(int num) {
    int count = 0;

    // Considering num = 0 to be a 1 digit number
    do {
        count++;
        num /= 10;
    } while(num>0);

    // If considering num = 0 to be a 0 digit number do:
    // while (num>0) {
    //     count++;
    //     num /= 10;
    // }

    return count;
}

int revNum(int num) {
    // SOLVE ACCORDING TO LEETCODE QUESTION 7
    
    return 0;
} 


































