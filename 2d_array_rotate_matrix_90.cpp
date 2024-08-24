#include<iostream>
#include<vector>
using namespace std;

void rotatematrix(vector<vector<int>>& arr, int row, int col){
    // transpose the  matrix
    for(int i=0; i<row-1; i++){
        for(int j=i+1; j < col; j++){
            swap(arr[i][j],arr[j][i]);
        }

    }
    for(int i=0; i<row; i++){
    int start=0, end=col-1; 
    while(start < end){
        swap(arr[i][start],arr[i][end]);
        start++;
        end--;
    }
    }
}
int main(){
    vector<vector<int>> arr={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    rotatematrix(arr,4,4);

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
          cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}
