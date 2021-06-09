#include <iostream>
using namespace std;

int main(){
//	//while loop
//	int i = 0;
//	
//	while(i <= 10){
//		cout << i++ << endl;
//	}
//	
//	int secret_no;
//	
//	//do wile loop
//	
//	do{
//		cout << "guess number: ";
//		cin >> secret_no;
//		
//	}
//	while(secret_no != 4);
//	
//	cout << "you guessed right";
//	
//	//for loop
//	
//	int k;
//	
//	for(k = 0; k <= 20; k++){
//		cout << k << endl;
//	}

//program that prints out multipalication of any number

int number;
int product;
int mult;
int length;


cout << "enter the number you like to see the product table: ";
cin >> number;
cout << "enter the lenght of the table: ";
cin >> length;

int i;

for(i = 0; i <= length; i++){
	product = number * i;
	cout << number << " * " << i << " = " << product << endl;
}




}
