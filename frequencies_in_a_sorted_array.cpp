#include<iostream>
using namespace std; 
void  printfrequencies(int arr[], int n){
    int count=0; // initialise count to the current element
    for( int i=0; i<n; i++){
        if(arr[i]== arr[i-1]){
            count++;// Increment count if the current element is the same as the previous one
        }else{
            // Print the frequency of the previous element
            cout<<"frequency is "<<arr[i-1]<<" is : "<<count<<endl;
            count =1;// Reset count for the new element
        }
    }
     // Print the frequency of the last element
        cout<<" frequency is "<<arr[n-1]<<"is : "<<count<<endl;
    
}
int main(){
    int arr[]={1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printfrequencies(arr,n);
    return 0;
}