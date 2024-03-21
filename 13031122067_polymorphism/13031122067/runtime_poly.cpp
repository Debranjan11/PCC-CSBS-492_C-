#include<iostream>
using namespace std;
class shape{
 public:
   virtual void calculate(){
    cout<<"Area of your shape:";
    }
   virtual ~shape(){
   cout<<"Shape Destructor Call\n";
   }
  };
  class rectangle : public shape{
  public:
  int width, height ,area;
  void calculate(){
  cout<<"ENter width:"<<endl;
  cin>>width;
  cout<<"Enter height:"<<endl;
  cin>>height;
  area = height*width;
  cout<<"Area of Rectangle:"<<area<< "\n";
  }
  virtual ~rectangle()
  {
     cout<<"Rectangle destructor"<<endl;
     }
  };
  
 class square : public shape{
    public:
    int side, area;
    void calculate(){
     cout<<"Enter one side your of square:";
     cin>>side;
     area = side*side;
     cout<<"Area of square:"<<area<<"\n";
     }
     virtual ~square(){
     cout<<"square destructor"<<endl;
     }
     };
     int main(){
     shape *s;
     rectangle r;
     s = &r;
     s->calculate();
     square sq;
     s = &sq;
     s->calculate();
     return 0;
     
    }
