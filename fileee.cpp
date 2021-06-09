#include <iostream>
#include <fstream>

using namespace std;

class Test{
	static int x;
	int *ptr;
	int y;
};

int main(){
	
//	ofstream myfile;
//	myfile.open("afile.txt");
//	
//	myfile << "something to the file" <<endl;
//
//	myfile.close();
//	
//	ifstream somefile("afile.txt");
//	
//		while(somefile){
//		cout << somefile << endl;

Test t;
cout << sizeof(t) << endl;
cout << sizeof(Test *);
		
}
