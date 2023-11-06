// LEETCODE QUESTION 7
/**
 * NOTES:
 * 32 bit number => 2^(32) cominations
 * out of which 1/2 will be +ve and 1/2 -ve
 * nums are in the range [-2^31, 2^31-1]
 * INT_MIN = -2147483648
 * INT_MAX = 2147483647
 * 
 * rev num, if on reversing number is out of above range, return 0, number is to be strictly in 32 bit range
 * 
 * 
 * ALGORITHM:
 *  Declare: result=0, num=given, max_last_digit = INT_MAX%10, min_last_digit = INT_MIN%10
 *  while(num!=0)
 *      1) Extract last digit: num%10
 *      2) result = result*10 + x
 *      3) num /= 10
 *      4) check if the current result is (>= INT_MAX/10 OR <= INT_MIN/10) AND (num%10 > max_last_digit OR < min_last_digit)  
 *          4.1) return 0
 *      return result
 * 
 * 
 * 
 * 
**/

int reverseNum(int);

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char * argv[]) {
    cout << reverseNum(1534236469);
    return 0;
}

int reverseNum(int num) {
    int result = 0, max_last_digit = INT_MAX%10, min_last_digit = INT_MIN%10, digit;
    while (num!=0) {
        digit = num % 10;
        num /= 10;
        if((result > INT_MAX/10 || result < INT_MIN/10)) {
            return 0;
        }
        result = result*10 + digit;
    }
    return result;
}

// OPTIMAL
// int rem=0;
//         while(x!=0){
//             int temp=x%10;
//             x/=10;
//         if (rem> INT_MAX / 10 || (rem == INT_MAX / 10 && temp > 7)) return 0;
//         if (rem < INT_MIN / 10 || (rem == INT_MIN / 10 && temp < -8)) return 0;
//             rem = rem*10 + temp;
//         }
//         return rem;
