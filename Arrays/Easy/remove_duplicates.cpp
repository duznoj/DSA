/*
    Leetcode 26:
    Given: Sorted array
    To Do: Find all unique elements, let's say there are 'k' unique elements
           -> Modify the og array in such a way that that the first k elements
              are the unique elements in the order in which they appeared in the og array
           -> Return k,

           Note: It doesnt matter what the remaining (size-k) elements are in the array, we are'nt concerned with it

    Brute Force Solution:
    1) Take a set:  set<int>
    set is a data_structure which works basically like the mathematics set, i.e, no duplicates will exist
    i.e, if duplicate is tried to insert, it wont accept it,
    set stores elements in ascending order
    set takes O(log(N)) to insert a single element 

    2) Iterate throught the entire array and insert each element into the set
       as: set.insert(a[i]);

    3) Now take the uniqueElementsIndex = 0 iterate through the set using an auto iterator,
    put a[uniqueElementsIndex] = it;
        uniqueElementsIndex++;
    
    4) After this uniqueElementsIndex will have index of last unique element => noOfUniqueElements = uniqueElementsIndex+1;
       return it

    TC = O(Nlog(N)) for step_2 + O(N) for step_3
    SC = O(N) for the set

    Psuedo Code for brute force:

        set<int> uniqueElements;
        int uniqueElementsIndex = 0, numOfUniqueElements;

        for(int i=0; i<size; i++) {
            uniqueElements.insert(a[i]); // This single line takes O(log(N)) to execute
        }

        for(auto itr: uniqueElements) {
            a[uniqueElementsIndex] = itr; // since set stores in ascending order, itr will be ascending
                                          // all elements need are required to be in og order, which was also ascending
                                          // => unique elements are being placed in correct place with this one single line
            uniqueElementsIndex++;
        }

        numOfUniqueElements = uniqueElementsIndex + 1;
        return numOfUniqueElements;
    

    Optimal Solution: Two pointer approach

    1) take a pointer uniqueElementIndex = 0;
       a[0] is already a unique element and will surely be the first entry in the "unique_array"

    2) the second pointer will be used to iterate through the array, if an element a[i] != a[uniqueElementIndex]
       => we've encountered a new unique element, so it'll be stored at uniqueElementIndex+1, and uniqueElementIndex also needs to be incremeneted by 1

       if(a[i] != a[uniqueElementIndex]) {
            a[++uniqueElementIndex] = a[i];  
       }

    3) Now uniqueElementIndex will be pointing to last index of required array, so size of the required array will be uniqueElementIndex+1
       return this size 

    Psuedo Code:
    int lastIndex = 0;

    for(int i=1;i<size;i++) {
        if(a[i] != a[lastIndex]) {
            a[++lastIndex] = a[i];
        }
    }
    return (lastIndex+1);


    TC = O(N) only one iteration through the array
    SC = O(1) no extra space

*/

int return_duplicates(int [], int);

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char * argv[]) {
    int a[] = {1, 2, 3, 3, 4, 6, 10, 11, 11};
    int k = return_duplicates(a, 9);
    for(int i=0; i<k; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

int return_duplicates(int array[], int size) {
    int uniqueElementsIndex = 0, numOfUniqueElements;
    for(int i=1; i<size; i++) {
        if(array[i] != array[uniqueElementsIndex]) {
            array[++uniqueElementsIndex] = array[i];
        }
    }

    numOfUniqueElements = uniqueElementsIndex+1;
    return numOfUniqueElements;
}