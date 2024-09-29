#include<bits/stdc++.h>
using namespace std;
class animal{
  public:
  int age;
  int weight;
  
  void eat(){
    cout<<"eating"<<endl;
  }
};
//  class dog: public animal{
//        public:
//        void eat(){
//         cout<<"Dog is eating"<<endl;
//        }
//        void inside(){
//         cout<<"I am accessesing inside the inheritance class"<<endl;
//        }
//  };
 class dog: private animal{

    public:
     void inside(){
        cout<<"I am accessesing inside the inheritance class"<<endl;
       }

    void setAge(int age){
        this->age=age;
    }
    int getAge(){
        return age;
    }
};
class dog1:protected animal{
   public:
    void inside(){
        cout<<"I am accessesing inside the inheritance class"<<endl;
       }


};
int main(){
  dog lebra;
  dog1 desi;
  desi.inside();
  // lebra.eat();
  // lebra.age=10;
  //cout<<lebra.age<<endl;
  lebra.inside();
//-----------------run private wala and protected wala inheritance-------  
  // lebra.setAge(10);
  // cout<<lebra.getAge()<<endl;
//------------------------------------------



//  lebra.print();

return 0;
}