/*
    Problem: Reverse an array using recursion

    Solution: take 2 pointers: left = 0, right = size-1 at start
    swap elements at left and right
    recursively do this again for
    inc left, dec right

    base case: left and right either coincide(size = odd, no swap required) or cross each other
                => (left >= right) 

    to do this using a single pointer: wkt, right = size-left-1
    => base case: left >= size-left-1
                => 2*left  = size-1
                => left = size/2 - 1/2 (Since integral division, 1/2 = 0.5 =0)
                => left = size/2  

*/

void array_rev(int *, int, int);

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char * argv[]) {
    int a[] = {1, 2, 3, 4, 5};

    array_rev(a, 0, 6);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    
    return 0;
}

void array_rev(int *array, int index, int size) {
    if(index >= (size/2)) {
        return;
    }
    swap(array[index], array[(size-index-1)]);
    array_rev(array, index+1, size);
}