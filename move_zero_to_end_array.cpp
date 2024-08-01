#include<iostream>
using namespace std;
void movezero(int arr[], int n){
    int nonzero=0;//first nonzero value should come on oth index
    for(int j=0; j<n; j++){
      if(arr[j]!= 0){
        swap(arr[j],arr[nonzero]);
        nonzero++;
      }
    }
}
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,0,4,0,5};
    int n=5;
    movezero(arr,n);
    printarray(arr,n);
    return 0;

}