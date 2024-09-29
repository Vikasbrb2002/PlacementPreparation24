#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
   int size;
   int arr[101];

   Heap(){
    size=0;
   }
 
 void insert(int value){
    // insert karo end me
     size=size+1;
     int index=size;
     arr[index]=value;
    
    //place the inserted value at the right(sahi position) position

    while(index>1){
        int parentIndex=index/2;
       if(arr[index]>arr[parentIndex]){
        swap(arr[index],arr[parentIndex]);
        index=parentIndex;
       }
       else break;
    }
 }

 void deleteElement(){
    arr[1]=arr[size];
    size--;
    int index=1;

    while(index<size){
       int left=2*index;
       int right=2*index+1;
       
       int largest=index;
       if(left<size && arr[left]>arr[largest]){
          
          largest=left;
       }
       if(right<size && arr[right]>arr[largest]){
           
          largest=right;
       }
       if(largest==index){
          // value is at correct position 
           return;
       }
       else {
            swap(arr[largest],arr[index]);
            index=largest;
       }
    }
      
 }

 void heapify(int* arr,int n,int i){

    int index=i;
    int left=2*i;
    int right=2*i+1;
    int largest=index;
    if(left<size && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<size && arr[right]>arr[largest]){
      largest=right;
    }
    if(index!=right){
      swap(arr[largest],arr[index]);
      index=largest;
      heapify(arr,n,index);
    }
 }
   
};
int main(){
  Heap h;
//   h.arr[0]=-1;
//   h.arr[1]=50;
//   h.arr[2]=30;
//   h.arr[3]=70;
//   h.arr[4]=40;
//   h.arr[5]=80;
  
//   h.size=5;
h.insert(50);
h.insert(30);
h.insert(70);
h.insert(40);
h.insert(80);
h.insert(100);

  cout<<"before inserting a new element : "<<endl;
  for(int i=0;i<=h.size;i++){
    cout<<h.arr[i]<<" ";
  }
  h.insert(120);
  cout<<endl; 
  cout<<"after insertion : "<<endl;
  for(int i=0;i<=h.size;i++){
    cout<<h.arr[i]<<" ";
  }
 cout<<endl;
//  h.deleteElement();
//  for(int i=0;i<=h.size;i++){
//     cout<<h.arr[i]<<" ";
//   }
  cout<<endl;
  int index=1;
  h.heapify(h.arr,h.size,index);
  for(int i=0;i<=h.size;i++){
    cout<<h.arr[i]<<" ";
  }
return 0;
}