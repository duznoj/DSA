### Logic pplicable for both Left and Right rotations by any number of places:
---
#### Consider Right Rotation by k = 3 places for example:
OG = 1  2  3  4  5
FINAL = 3  4  5  1  2
##### Brute Force:
In above example, 1 and 2, i.e elements at index < k places, can simply be shifted by i+k places
```c++
void shift_remaining(array, size) {
    for(i=0;i<size-k;i++) {
        array[i+k] = array[i]
    }
}
```
What remains are how you put the elements at indexes [k, size).
For this we simply store them in a temporary array
```c++
void store_end_elements(array, size) {
    for(i=0;i<k;i++) {
        temp[i] = array[i+k];
    }
}
```
Also we need to put these elements back in the array at appropriate places:
```c++
void putback(array, size) {
    for(i=0;i<k;i++) {
        array[k-i-1] = temp[i];
    }
}
```

The order in which we execute these is:
```c++
store_end_elements();
shift_remaining();
putback();
```
TC = O(N-K) + O(K) + O(K) = O(N+K)
SC = O(K)

---

##### Optimal:
We can observe that by treating the first K elements and remaining N-K elements as different sub arrays and performing reversals on them, we can get the final result

OG = 1  2 | 3  4  5
K = 3

Step_1: Rev(start, size-k-1), start and size-k-1 are indexes
2  1 | 3  4  5

Step_2: Rev(size-k, end), size-k and end are indexes
1  2 | 5  4  3

Step_3: Rev(start, end), reverse entire array
3  4  5  2  1, is the required answer

```c++
reverse(start, (size-k));
reverse(size-k, end);
reverse(start, end);
```
Since reverse operation takes O(N/2)
TC = O((N-K)/2) + O(K/2) +O(N/2) = O(N)
SC = O(1)

### NOTE:
Similar logic is there for brute force and optimal solutions for left rotate as well, only the order in which these same above operations are performed is changed.
Do a small example on paper and figure it out easily.