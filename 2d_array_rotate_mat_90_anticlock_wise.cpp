#include<iostream>
#include<vector>
using namespace std;
void rotatematrix90anti(vector<vector<int>>& arr, int n){
    // transpose the matrix (swap element across the diagonal)
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // reverse column-wise
    for(int j=0; j<n; j++){
        int start=0, end = n-1;
        while(start<end){
            swap(arr[start][j],arr[end][j]);
            start++,end--;
        }
    }
}

int main(){
    vector<vector<int>>arr{
         {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n= arr.size();
    rotatematrix90anti(arr,n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}