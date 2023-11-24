/*
    Problem: get nth term of fibonacci series, dont print the entire series

    Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13

    if(n<=1) return n
    else return fibonacci(n-1) + fibonacci(n-2)

    since each call gives rise to 2 more calls (n-1) and (n-2)
    therefore total calls = 2*2*2 (around n times) approx. = 2^n
    therefore TC = O(2^n) since for each call we have O(1) complexity of steps

                            fib(n)
                    fib(n-1)       fib(n-2)
            fib(n-2)  fib(n-3)  fib(n-3)  fib(n-4)

    This is only to demonstrate multiple recursion calls in a single function call
    For fibonacci series, iterative arroach is more optimal with TC = O(N) and SC = O(1)

    for(int i = 0, i<=n, i++) {
        fib(i) = fib(0) + fib(1)
        fib(0) = fib(1)
        fib(1) = fib(n)
    }

    this prints the entire series
    the recursive approach only gives a single term on 2^n complexity
    to get entire series TC and SC = n*(2^n)
*/

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int);

int main(int argc, char * argv[]) {
    cout << fibonacci(3) << endl;
    return 0;
}