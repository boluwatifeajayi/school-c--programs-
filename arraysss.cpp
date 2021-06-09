#include <iostream>
#include <fstream>

using namespace std;

void printArray(int theArray[], int sizeOfArray){
	for(int x = 0; x < sizeOfArray; x++){
		cout << theArray[x] << endl;
	}
}

//void maxArray(int theArrayy[], int SizeColumn){
//	for(int row = 0; row < SizeRow; row++){
//		// cout << theArray[x] << endl;
//		for(int column = 0; column < SizeColumn; column++){
//			cout << theArrayy[column] << " ";
//		}
//	}
//}

int main(){
//	int bucky[5] = {66, 56, 77, 87, 99};
//	cout << bucky[4] << endl;

//int bucky[9];
//
//cout << "element - value" << endl;
//
//for(int x = 0; x <=8; x++){
//	bucky[x] = 99;
//	cout << x << "------ " << bucky[x] << endl;
// 	}
//}

//	int bucky[3] = {20, 54, 675};
//	int jessy[6] = {54, 24, 7, 8, 9, 10};
//
//	printArray(bucky, 3);


//	int sally[2][3] = {{1, 2, 3},{8, 9, 10}};
//
//	cout << sally[1][1];

//	int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
//
//	for(int row=0; row < 3; row++){
//		for(int column = 0; column < 3; column++){
//			cout << matrix[row][column] << " ";
//		}
//		cout << endl;
//	}

//try{
//		int num1 = 5;
//		int num2 = 0;
//
//		if(num2 == 0){
//			throw 0;
//		}
//		cout << num1/num2;
//	}
//
//	catch(int x){
//		cout << "cant divide by: " << x;
//	}
//	

//	ofstream myfile;
//	myfile.open("batman.txt");
//	
//	if(myfile.is_open()){
//		cout << "file is opened" << endl;
//	}
//	else{
//		cout << "file is messed up" << endl;
//	}
//
//	myfile << "i am batman the dark knight\n";
//	myfile.close(); 
	ofstream myhero;
	myhero.open("heros.txt");
//
	cout << "enter hero name and identity" << endl;
	cout << "press Ctrl+Z to quit" << endl;

	string name;
	string identity;

	while(cin >> name >> identity){
		myhero << name << " " << identity << " " << endl;
		
	}
	
	
	ifstream myheroo("heros.txt");

	while(myheroo >> name >> identity){
		cout << name << ", " << identity << endl;
	}

//	ifstream afile("batman.txt");
//	
//	cout << afile << endl;

//ofstream numfile;
//	numfile.open("indat.txt");
//
//	cout << "enter random numbers into the file: " << endl;
//	cout << "press ctrl+z to quit" << endl;
//
//	double numbers;
//
//	while(cin >> numbers){
//		numfile << numbers << endl;
//	}
//
//
//	ifstream numberss("índat.txt");
//
//	while(numberss >> numbers){
//		cout << numbers << endl;
//	}


//int nummy[5] = {1,2,3,4,5};
//
//	maxArray(nummy, 5);
}



