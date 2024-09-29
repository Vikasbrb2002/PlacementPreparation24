#include<bits/stdc++.h>
using namespace std;
class class_name{   
    public:      // By default it is private(accesses modifier).
    string name; // property
    int age;

    void Hisage(){  // behaviour
        cout<<"I am 22 year old."<<endl; 
    }

    // constructor -> called whenever object is created(no parameterized).
    class_name(){
        this->name="";
        this->age=0;
        cout<<"This is default constructor"<<endl;
    }
    class_name(int age,string name){  // parameterized constructor
        this->age=age;
        this->name=name;
        cout<<"This is parameterized constructor"<<endl;
    }
    class_name(class_name &obj){
        this->age=obj.age;
        this->name=obj.name;
        cout<<"this is copy constructor"<<endl;
    }
    ~class_name(){
        cout<<"This is destructor"<<endl;   
    }
};
int main(){
 class_name object_name;
 class_name obj2(10,"vv");
//   object_name.Hisage();
//   object_name.age();
class_name* d=new class_name(20,"Aish");
  object_name.name="vikas";  // dot operator used to access propertyand behaviour of a class
  cout<<"my name is "<<object_name.name<<endl;
class_name a=object_name;
a.Hisage();
class_name c(a);
delete d;
return 0;
}