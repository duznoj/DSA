/* LARGEST
    Brute Force for largest: 
        1) Sort the array
        2) Last element (array[size-1]) is now the largest

        Psuedo code:
        quick_sort(array, 0, size-1);
        return array[size-1];

        TC = O(NlogN)
        SC = O(1)


    Optimal:
        1) Set largest = array[0]
        2) Iterate through the array
            2.1) if (array[i]>largest)
                    2.1.1 largest = array[i]

        Psuedo Code:
        int largest = array[0]
        for(int i=0; i<size; i++) {
            if(array[i]>largest) {
                largest = array[i]
            }
        }
        return largest;

        TC = O(N)
        SC = O(1)


    
*/
/* SECOND LARGEST
    Brute Force:
        1) Sort the array
        // Largest is surely array[size-1], but we cant be sure if array[size-2] is second largest.
           Since largest may have multiple instances in the array
        3) Iterate through the array from index size-2 to 0,
            3.1) if(array[i] != array[size-1])
                    3.1.1) return array[i] (is second largest) 
        4) return some flag if no 2nd largest element exists like INT_MIN or consider largest to be 2nd largest as well and return that

        Psuedo code:
        quick_sort(array, 0, size-1);
        for(int i = size-2; i>=0; i--) {
            if(array[i] != array[size-1]) {
                return array[i]
            }
        }
        return array[size-1] or INT_MIN;

        TC = O(NlogN) + O(N) = O(NlogN)
        SC = O(1)

    Better:
        1) Once interate through the array to get largest
        2) Iterate through it once more, consider array[0] to be starting second largest
            if(array[i]>second_largest && array[i] != largest) {
                second_largest = array[i] 
            }
        3) After the entire iteration, return second_largest

        Psuedo Code:
        int largest = array[0];
        for(int i=0;i<size;i++) {
            if(array[i]>largest) {
                largest = array[i];
            }
        }
        int second_largest = array[0];
        for(int i=0;i<size;i++) {
            if(array[i]>second_largest && array[i] != largest) {
                second_largest = array[i];
            }
        }
        return second_largest;

        TC = O(2N)
        SC = O(1)

    Optimal: 
        1) Iterate through the array once, starting with largest = array[0] and second_largest = -1 or INT_MIN
            1.1) if(array[i]>largest){
                // array[i] becomes new largest
                // => prev largest automatically becomes second largest
            }

            1.2) else if(array[i] < largest && array[i] > second_largest) {
                only second_largest gets updated
            }
        2) After this we have both largest and second_largest

        TC = O(N)
        SC = O(1)
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> two_largest(int *, int);

int main(int argc, char * argv[]) {
    int a[] = {2, 3, 4, 1, 5, 0, 10}, size = 7;
    vector<int> max2 = two_largest(a, size);
    for (int i = 0; i < max2.size(); i++) {
        cout << max2[i] << " ";
    }
    cout << endl;
    
    return 0;
}

vector<int> two_largest(int *array, int size) {
    int largest = array[0], second = -1;
    for(int i=0;i<size;i++) {
        if(array[i]>largest) {
            second = largest;
            largest = array[i];
        }
        if(array[i]>second && array[i]!=largest) {
            second = array[i];
        }
    }
    return {largest, second};
}