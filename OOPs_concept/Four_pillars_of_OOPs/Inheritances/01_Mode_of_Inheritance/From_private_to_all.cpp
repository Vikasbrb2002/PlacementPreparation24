#include<bits/stdc++.h>
using namespace std;
class animal{
  private:
  int age;
  int weight;
  
  void eat(){
    cout<<"eating"<<endl;
  }
};
//----------------not accessible in any mode of inheritance ---------------------//
//  class dog: public animal{ 
    
//      // mode of inheritance is public
//  };
//  class dog: private animal{

//     public:
//     void print(){
//         cout<<"Inheritance from public to private"<<endl;
//     }

//     void setAge(int age){
//         this->age=age;
//     }
//     int getAge(){
//         return age;
//     }

// // class dog:protected animal{
// //    public:
// //    void print(){
// //     cout<<"Inheritance from public to protected"<<endl;
// //    }

// };
int main(){
//   dog lebra;
//   lebra.setAge(10);
//   cout<<lebra.getAge()<<endl;
//   lebra.age=10;
//   cout<<lebra.age;
//  lebra.print();

return 0;
}