#include <iostream>
using namespace std;


//void printArray(int theArray[], int sizeOfArray){
//	
//	for(int x = 0; x < sizeOfArray; x++){
//		cout << theArray[x] << endl;
//	}	
//	
//}

//int mainprogram(int anArray[], int sizeOfArray1, int sizeOfArray2){
////	for(int x = 0; x < sizeOfArray; x++){
////		cout << anArray[x] << endl;
////	}
//		for(int row=0; row < sizeOfArray1; row++){
//		for(int column = 0; column < sizeOfArray2; column++){
//			cout << anArray[row][column] << " ";
//		}
//		cout << endl;
//	}
//	
//}


int look();
int mul();
int darray[3][4];
int largest, i, j;

int main(){
	
	cout << "\n enter the value: \n";
	
	for(int i = 0; i < 3; i++ ){
		for(int j=0; j <4; j++){
			cin >> darray[i][j];
		}
	}
	
	
//	int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//	int new_arr;
//	
//	for(int row = 0; row < 3; row++){
//		for(int column = 0; column < 4; column++){
//			new_arr = arr[row][column];
//			cout << new_arr  << " ";
//		}
//		cout << endl;
//	}


	
	
	
	
	
	
//	const int size = 5;
//	double a[size];
//	cout << "enter " << size << "numbers: " << endl;
//	for(int i = 0; i < size; i++)
//	cin >> a[i];
//	cout << "in reverse order: ";
//	for(int i = size -1; i >= 0; i--)
//	cout << "\t" << a[i];

//creating array
//int bucky[5] = {4, 5, 7, 2, 33};
//cout << bucky[3] << endl;
//using array with calcualtion
//int tuna[5] = {20,54,66,88,900};
//int sum = 0;
//
//	for(int x = 0; x < 5; x++){
//		sum += tuna[x];
//		cout << sum << endl;
//	}

	//passsing array to a function
	
//	int bucky[3] = {20, 40, 55};
//	int jessy[6] = {33, 44, 56, 78, 33, 21};
//	
//	printArray(bucky, 3);

	//multidimentional array
//	int sally[2][3] = {{2, 3, 4}, {4, 5, 6}};
//	
//	cout << sally[0][2];

//	print out a multi array
//	int benita[2][3] = {{1,2,3}, {7,8,9}};
//	
//	for(int row=0; row < 2; row++){
//		for(int column = 0; column < 3; column++){
//			cout << benita[row][column] << " ";
//		}
//		cout << endl;
//	} 
}


largest = look();
mul();
for(i = 0; i < 3; i++){
	cout << "\n";
	for(j=0; j < 4; j++){
		cout << "\t" << darray[i][j];
		
	}
}

cout << "\n the largest number us: \t" << largest;

int look(){
	int l = darray[0][0];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			if(l < darray[i][j]){
				l=darray[i][j];
			}
			else{
				l=l;
			}
		}
		return(l);
	}
	
	
}

int mul(){
	for(int j = 0; j < 4; j++){
		darray[0][j] = darray[0][j]*largest;
	}
	
	return darray[0][j];
}



