// Write a program to represent a 3x3 matrix in form of a 2D array.

#include <iostream>
using namespace std;

int main() 
{
    int Matrix[3][3];
    Matrix[0][0] = 1; Matrix[0][1] = 2; Matrix[0][2] = 3;
    Matrix[1][0] = 4; Matrix[1][1] = 5; Matrix[1][2] = 6;
    Matrix[2][0] = 7; Matrix[2][1] = 8; Matrix[2][2] = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << Matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}

