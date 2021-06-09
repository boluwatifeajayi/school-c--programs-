#include <iostream>
#include <string>
#include <cmath>

using namespace std;



int sum_from_to(int first, int last){
	
	int sum = 0;
	
	for(int i = first; i <= last; i++){
		sum = i + sum;
	}
	
	cout << "sum: " << sum << endl;
}

int even(){
	int sum = 0;
	for(int i = 0; i <= 100; i++){
		if(i % 2 == 0){
			//cout << i << endl;
			sum = i + sum;
			cout << sum;
		}
	}
	
	
}

int odd(){
	int sum = 0;
	for(int i = 0; i <= 100; i++){
		if(i % 2 != 0){
//			cout << i << endl;
			sum = i + sum;
			cout << sum;
		}
	}
}


class Auto{
	private:
		string type;
		double cost;
		int life_span;
	public:
		Auto(string t = "unknown", double c = 15000, int l = 2){
			type = t;
			cost = c;
			life_span = l;
		};
		void set_values(string t1, double c1, int l1){
			t1 = type;
			c1 = cost;
			l1 = life_span;
		}
		void Type(){
			
			cout << "type: " << type << endl;			
		}
		
		int current_value(){
			float curVal = pow(0.97, life_span) * cost;
			
			cout << "the current value is: " << curVal << endl;
			return curVal;
		}
		
};


//	void sameType(){
//		Auto car1;
//		Auto car2;
//		
//		string carr1 = car1.type();
//		string carr2 = car2.type();
//		
//		
//		if(carr1 == carr2){
//			cout << "of the same type" << endl;
//		}
//		else{
//			cout << "not of the same type" << endl;
//		}
//	}



class Triangle{
	private:
		int a;
		int b;
		int c;
		float area;
	public:
		Triangle(int da = 0, int db = 0, int dc = 0){
			da = a;
			db = b;
			dc = c;
		}
		float getArea(int sa, int sb, int sc){
			a = sa;
			b = sb;
			c = sc;
			
			int s = (a + b + c) / 2;
			int ss = s*((s - a)*(s - b)*(s - c));
			area = sqrt(ss);
			
			return area;
			
			
		}
		friend void print(Triangle &trg);
};

void print(Triangle &trg){
	int lenghta = trg.a;
	int lenghtb = trg.b;
	int lenghtc = trg.c;
	
	float tarea = trg.area;
	
	cout << "lenght 1: " << lenghta << endl;
	cout << "lenght 2: " << lenghtb << endl;
	cout << "lenght 3: " << lenghtc << endl;
	
	cout << "area: " << tarea << endl;
	
}






int main(){
	
//	string ty;
//	double ct;
//	int ls;
//	
//	cout << "enter type of the car: ";
//	cin >> ty;
//	
//	cout << "enter cost of the car: ";
//	cin >> ct;
//	
//	cout << "enter life span of car in years: ";
//	cin >> ls;
//	
//	Auto car;
//	car.set_values(ty, ct, ls);
//	car.Type();
//	car.current_value();
	
//	sameType();

//	int aa;
//	int bb;
//	int cc;
//	
//	cout << "enter lenght a: ";
//	cin >> aa;
//	cout << "enter lenght b: ";
//	cin >> bb;
//	cout << "enter lenght c: ";
//	cin >> cc;
//	
//	Triangle tri;
//	
//	tri.getArea(aa, bb, cc);
//	
//	print(tri);
	
	
	
	
	
	//sum_from_to(0, 100);
	
//	int M;
	
//	for(int i = 0; i < M; i++){
//	cout << i << " " << i * i << endl;
//	}
	
//	int i = 0;
//	
//	while(i < M){
//		i = i + 1;
//		cout << i << " " << i * i << endl;
//		
//		
//	}

	even();
	odd();

//const int N = 8;
//int i, A[N] = {0, 11, 22, 33, 44, 55, 66, 77};
//for(i = 1; i < N-1; i++)
//A[i] = A[i+1];
//
//cout << A[i] << endl;


//float a, b, c, x;

//cout << "enter value a: " << endl;
//cin >> a;
//
//cout << "enter value b: " << endl;
//cin >> b;
//
//cout << "enter value c: " << endl;
//cin >> c;
//
//float zero = b - c;
//
//if(zero == 0){
//	cout << "error: " << b << "-" << c << " is zero " << endl;
//}
//else{
//	x = a / (b - c);
//	
//	cout << "a: " << a << endl;	
//	cout << "b: " << b << endl;	
//	cout << "c: " << c << endl;	
//	
//	cout << "x: " << x << endl;	
//}






	
	
return 0;
	
	
	
}

