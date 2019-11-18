#include <iostream>
using namespace std;

class speech{
	int num;
		void getNum(int n){
			num = n;
		}
		void sayNum(){
			cout << "Number is " << num << endl;
		}
	
	friend void say(int num);
};

void say(int num){
	int N = num;
	
	getNum(N);
	sayNum();
}

main(){
	say(5);
}
