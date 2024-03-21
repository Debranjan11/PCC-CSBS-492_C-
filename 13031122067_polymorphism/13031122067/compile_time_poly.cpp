#include<iostream>
using namespace std;
class over1{
   public:
   void over2(int a){
   int square = a*a;
   cout<<"Sqaure of integer value is: "<<square<<endl;
   }
   void over2(double b){
   double square = b*b;
   cout<<"Square of double value is: "<<square<<endl;
   }
   void over2(int c , int d){
   int sum = c+d;
   cout<<"Sum of two value is: "<<sum<<endl;
   }
  };
  int main(){
   over1 o;
   o.over2(7);
   o.over2(7.735);
   o.over2(7,7);
   
  return 0;
  }
