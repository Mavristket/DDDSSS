#include<iostream>
using namespace std;
int search(int arr[],int n,int j=key,int loc=-1){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            loc=i;
            break;
        }
    }
    return loc;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key=5;
    int n=10;
    int result=search(arr,n,key);
    if(result!=-1){
        cout<<"Element found at index: "<<result<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
}