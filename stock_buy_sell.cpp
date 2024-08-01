#include<iostream>
using namespace std;
int maximumprofit(int arr[], int n){
int maxprofit=0;
int minsofar=arr[0];//minsofar starting me 3 hai and it will change according to loop iteration
for(int i=0; i<n; i++){
    minsofar= min(minsofar,arr[i]);
    int profit = arr[i]-minsofar; // it store current profit means 5-5=0
    maxprofit = max(maxprofit,profit);// it store maxprofit means maximum profit b/w maxprofit  and profit
}
return maxprofit;
}
int main(){
    int arr[]={3,1,4,8,7,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = maximumprofit(arr,n);
    cout<<max<<" "<<endl;
    return 0; 
}