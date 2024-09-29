#include<bits/stdc++.h>
using namespace std;
class animal{
   public:

   void speak(){
    cout<<"speaking "<<endl;
   }
};

class Dog: public animal{
    
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
   animal a;
   Dog d;
   d.speak();
   
   a.speak();

return 0;
}