#include<stdio.h>
#include<stdlib.h>

int binarysearch(int start , int end , int arr[] , int target){
    while(start <= end){
    int mid = (start+end)/2;
    if(target == arr[mid]){
        return mid;
    }
    else if(target<arr[mid]){
        return binarysearch(start , mid-1 , arr , target); 
    }
    else if(target>arr[mid]){
        return binarysearch(mid+1 , end , arr , target);
    }
}
    return -1;
}

int main(){
    int arr[] = {23,44,55,66,77,88};
    int target = 77;
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("position of searched element is:%d",binarysearch(0 , size , arr , target));
    return 0;
}
