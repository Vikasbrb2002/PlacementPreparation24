#include<bits/stdc++.h>
using namespace std;
void merge(int* arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    
    int* leftArr=new int[len1];
    int* rightArr=new int[len2];

    // copy the elements in the left and right arr
    int k=s;
    for(int i=0;i<len1;i++){
        leftArr[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        rightArr[i]=arr[k];
        k++;
    }
    
    // merge logic
    int leftIndex=0;
    int rightIndex=0;
    int mainIndex=s;
    
    
    while(leftIndex<len1 && rightIndex<len2){
        if(leftArr[leftIndex]<rightArr[rightIndex]){
         arr[mainIndex]=leftArr[leftIndex++];
         mainIndex++;
        
    }
    else{
        arr[mainIndex]=rightArr[rightIndex++];
        mainIndex++;
    }
    }
    // copy bache hue left array ke element
    while(leftIndex<len1) arr[mainIndex++]=leftArr[leftIndex++];
    // copy right wala
    while(rightIndex<len2) arr[mainIndex++]=rightArr[rightIndex++];

}
void mergeSort(int* arr,int n,int s,int e){
    if(s>=e){
       return;
    }
    int mid=(s+e)/2;
    //left
    mergeSort(arr,n,s,mid);
    //right
    mergeSort(arr,n,mid+1,e);

    merge(arr,s,e);
}
int main(){
 int arr[]={39,2,44,1,22,41,3,21};
 int n=8;
 int s=0,e=n-1;
 mergeSort(arr,n,s,e);
 
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
return 0;
}