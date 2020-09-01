//2nd Day of Learning Cpp
//program to add two complex numbers using classes
#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		void set_data(int x,int y){
			a = x;
			b = y;
		}

		Complex add(Complex c){
			Complex temp;
			temp.a = a + c.a;
			temp.b = b + c.b;
		return(temp);
		}
			void show_data(){
			cout<<"\na="<<a<<"\nb="<<b;
		}
};
main(){
	Complex c1,c2,c3;
	c1.set_data(3,4);
	c2.set_data(5,6);
	c3 = c1.add(c2);
	c3.show_data();
}
//program of constructor in Cpp
#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		Complex(int x, int y){		//Parametrized Constructor
			a = x;
			b = y;
			cout<<"\na="<<a<<"\nb="<<b;
		}
		Complex(int k){
		 	a = k;
		 	cout<<"\na="<<a;
		}
		Complex(){					//Default Constructor
			a=0;b=0;
		}
};
 main(){
	Complex c1(3,4),c2(5),c3,c4(3,8);
}
