 #include<iostream>
#include<limits.h>
using namespace std;

int largestRowSum(int arr[][3], int rows, int cols) {
    int maxi = INT_MIN;
    int rowIndex =-1;

    for(int row = 0; row < rows; row++) {
        int sum = 0;
        for(int col = 0; col < cols; col++) {
            sum += arr[row][col];
        }
        
        if(sum > maxi) {
            maxi = sum;
            rowIndex = row;
            cout<<" "<< maxi<<endl;
        }
    }
    return rowIndex;
}

int main() {
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    
    int rowIndex = largestRowSum(arr, 4, 3);

    
    cout << "The row with the largest sum is: " << rowIndex << endl;

    return 0;
}