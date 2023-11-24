/*
    Quick Sort: in the array, select any element to be pivot element,
    this may be a[0], a[size-1], a[mid], doesnt matter

    we get this pivot element to its correct place in the array using a second function
    this is done in such a way that after getting the pivot element to its correct place
    all elements to left are < pivot element and all to right are >= pivot element
    OR left <= pivot and right > pivot

    and get the index at which pivot element ends up at = partitionIndex

    recursively repeat these steps for low to partitionIndex-1 and partitionIndex+1 to high,
    we can quickSort as long as low<high
    therefore base case = low>=high

    void quickSort(array[], low, high) {
        if(low>=high) return
        int partitionIndex = partition(array, low, high);
        quickSort(array, low, partitionIndex-1)
        quickSort(array, partitionIndex+1, high)
    }

    how is the partition going to work?
    take two pointers at each end of array: i=low, j=high
    get the partitionElement = a[low]
    as long as i<j
        increment i as long as a[i] <= pivotElement and i is a valid index, i.e, i<=high
        decrement j till a[j] > pivotElement and j is a valid index, i.e, j>=low

    when both pointers stop two cases are possible:
        i<j (more elements are left in between to check) so simply swap a[i], a[j]
    
    and i>=j
    => no more checking is to be done, the array low to j has all elements <= pivotElement
        and array j+1 to high has elements greater
    since j is now the right most side of partition <= pivotElement, swap a[low] and a[j],
    return j as partitionIndex

    int partition(a[], low, high) {
        int pivot = low
        i = low, j = high

        while(i<j) {
            while(a[i]<a[pivot] && i<=high) {
                i++;
            }

            while(a[j]<a[pivot] && j>=low) {
                j--;
            }

            if(i<j) {
                swap(a[i], a[j])
            }
        }

        swap(a[j], a[pivot])
        return j 
    }

*/



#include<bits/stdc++.h>
using namespace std;

void quick_sort(int [], int, int);
int partition(int [], int, int);

int main(int argc, char * argv[]) {
    int a[] = {5, 4, 3, 4, 1}, size=5;
    quick_sort(a, 0, size-1);
    for(int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

void quick_sort(int array[], int low, int high) {
    if(low>=high) {
        return;
    }
    int partitionIndex = partition(array, low, high);
    quick_sort(array, low, partitionIndex-1);
    quick_sort(array, partitionIndex+1, high);
}

int partition(int array[], int low, int high) {
    int pivotIndex = low, i=low, j=high;

    while(i<j) {
        while(array[i]<=array[pivotIndex] && i<=high) {
            i++;
        }

        while(array[j]>array[pivotIndex] && j>=low) {
            j--;
        }

        if(i<j) {
            swap(array[i], array[j]);
        }
    }

    swap(array[pivotIndex], array[j]);
    return j;
}