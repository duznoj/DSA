/*
    Hasing is the process of mapping a key to a certain value
    This is done via a hashing function
    A hash function takes a key as input and returns the hash value for the key
    Hash function should be such that it always returns the same value for a key


    Most basic hashing = frequency of elements in an array
    Brute Force:
    int freq(int key, int arr[], int size) {
        int count = 0;
        for(i=0;i<size;i++) {
            if(a[i]==key) {
                count++;
            }
        }

        return count;
    }
    Drawbacks: Each function call TC  = O(N) and SC = O(1)
                to find frequency of Q numbers TC = Q * O(N)
                
    Let us have array a[N], and largest element in this array = M
    So range of values for any a[i] = [0, M]
    To store the Frequency of a number in the array, we take an auxillary array hash[M+1]
    and store the frequency of element a[i] at hash[a[i]], so that multiple instances of same number in a[]
    map to the same index in hash[]

    for(i=0;i<n;i++) {
        hash[a[i]]++;
    }
    TC = O(N)
    SC = O(M)

    Drawbacks of this hash[]: inside a functions local scope, int[10^6] is the max size array for an int
                              and in global scope max int array size is 10^7
*/
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char * argv[]) {
    
    return 0;
}