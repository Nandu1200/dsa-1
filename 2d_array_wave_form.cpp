#include<iostream>
#include<vector>
using namespace std;
void waveform(vector<vector<int>>&arr, int row, int col){
    for(int j=0; j<col; j++){
        if(j%2 == 0){//  for even columns, go top to bottom
            for(int i=0; i<row; i++){
                cout<<arr[i][j]<<" ";
            }
         } else// for odd columns, go bottom to top
            {
                for(int i=row-1; i>=0; i--){
                    cout<<arr[i][j]<<" ";
                }
            }
        
    }
    cout<<endl;
}
int main(){
    vector<vector<int>>arr={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    
    };
    
    waveform(arr,4,4);
 
}