#include<iostream>
using namespace std;
void printcol(int arr[][4], int row, int col){
    // column wise
 for(int j=0; j<col; j++)
 for(int i=0; i<row; i++)
 cout<<arr[i][j]<<" ";
 cout<<endl;
// find an element in our array
 
  int x = 27;
     
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == x) {
                cout<<"yes "<<endl;
                return; 
                
            }
        }
    }
    cout<<"no "<<endl;
    
}



int main(){
    // create 2 d array
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // print all the value in array row wise
    for(int row=0; row<3; row++)
    for(int col=0; col<4; col++)
    cout<<arr[row][col]<<" ";
    cout<<endl;
    // print all the value in array col wise , function call
    printcol(arr,3,4);
    
}