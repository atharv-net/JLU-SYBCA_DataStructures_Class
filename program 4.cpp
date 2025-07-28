/* Write a program to create a matrix having even numbers in such a way that 2nd row is double of 1st row*/

#include <iostream>
using namespace std;

int main() 
{
    int Matrix[2][3];

    Matrix[0][0] = 2;  Matrix[0][1] = 4;  Matrix[0][2] = 6;
    Matrix[1][0] = 2 * Matrix[0][0];
    Matrix[1][1] = 2 * Matrix[0][1];
    Matrix[1][2] = 2 * Matrix[0][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) 
            cout << Matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}

