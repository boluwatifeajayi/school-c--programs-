#include <iostream>
using namespace std;

class Sally{
	public:
		int num;
		Sally(){
			
		};
		Sally(int a){
			num = a;
		};
//		Sally operator+(Sally):
		Sally operator+(Sally aso){
			Sally brandNew;
			brandNew.num = num + aso.num;
			
			return(brandNew);
		}
			
		
};


class money{
	double amount;
	public:
		money(double x){
			amount = x;
		}
		bool operator == (money second){
			return(amount == second.amount);
		}
		bool operator < (money);
		bool operator > (money);
};

bool money::operator < (money second){
	return (this -> amount < second.amount);
}
bool money::operator > (money second){
	return(this -> amount > second.amount);
} 
int main(){
	
	
	money b(32.00), c(32.00);
	if(b == c) cout << "both amounts are equal" << endl;
	else cout << "both amounts are not equal" << endl;
	if(b < c) cout << "b is < less than c" << endl;
	else cout << "b is not less" << endl;
	if(b > c) cout << "b is greater than c " << endl;
	else cout << "b is not greater " << endl;
	
//	money a, b(32.00), c(14.00), d;
//	d.display();
//	d = b.add(c);
//	cout << endl;
//	d.display();
	
//	Sally a(34);
//	Sally b(21);
//	Sally c;
//	
//	c = a + b;
//	cout << c.num << endl;
	
}
