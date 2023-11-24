/*
    Merge Sort: Divide main array into two smaller sub arrays and apply the merge sort logic on this split arrays separately
    i.e, mid = (low+high)/2
         merge_sort(a[], low, mid)
         merge_sort(a[], mid+1, high)
    after these two sub arrays are individually sorted, merge them
        merge(a[], low, mid, high)
        base case: no more splitting of arrays can be done if the og array is split into single-element sub arrays
        therefore if(low>=high) return;

        merge logic:
        take two pointers left and right which contain starting indexes of both sorted sub arrays
        left = low
        right = mid+1
        now insert elements of both sub arrays into a single auxillary array in a sorted manner:
        temp[high-low]; or vector<int> temp;
        k=0
        while(left<=mid && right<=high) {
            if(a[left]<=a[right])
                temp[k] = a[left], temp.push_back(a[left])
                left++
            else
                temp[k] = a[right], temp.push_back(a[right])
                right++
            k++
        }

        in case either left or right array is completeley finished but some elements are left in the other
        => copy them as is, since both sub arrays are already sorted
        while(left<=mid) {
            temp[k] = a[left], temp.push_back(a[left])
            k++
            left++
        }

        while(right<=high) {
            temp[k] = a[right], temp.push_back(a[right])
            k++
            right++
        }

        finally copy all elements from the sorted temp array into original array
        for(k=low;k<high;k++) {
            a[low] = temp [k-low]
        }
        
        in C++ we'll be using vector as the auxillary array to provide with dynamic sizing
        indexing in the last for loop is a matter of simple logic of indexing of the og array and auxillary array created in each call
        do a dry run calmly and it'll make sense

        TC = O(log2(N)) for the merge_sort() as the num of times this is called = num of time the og array can be halved
            and for each sub array or in worst case the final merge, the TC of merge() = O(N)

            Therefore TC of the entire merge sort algorithm = O(N*log2(N))
            and since we're using auxillary space in the merge() which in worst case is of size N
            therefore SC = O(N)
*/

void merge_sort(int [], int, int);
void merge(int [], int, int, int);


#include<bits/stdc++.h>
using namespace std;

int main(int argc, char * argv[]) {
    int a[] = {5, 4, 3, 2, 1}, size = 5;
    merge_sort(a, 0, size-1);
    for(int i=0;i<size;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

void merge_sort(int array[], int low, int high) {
    if(low>=high) {
        return;
    }

    int mid = (low+high)/2;
    merge_sort(array, low, mid);
    merge_sort(array, mid+1, high);
    merge(array, low, mid, high);
}

void merge(int array[], int low, int mid, int high) {
    int left = low, right = mid+1;
    vector<int> temp;

    while (left<=mid && right<=high) {
        if(array[left]<=array[high]) {
            temp.push_back(array[left]);
            left++;
        }
        else {
            temp.push_back(array[right]);
            right++;
        }
    }

    while(left<=mid) {
        temp.push_back(array[left]);
        left++;
    }
    
    while(right<=high) {
        temp.push_back(array[right]);
        right++;
    }

    for(int i=low;i<=high;i++) {
        array[i] = temp[i-low];
    }
}