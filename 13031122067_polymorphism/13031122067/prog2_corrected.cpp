#include<iostream>
using namespace std;
class fun{
      public:
	 
	void print(int a){
	cout<<a<<endl;
	}
	void print(int a , int b,int c){
	cout<<a<<" "<<b<<" "<<c<<endl;
	}
    void print(int a, int b){
	cout<<a<<" "<<b<<endl;
	}
};
int main(){
	fun f;
	int a=1,b=2,c=3;
	f.print(a);
	f.print(a,b,c);
	f.print(a,b);
	
	
}
