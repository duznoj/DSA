/*
    HashMap Data Structures in STL: 
    1) map<key_dataType, value_dataType> aka ordered map: key can be any datatype here, int, char, str, pair, etc
    2) unordered_map<key_dataType, value_dataType>: key cannot be a pair

    -> ordered map stores elements in ascending order of key

    -> unorderd_map stores elements stores keys in random orders and will store same input in different ways for different executions

    -> A newly declared map/unordered_map is always empty 

    -> the value of a key in a map is accessed by using map_name[key];

    -> trying to access a key which does'nt exist will NOT return an error, but rather 0,
        eg: map<int, int> a;
        cout << a[0]; // returns 0, and map still remains empty
        a[0]++; // now the key 0 is stored in the map with value 1

    -> storing and fetching in ordered map takes O(log(N)) where N is the size of the map, in Best, Avg and Worst cases,
       this is because an ordered map is implemented using Binary Search Trees (BST), more on that later

    -> storing and fetching in unordered_map takes O(1) in Best and Avg Case and o(N) in Worst Case,
       this is because of collisions, if almost all, if not all keys collide, then the collision resolving methods will store
       the keys in such a way that it'll take O(N) time to search for the key.

    -> preferably use unordered_map to solve problem, if TLE(Time Limit Exceeded) occurs, then switch to ordered map
*/





#include<bits/stdc++.h>
using namespace std;

int main(int argc, char * argv[]) {
    
    return 0;
}