#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i){
    int index=i;
    int leftIndex=2*i;
    int rightIndex=2*i+1;
    int largest=index;
    if(leftIndex<=n && arr[largest]<arr[leftIndex]){
        largest=leftIndex;

    }
    if(rightIndex<=n && arr[largest]<arr[rightIndex]){
        largest=rightIndex;

    }
    if(index!=largest){
        swap(arr[largest],arr[index]);
        index=largest;
        heapify(arr,n,index);
    }
}
 void buildheap(int arr[],int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
 }
int main(){
   int arr[]={-1,12,43,13,15,14};
   int n=5;
   buildheap(arr,n);

   cout<<"build heap is : "<<endl;
   for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
   }

return 0;
}