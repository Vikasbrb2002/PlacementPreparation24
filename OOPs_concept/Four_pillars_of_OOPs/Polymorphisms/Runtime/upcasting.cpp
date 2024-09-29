#include<bits/stdc++.h>
using namespace std;
class Animal{
   public:
   
   // void speak(){
   //  cout<<"animal is speaking"<<endl;
   // }

    void speak(){
    cout<<"animal is speaking"<<endl;
   }

};

class dog:public Animal{
   public:
   void speak(){
    cout<<"dogs are barking"<<endl;
   }
};
int main(){
   // Animal* a=new Animal;
   // a->speak();

   // Animal* b=new dog;   // isme parent class(Animal) ka speak call hoga
   // b->speak();

   Animal* b=new dog;   // agar dog ka speak chahiye to parent class(Animal) ke speak ke age virtual hoga
   b->speak();          // virtual lagane pr darking output hoga 
   

   dog* d=(dog*)new Animal;
   d->speak();
return 0;
}