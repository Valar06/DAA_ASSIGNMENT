#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int n, int low, int high){
    int mid= low+(high-low)/2;
    int pivot=arr[mid];
    int i=low;
    int j=high;
    while(i<j){
        while(i<=high&&arr[i]<=pivot){i++;}
        while(j>=low&&arr[j]>pivot){j--;}
        if(i<j){swap(arr[i],arr[j]);}
    }
    swap(arr[mid],arr[j]);
    return j;

}   
void quick_sort(int arr[], int n, int low, int high){
    if(low<high){
        int p=partition(arr,n,low,high);
        quick_sort(arr,n,low,p-1);
        quick_sort(arr,n,p+1,high);
    }
}
void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={4,2,6,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,n,0,n-1);
    printarr(arr,n);
}