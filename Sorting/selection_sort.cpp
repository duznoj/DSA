#include<bits/stdc++.h>
using namespace std;

void swap(int *, int *);
void selection_sort(int [], int);
void bubble_sort(int [], int);

int main(int argc, char * argv[]) {
    int a[] = {3, 1, 1, 5, 11, 9}, size = 6;
    
    selection_sort(a, size);
    for(int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

void selection_sort(int array[], int size) {
    /*
        Selection sort:
        1) for each iteration over the array, get the index at which minimum element exists,
            swap elements at this index and i index
        2) repeat this process size-1 times, if size-1 elements are at correct place => final element will also be automatically at its correct place

        for(i=0;i<size-1;i++) {
            outer loop keeps track of num of elements put in correct place
            min = i
            for(j=i+1;j<size;j++) {
                inner loop should start from next index of outer loop,
                since first i elements are already sorted and dont need checking again
                if(a[mini]>a[j]) {
                    mini = j
                }
            }
            swap(a[min], a[i])
        }

        TC = O(N^2) for best, worst and avg case
    */

    int i, j, min, temp;
    for(i=0;i<size-1;i++) {
        min = i;
        for(j=i+1;j<size;j++) {
            if(array[min]>array[j]) {
                min = j;
            }
        }
        temp = array[min];
        array[min] = array[i];
        array[i] = temp; 
    }
}

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}