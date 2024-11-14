#include <iostream>
#include <algorithm>
using namespace std;
// this is  without passing the arrays as parameters
void fullmat(int**& mat,int row,int col) {
    int  i;
    cout << "enter your matrix numbers:" << endl;
     mat = new int* [row];
    for (i = 0; i < row; i++) {
        mat[i] = new int [col];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }
}

void display(int**& mat,int row,int col) {
    int i,j;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}
int minmat(int**& mat,int row, int col,int& rowmin, int& colmin) {
    int i, j;
    int min = mat[0][0];
    rowmin = 0;
    colmin = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
                rowmin = i;
                colmin = j;
            }
        }
    }

    cout << "The minimum value is: " << min << endl;
    cout << "The row of the minimum is: " << rowmin << endl;
    cout << "The column of the minimum is: " << colmin << endl;

    return min;
}

/*
// this by  passing the arrays as parameters. 
void display(int mat[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}
int minmat(int mat[3][4], int& rowmin, int& colmin) {
    int min = mat[0][0];
    rowmin = 0;
    colmin = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
                rowmin = i;
                colmin = j;
            }
        }
    }

    cout << "The minimum value is: " << min << endl;
    cout << "The row of the minimum is: " << rowmin << endl;
    cout << "The column of the minimum is: " << colmin << endl;

    return min;
}
*/

int main() {
    // this is  without passing the arrays as parameters
    int row1, col1, row2, col2, i; 
    int row4, col4;
    int rowmin3, colmin3, rowmin4, colmin4;
    int** mat3; 
    int** mat4;

    cout << "enter the number of rows then colons: " << endl;
    cin >> row1>> col1;
    fullmat(mat3 , row1,col1);
    cout << "enter the number of rows then colons: " << endl;
    cin >> row2 >> col2;
    fullmat(mat4 , row2,col2);
    cout << "mat3 before swapping: " << endl;
    display(mat3, row1, col1);
    cout << "mat4 before swapping: " << endl;
    display(mat4, row2, col2);
    minmat(mat3,row1,col1,rowmin3, colmin3);
    minmat(mat4,row2,col2, rowmin4, colmin4);
    swap(mat3[rowmin3][colmin3], mat4[rowmin4][colmin4]);
    cout << "mat3 after swapping: " << endl;
    display(mat3,row1,col1);
    cout << "mat4 after swapping: " << endl;
    display(mat4,row2,col2);
    for (int i = 0; i < row1; i++) {
        delete[] mat3[i];
    }
    delete[] mat3;
    for (int i = 0; i < row2; i++) {
        delete[] mat4[i];
    }
    delete[] mat4;
/*
// this by  passing the arrays as parameters.
    int rowmin1, colmin1, rowmin2, colmin2;
    int mat1[3][4] = { {1, 2, 3, 4}, {7, 91, 75, 77}, {78, 39, 81, 22} };
    int mat2[3][4] = { {43, 99, 39, 42}, {5, 6, 7, 8}, {65, 94, 61, 76} };

    cout << "mat1" << endl;
    display(mat1);
    minmat(mat1, rowmin1, colmin1);
    cout << "mat2" << endl;
    display(mat2);
    minmat(mat2, rowmin2, colmin2);
    swap(mat1[rowmin1][colmin1], mat2[rowmin2][colmin2]);
    cout << "mat1 after swapping: " << endl;
    display(mat1);
    cout << "mat2 after swapping: " << endl;
    display(mat2);
    */

    return 0;
}