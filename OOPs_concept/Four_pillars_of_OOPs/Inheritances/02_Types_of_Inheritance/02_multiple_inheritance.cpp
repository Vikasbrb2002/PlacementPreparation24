#include<bits/stdc++.h>
using namespace std;
class car{
    public:
   int wheels;
   string model;

   void color(){
    cout<<"color of the car is black"<<endl;
   }
};

class fourwheeler: public car{
    public:
     int weight;
};

class audi: public fourwheeler{
    public:
     int speed;
};
int main(){
 //car mercedes;
 audi a;
 a.model="s series";
 a.wheels=10;
 a.color();
 cout<<a.model<<endl;
 cout<<a.wheels<<endl;
 a.weight=100;
 cout<<a.weight;

return 0;
}