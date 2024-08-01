#include<iostream>
using namespace std;
int unique(int arr[], int n){
    //ans is initialise with 0
    int ans=0;
    for(int i=0; i<n; i++){
        //using xor condition ,in this logic a^a=0 and a^0=a
        ans=ans^arr[i];
    }
    
return ans;
}
 
int main(){
    int arr[]={2,3,10,6,3,6,2};
    int n=7;
    int uniqueelement =unique(arr,n);
    cout<<"unique element:"<<uniqueelement << endl;
    return 0;
   
}