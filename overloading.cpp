#include <iostream>
using namespace std;

class Demo{
	private:
		int x;
		int y;
	public:
		Demo(){
			x = 0;
			y = 0;
		}
		Demo(int a, int b){
			a = x;
			b = y;
			
		}
		int Display(int x, int y){
			cout << x << endl;
			cout << y << endl;
		}
};


int main(){
//	
//	Demo A;
//	Demo B(2);
	Demo C(44, 56);
	Demo D;
	
	C.Display(33, 55);
	
	
	return 0;
}
