#include<iostream>
#include<vector>
using namespace std;

void negative_element(vector<int>& arr){
    int positive=0;
    for(int j=0; j<arr.size(); j++){
        if(arr[j]>0){
            swap (arr[j],arr[positive]);
            positive++;
        }
    }
}
void printarray(vector<int>&arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
     vector<int>arr ={-1,-2,3,-4,5};
    
    negative_element(arr);
         printarray(arr);
    return 0;
}