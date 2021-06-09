#include <iostream>
using namespace std;
int main(){
	int score;
	
	cout << "enter your score ";
	cin >> score;
//	
//	if(score > 100){
//		cout << "score cannot be more than 100";
//	}
//	else if(score < 0){
//		cout << "score must be more than 0";
//	}
//	else{
//		if(score >= 70){
//		cout << "grade is A";
//	}
//	else if(score >= 60){
//		cout << "grade is B";
//	}
//	else if(score >= 50){
//		cout << "grade is C";
//	}
//	else if(score >= 45){
//		cout << "grade is D";
//	}
//	else if(score < 45){
//		cout << "grade is F";
//	}
//	
//	else{
//		cout << "enter something valid";
//	}
//	
//		
//	}


//switch(score){
//	case 70:
//		cout << "thats an A";
//		break;
//	case 60:
//		cout << "thats a B";
//		break;
//	case 50:
//		cout << "thats a C";
//		break;
//	case 45:
//		cout << "thats A D";
//		break;
//	case 0:
//		cout << "thats an F";
//		break;
//	default:
//		cout << "enter a vlid input ";
//	
//	
//		
//}

//conditional/ ternary operator

cout << (score < 50 ? "score is below average": "its abouve average") << endl;

	
	
	
	return 0;
	
}
