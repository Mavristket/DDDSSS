#include<iostream>
using namespace std;
int search(int arr[],int start,int end,int key,int loc=-1){
    int s=start;
    int e=end;
    int mid=(s+e)/2;
    while(s<=e && arr[mid]!=key){
        if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
        

    }
    if(arr[mid]==key){
        loc=mid;
    }
    return loc;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key=5;
    int loc=search(arr,0,9,key);
    if(loc!=-1){
        cout<<"Element found at index: "<<loc<<endl;
    }
    else{
        cout<<"Element not found\n";
    }
}