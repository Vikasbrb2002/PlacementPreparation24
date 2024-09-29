#include<bits/stdc++.h>
using namespace std;
class animal{
  protected:
  int age;
  int weight;
  
  void eat(){
    cout<<"Animal is eating"<<endl;
  }
};

 class dog: public animal{
      public:
      void eat(){
        cout<<"Dog is eating "<<endl;
      }
      void inside(){
        cout<<"I am accessesing inside the inheritance class"<<endl;
       }

      
 };
 class dog1: protected animal{

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
class dog2:private animal{
   public:
   void inside(){
    cout<<"Inside the inheritance class"<<endl;
   }

};
int main(){
  dog lebra;
  dog1 desi;
  dog2 videsi;
  desi.inside();
  videsi.inside();
//   lebra.setAge(10);
//   cout<<lebra.getAge()<<endl;
//   lebra.age=10;
//   cout<<lebra.age;
  lebra.inside();

return 0;
}