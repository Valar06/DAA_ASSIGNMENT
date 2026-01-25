#include<bits/stdc++.h>
using namespace std;
void binarysearch(int arr[], int n, int target, int low, int high){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            cout<<"Target found at index: "<<mid<<endl;
            return ;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"Target not found in array"<<endl;
    return;
}
int main(){
    int arr[]={2,5,8,12,16,23,38,56,72,91};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=23;
    binarysearch(arr,n,target,0,n-1);
}