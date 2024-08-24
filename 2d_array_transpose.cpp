#include<iostream>
#include<vector>
using namespace std;
void transposematrix(vector<vector<int>>&arr, int row, int col){
    //only diagonal upper side matrix will be traverse
    for(int i=0; i<row-1; i++){
        for(int j=i+1; j<col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}
int main(){
    vector<vector<int>>arr={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    transposematrix(arr,4,4);

for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;
}
return 0;
}