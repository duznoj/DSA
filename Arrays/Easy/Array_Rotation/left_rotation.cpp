#include<bits/stdc++.h>
using namespace std;


void right_rotate(int [], int, int);

int main(int argc, char * argv[]) {
    int a[] = {1, 2, 3, 4, 5}, size = 6;
    right_rotate(a, 5, 2);
    for(auto itr: a) {
        cout << itr << " ";
    }
    cout << endl;
    return 0;
}

void right_rotate(int array[], int size, int places) {
    

    places %= size;
    reverse(array, array+places);
    reverse((array+places), array+size);
    reverse(array, array+size);

}