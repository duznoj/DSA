/*
    Insertion sort: you take each element as an outside element, and try to insert it at the end
    and then shift it to its correct position by comparing with left element and swap it if a[j] < a[j-1]
    inner loop must only run till min(j=1) so that j=1 and j-1 = 0 can be compared
    since each element is an outside element and iserted => no shifting in place in array is done
    => we cant guarantee that putting size-1 elements to their correct place automatically means last element is also at its correct place

    for(i=0;i<size;i++) {
        // This loop and i only inserts last element and keeps track of total elements inserted
        j=i // This j is used to iterate in the sorted array and put the new inserted element at its correct place
        while(j>0 && a[j]<a[j-1]) {
            // This loop goes through the array in reverse order and checkings and swappings only need to be done till a[j] < a[j-1]
            swap(a[j], a[j-1])
            j--
        }
    }     

    TC = O(N^2) for Worst Case
       = O(N) for Best case, as in best case outer loop runs entirely to insert each element, but inner loop never runs as the condition a[j]<a[j-1] is never satisfied
*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int [], int size);

int main(int argc, char * argv[]) {
    int a[] = {3, 1, 1, 5, 11, 9}, size = 6;
    insertion_sort(a, size);
    for(int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

void insertion_sort(int array[], int size) {
    int i, j;
    for(i=0;i<size;i++) {
        j = i;
        while(j>0 && array[j]<array[j-1]) {
            swap(array[j], array[j-1]);
            j--;
        }
    }
}