#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralform(vector<vector<int>>&arr, int row, int col ){
    vector<int>ans;
    int top=0, bottom = row-1, left=0, right=col-1;
    while(left<=right && top<= bottom){
        // print top
        for(int j=left; j<=right; j++){
            ans.push_back(arr[top][j]);
        }
            top++;
        
        // print right
        for(int i=top; i<=bottom; i++){
            ans.push_back(arr[i][right]);
        }
            right--;
        
        // print bottom
        if(top<=bottom){
        for(int j=right; j>=left; j--){
            ans.push_back(arr[bottom][j]);
        }
            bottom--;
        
        }
        // print left
        if (left<=right){
        for(int i=bottom; i>=top; i--){
            ans.push_back(arr[i][left]);
            }
            left++; 
        
        }

    }
    return ans;
}
int main(){
vector<vector<int>>arr={
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25}
};
vector<int> result=spiralform(arr,5,5);
for(int val: result){
    cout<< val <<" ";

}
return 0;
}