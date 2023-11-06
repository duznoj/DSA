#include<bits/stdc++.h>
using namespace std;

int main(int argc, char * argv[]) {
    pair<int, pair<int, char>> p = {13, {14, 'c'}};
    cout << p.second.first << endl;

    vector<int> v1(5, 20);
    vector<int> v2(v1);
    vector<int>:: iterator it1 = v1.begin();
    vector<int>:: iterator it2 = v2.begin();  
    v1.push_back(39);
    if(it1==it2) {
        cout << "Same Object" << endl;
    }
    else {
        cout << "Different Object" << endl;
    }
    for(int i=0; i<6; i++) {
        cout << v2[i] <<" ";
    }
    cout << endl;
    return 0;
}