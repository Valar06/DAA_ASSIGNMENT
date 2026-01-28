#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int n, int low, int high, int mid){
    int n1=mid-low+1;
    int n2=high-mid;
    int L[n1];
    int R[n2];
    int k=low;
    for(int i=0;i<n1;i++){
        L[i]=arr[k];
        k++;
    }
    for(int i=0;i<n2;i++){
        R[i]=arr[k];
        k++;
    }
    k=low;
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
            arr[k]=L[i];
            i++;
            k++;
        }
    while(j<n2){
            arr[k]=R[j];
            j++;
            k++;
        }
}
void mergesort(int arr[], int n,int low, int high){
    if(low>=high){return;}
    int mid=low+(high-low)/2;
    mergesort(arr,n,low,mid);
    mergesort(arr,n,mid+1,high);
    merge(arr,n,low,high,mid);
}
void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={112,11,13,5,6,7};
    int n1=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting arr: "<<endl;
    printarr(arr,n1); //before sorting
    cout<<"After sorting arr: "<<endl;
    mergesort(arr,n1,0,n1-1);
    printarr(arr,n1); // after sorting
    int arr2[]={38,27,43,3,9,82,10};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"Before sorting arr2: "<<endl;
    printarr(arr2,n2);  //before sorting
    cout<<"After sorting arr2:"<<endl;
    mergesort(arr2,n2,0,n2-1);
    printarr(arr2,n2);
}