/*
    Leetcode 283:
    Given: An Array
    To Do: Put all zeros to end, and non-zero elements at start,
    in the order in which they appeared in the og array

    Eg:
    OG = 1  3  0  1  2  0  5  0
    FINAL = 1  3  1  2  5  0  0  0

    Brute Force:
    1) Iterate through the entire array and store all non-zero elements in a temp array, and keep a count of non-zero elements (k)

    2) Put first k elements in the array from the temp array and fill the rest with 0's

    Psuedo Code:
    k = 0
    for(i=0;i<size;i++) {
        if(a[i] != 0) {
            temp[k] = a[i];
            k++;
        }
    }

    for(i=0; i<k; i++) {
        a[i] = temp[i];
    }

    for(i=k; i<size; i++) {
        a[i] = 0;
    }

    TC = O(N) + O(K) + O(N-K) = O(2N)
    SC = O(K) in worst case this will be O(N)

    Optimal: Two Pointer Approach
    -> Take one pointer (j) which points to the first 0
    -> The 2nd pointer (i) starts from next index of first pointer to iterate through the entire array
    1) if(a[i] != 0) {
        swap(a[i], a[j]);
        j++ // This ensures j always points to first 0 in the array
            // The first 0 is being swapped with the first non-zero, 
            // so j will have last non-zero, so increment it to point to first 0
    }

    Psuedo Code:
    j = -1;
    // Getting first 0 pointer
    for(i=0;i<size;i++) {
        if(a[i] == 0) {
            j = i;
            break;
        }
    }

    // if no zeros in the array
    if(j==-1) {
        return -1 or something
    }

    for(i=j+1; i<size; i++) {
        if(a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
*/

#include<bits/stdc++.h>
using namespace std;

void move_zeros_end(int[], int);

int main(int argc, char * argv[]) {
    int a[] = {0, 1, 2, 0, 0, 1, 5, 10}, size = 8;
    move_zeros_end(a, 8);
    for(auto itr: a) {
        cout << itr << " ";
    }
    cout << endl;
    return 0;
}

void move_zeros_end(int array[], int size) {
    int j=-1, i;
    for(i=0;i<size;i++) {
        if(array[i]==0) {
            j=i;
            break;
        }
    }

    for(i=j+1;i<size;i++) {
        if(array[i] != 0) {
            swap(array[i], array[j]);
            j++;
        }
    }
}