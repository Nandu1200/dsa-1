#include<iostream>
using namespace std;
int intersection(int arr1[], int arr2[], int n){
    int count =0;//the count had to update the value 
    for(int i=0; i<n; i++){
        int element=arr1[i];
        for(int j=0; j<n; j++){
            //if element is equal to arr2 then print the value
            if(element==arr2[j]){
                cout<<element<<endl;
                count++;
                break;

            }
            
        }
    }
    return count;
}
int main(){
    int arr1[]={1,2,3};
    int n=3;
    int arr2[]={3,4,3};
    intersection(arr1,arr2,n);
}