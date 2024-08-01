#include<iostream>
#include<climits>
using namespace std;
int maxsumsubarray(int arr[], int n){
    int maxsum=0; 
    int cursum=0;
    for(int i=0; i<n; i++){
        cursum =cursum+arr[i];
    
    if(cursum>maxsum){
        maxsum=cursum;
    }
    if(cursum<0){
        cursum=0;
    }
    }
    return maxsum;

}
int main(){
    int arr[]={5,-4,-2,6,5,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
   int maxsum= maxsumsubarray(arr,n);
   cout<<maxsum<<" "<< endl;


    
}