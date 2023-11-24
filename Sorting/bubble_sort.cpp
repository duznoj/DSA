/*
        Bubble Sort: Bring the maximum element to the end in each iteration by doing adjacent swaps

        for(i=0;i<size-1;i++) {
            Since size-1 elements at correct place => last element also at its correct place
            for(j=0;j<size-1-i;j++) {
                Since we compare j and j+1, so max(j+1) = size-1 => max(j) = size-2
                => j < size-1, also after i iterations, last i elements are sorted, so no need to again try to compare and swap
                => only do checkings for j=0 to j = size-2-i or j<size-1-i
                if(a[j]>a[j+1]) {
                    swap(a[j], a[j+1])
                }
            }
        }
        
        TC for this is O(N^2) for worst, best, avg case,
        but we can optimize it for best case
        the moment no swaps happen for any i => the array is sorted and we dont have to check further
        therefore, for each iteration of i, have a flag to check if any swaps are done in the j loop,
        if no swaps are done => array is sorted so break,
        now TC = O(N^2) for worst case
                 O(N) for best case, as you only go throug the inner loop once
*/


#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int [], int);

int main(int argc, char * argv[]) {
    int b[] = {10, 3, 2, 3, 11, 9}, size =  6;
    bubble_sort(b, size);
    for(int i=0; i<size; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}

void bubble_sort(int array[], int size) {
    int i, j, swapFlag;
    for(i=0;i<size-1;i++) {
        swapFlag = 0;
        for(j=0;j<size-1-i;j++) {
            if(array[j]>array[j+1]) {
                swap(array[j], array[j+1]);
                swapFlag = 1;
            }
        }
        if(swapFlag == 0) {
            break;
        }
    }
}