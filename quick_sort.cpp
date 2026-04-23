#include<iostream>
using namespace std;
int partation(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            
        }
    }
    i++;
    int temp=arr[i];
    arr[i]=arr[high];
    arr[high]=temp;
    return i;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pivot=partation(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);
    }
}
int main(){
    int arr[10]={10,7,8,9,1,5,3,4,6,2};
    int n=10;
    quick_sort(arr,0,n-1);
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}