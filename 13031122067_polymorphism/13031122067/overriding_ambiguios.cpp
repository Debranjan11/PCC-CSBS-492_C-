#include<iostream>
using namespace std;
class A{
public:
  void fun(){
  cout<<"I am in class  A"<<endl;
  }
  };
  class B{
  public:
  void fun(){
   cout<<"I am in class B" <<endl;
   }
  };
  class C: public A, public B{
  };
  int main(){
  C obj;
  obj.func();
  
  return 0;
  }
