#include<bits/stdc++.h>
using namespace std;
class Animal{
    
    public:
    Animal(){
        cout<<"I am inside Animal constructor"<<endl;
    }
    virtual void speak(){
        cout<<"speaking"<<endl;
    }
    
};

class Dog : public Animal{
     public:
     Dog(){
        cout<<"I am inside the dog Constructor"<<endl;
     }
     void speak(){
        cout<<"barking"<<endl;
     }
};
int main(){
  
 // Animal* a=new Animal;     // output -> I am inside Animal constructor

  Animal* b= new Dog;       // output -> I am inside Animal constructor
   b->speak();                          //           I am inside the dog Constructor

  Dog* c=new Dog;             // output -> I am inside Animal constructor
  c->speak();                    //            I am inside the dog Constructor
  
  Dog* d=(Dog*) new Animal;   // output -> I am inside Animal constructor
  d->speak();

  delete b;
  delete c;
  delete d;
return 0;
}