#include<iostream>
#include<climits>
using namespace std;
int max(int arr[], int n){
    int max= INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]> max){

        
        max = arr[i];
        }
    }
    return max;
    

}
int  min(int arr[], int n){
    int min = INT_MAX;
    for(int i=0;i<n; i++){
        if(arr[i]<min){

        
        min=arr[i];
        }
    }
    return min;
}
int printelement(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main(){
    int arr[]={4,12,8,10};
    int n=4;
    int maxvalue= max(arr,n);
    cout<<"maximum value:"<<maxvalue<<endl;
    int minvalue= min(arr,n);
    cout<<"minimum value:"<<minvalue<<endl;
     printelement(arr, n);
     return 0;

}