#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr=i;
        int prev=i-1;
        int temp=arr[curr];
        while(prev>=0 && arr[prev]>temp){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=temp;
    }
}
int main(){
    int arr[10]={12,11,13,5,6,7,8,9,10,4};
    int n=10;
    sort(arr,n);
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}