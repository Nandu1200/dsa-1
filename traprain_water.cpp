#include<iostream>
#include<algorithm>
using namespace std ;
int traprainwater(int arr[], int n){
       // Arrays to store the maximum water level from both ends
    int left_max[n];
    int right_max[n];


 // Initialize the first element of left_max
 
    left_max[0]=arr[0];
    for(int i=1; i<n; i++){
        left_max[i] = max(left_max[i-1],arr[i]);

    }

    // Initialize the last element of right_max

    right_max[n-1]=arr[n-1];
    for(int i=n-2; i>=0; --i){
        right_max[i]=max(right_max[i+1],arr[i]);
       
    }
      // Calculate the trapped water
int trapped_water=0;
for(int i=1; i<n-1; i++){
    trapped_water=trapped_water + (min (left_max[i],right_max[i])-arr[i]);

}
return trapped_water;
}
int main(){
    int arr[]={3,0,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<" trapped water :"<< traprainwater(arr,n)<<endl;
    
    return 0;
    
}  