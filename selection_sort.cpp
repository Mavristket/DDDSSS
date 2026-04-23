#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }


        }
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
}
int main(){
    int arr[10]={64,25,12,22,11,90,45,67,89,34};
    int n=10;
    sort(arr,n);
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}