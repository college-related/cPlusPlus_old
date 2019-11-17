#include <iostream>
using namespace std;

class demo{
	int num1, num2;
	
	public:
//		default constructor
		demo(){
			num1=0;
			num2=0;
		}
//		parameterized constructor
		demo(int a=0, int b=0){
			num1=a;
			num2=b;
		}
//		parameterized constructor used again so constructor can be overloaded too
		demo(float x=0){
			num1=x;
			num2=0;
		}
//		copy constructor
		demo(demo &obj){
			num1 = obj.num1;
			num2 = obj.num2;
		}
		
		void show(){
			cout << "Num1 = " << num1 << endl << "Num2 = " << num2 << endl << endl;
		}
};

main(){
	demo d1(2,3); // intializes the demo() consructor as well as demo(int, int) constructor
		d1.show();
	demo d2(5); // intializes the demo(int) constructor
		d2.show();
	demo d3 = d1; // intializes the copy constructor ie demo(demo &obj)
		d3.show();
}
