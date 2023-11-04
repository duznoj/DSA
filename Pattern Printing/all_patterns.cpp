#include <bits/stdc++.h>
using namespace std;

void pattern1(int );
void pattern2(int );
void pattern3(int );
void pattern4(int );
void pattern5(int );
void pattern6(int );
void pattern7(int );
void pattern8(int );
void pattern9(int );
void pattern10(int );
void pattern11(int );
void pattern12(int );
void pattern13(int );
void pattern14(int );
void pattern15(int );
void pattern16(int );
void pattern17(int );
void pattern18(int );
void pattern19(int );
void pattern20(int );
void pattern21(int );
void pattern22(int );


int main() {
    int n;
    cout << "Enter number of Rows:";
    cin >> n;
    pattern22(n);
}

void pattern1(int rows) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<rows; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int rows) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int rows) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<=i; j++) {
            cout << j+1;
        }
        cout << endl;
    }
}

void pattern4(int rows) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<=i; j++) {
            cout << i+1;
        }
        cout << endl;
    }
}

void pattern5(int rows ) {
    for(int i=0; i<rows; i++) {
        for(int j=rows-i; j>=1; j--) {
            cout << "*";
        }
        cout << endl; 
    }
}

void pattern6(int rows) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<rows-i; j++) {
            cout << j+1;
        }
        cout << endl;
    }
}

void pattern7(int rows) {
    for(int i=0; i<rows; i++) {
        //Starting spaces:
        for(int j=0; j<=rows-i-1; j++) {
            cout << " ";
        }

        // Stars: 
        for(int j=0; j<2*i+1; j++) {
            cout <<"*";
        }

        cout << endl;
    }
}

void pattern8(int rows) {

    for(int i=0; i<rows; i++) {
        //Starting spaces:
        for(int j=0; j<=i; j++) {
            cout << " ";
        }

        // Stars: 
        for(int j=0; j<2*(rows-i)-1; j++) {
            cout <<"*";
        }

        cout << endl;
    }
}

void pattern9(int rows) {
    pattern7(rows);
    pattern8(rows);
}

void pattern10(int rows) {
    pattern2(rows);
    pattern5(rows-1);
}

void pattern11(int rows) {
    int k;
    for(int i=0; i<rows; i++) {

        k = ((i+1)%2==0)  ?  0:1;


        for(int j=0; j<=i; j++) {
            cout << k << " ";
            k = (k==1)?0:1;
            // OR k = 1-k;
        }
        cout << endl;
    }
}

void pattern12(int rows) {
    for(int i=0; i<rows; i++) {
        // Starting numbers
        for(int j=0; j<=i; j++) {
            cout << j+1;
        }

        // Spaces
        for(int j=0; j<2*(rows-i-1); j++) {
            cout << " ";
        }

        // Ending numbers
        for(int j=i+1; j>=1; j--) {
            cout << j;
        }

        cout << endl;

    }
}

void pattern13(int rows) {
    int k=1;
    for(int i=0; i<rows; i++) {
        for(int j=0;j<=i;j++) {
            cout << k++<< " ";
        }
        cout << endl;
    }
}

void pattern14(int rows) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<=i; j++) {
            cout << (char)(j+'A');
        }
        cout << endl;
    }
}

void pattern15(int rows) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<rows-i; j++) {
            cout << (char) (j+'A');
        }
        cout << endl;
    }
}

void pattern16(int rows) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<=i; j++) {
            cout << (char)(i+'A');
        }
        cout << endl;
    }
}

void pattern17(int rows) {
    for(int i=0; i<rows; i++) {

        int k = 0;
        int deflect = (2*i)/2;
        // Spaces
        for(int j=0; j<rows-i; j++) {
            cout << " ";
        }

        // Letters
        for(int j=0; j<=2*i; j++) {
            cout <<(char) (k+'A');
            if(j<deflect) 
                k++;
            else
                k--;
        }
        cout << endl;
    }
}

void pattern18(int rows) {
    char startingChar;
    for(int i=0; i<rows; i++) {
        startingChar = rows-i;
        for(int j=0; j<=i; j++) {

            cout << (char)('A'+startingChar+j-1);
        }
        cout << endl;
    }
}

void pattern19(int rows) {
    // Top Half
    for(int i=0; i<rows; i++) {
        // Starting Stars:
        for(int j=0; j<(rows-i); j++) {
            cout << "*";
        }

        // Spaces
        for(int j=0; j<2*i; j++) {
            cout << " ";
        }

        // Ending Stars
        for(int j=0; j<(rows-i); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom Half
    for(int i=0; i<rows; i++) {
        // Starting Stars:
        for(int j=0; j<=i; j++) {
            cout << "*";
        }

        // Spaces
        for(int j=0; j<2*(rows-i-1); j++) {
            cout << " ";
        }

        // Ending Stars
        for(int j=0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int rows) {
    int numOfTotalElements = 2*rows;
    int numOfStars;
    int numOfSpaces;
    for(int i=0; i<2*rows; i++)  {
        if(i<rows)
            numOfStars = i+1;
        else
            numOfStars = 2*rows-i-1;
        numOfSpaces = numOfTotalElements - 2*numOfStars;

        for(int j=0; j<numOfStars; j++) {
            cout << "*";
        }

        for(int j=0; j<numOfSpaces; j++) {
            cout << " ";
        }

        for(int j=0; j<numOfStars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern21(int rows) {
    int numOfElements = rows;
    int numOfStars, numOfSpaces;
    for(int i=0; i<rows; i++) {
        if(i==0 || i==(rows-1))
            for(int j=0;j<rows;j++) {
                cout << "*";
            }
        else {
            cout << "*";
            for(int j=0; j<rows-2; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;

        // OR
        // for(int j=0; j<rows; j++) {
        //     if(i==0 || j==0 || i==rows-1 || j==rows-1)
        //         cout << "*";
        //     else 
        //         cout << " ";
            
        // }
        // cout << endl;
    }
}

void pattern22 (int rows) {
    int top, bottom, left, right;
    for(int i=0; i<2*rows-1; i++) {
        for(int j=0; j<2*rows-1; j++) {
            top = i;
            bottom = (2*rows -2) - i;
            left = j;
            right = (2*rows -2) - j;

            cout << (rows - min(min(left,right), min(top, bottom)));
        }
        cout << endl;
    }
}