/*
    Problem: Given a string, check if it is a pallindrome, return true or false

    Solution: do the array reverse thing, instead of swapping things,
              check if complement indexed elements are unequal
                -> return false
              if base case is achieved => no unequal elements found
                -> retuen true

    // NOTE: For the code below, string.size() takes O(1) in C++ as string is a class
             and string.size() is given as a property, so no computation done,
             so we can do 
             main() {str_pall(0, str)}

             str_pall(int index, string str) {
                if(index > str.size()/2) return true;
                
                without worrying for string.size() to be doing O(N) computation for each recursive call
             }
*/

#include<bits/stdc++.h>
using namespace std;

bool str_pallindrome(string, int, int);

int main(int argc, char * argv[]) {
    
    string str = "abc";
    cout << str_pallindrome(str, 0, str.size()) << endl;
    return 0;
}

bool str_pallindrome(string str, int index, int size) {
    if(index >= size/2) {
        return true;
    }

    if(str[index] != str[size-index-1]) {
        return false;
    }

    return str_pallindrome(str, index+1, size);
}