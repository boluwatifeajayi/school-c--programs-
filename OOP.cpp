#include <iostream>
#include <string> // using string
using namespace std;

class Rectangle{
	private:
		int width, height;
	public:
		void set_values(int x, int y){
			width = x;
			height = y;
		}
		int area(){
			return width * height;
		}
};

class Parrallelogram{
	private:
		float base;
		float height;
	public:
		void set_dimensions(float a, float b){
			base = b;
			height = a;
		}
		int printArea(){
			return 0.5 * base * height;
		}
};

class Circle { 
	private: 
		double radius; // Data member (Variable) 
		string color; // Data member (Variable)
	public: 
		// Constructor with default values for data members
		Circle(double r = 1.0, string c = "red") { 
			radius = r; 
			color = c; 
		} 
		double getRadius() { // Member function (Getter)
		return radius; 
		}
		string getColor() { // Member function (Getter)
		return color;
		}
		double getArea() { // Member function
		return radius*radius*3.1416;
		}
		}; //you need to end the class declaration with a semi-colon
		
class myclass
{ 
	int n, d; 
	public: 
		myclass(int i, int j) { n = i; d = j; } 
		//declare a friend of myclass 
		friend int isfactor(myclass ob); 
		
		int isfactor(myclass ob) 
			{ 
				if ( !(ob.n % ob.d) ) 
				return 1; 
				else
				return 0; 
			} 
};


class samp
{ 
	int a; 
	public: 
		void set_a(int n) {a = n;} 
		int get_a( ) { return a; } 
}; 

class Student{
	private:
		string name;
		int mark1;
		int mark2;
		int media;
	public:
		void inputValues(){
			cout << "enter your name: ";
			cin >> name;
			cout << "enter first score: ";
			cin >> mark1;
			cout << "enter second score: ";
			cin >> mark2;
		
		}
		int calc_media(){
			media = mark1 + mark2 / 2;
			return media;
		}
		int disp(){
			cout << "name: " << name << endl;
			cout << "media: " << media << endl;
		}
		
	
	
	
};

class Myclass{
	int n, d;
	public:
		Myclass(int i, int j){
			n = i;
			d = j;
		}
		
		friend int isfactor(myclass ob);
};

int isfactor(myclass ob){
	if(!(ob.n % ob.d)){
		return 1;
	}
	else{
		return 0;
	}
}



//constructir and deconstructor

class Sally{
	
	public:
		Sally(){
		cout << "i am the contructor! " << endl;
	}
	~Sally(){
		cout << "i am deconstructor" << endl;
	}
	
}; 

// FRIEND FUNCTIONS

class Batman{
	public:
		Batman(){
			grapple = 0;
		}
	private:
		int grapple;
		
	friend void robin(Batman &rbn);
};

void robin(Batman &rbn){
	rbn.grapple = 6;
	cout << rbn.grapple << endl;
}

class Box{
	private:
		double width;
	public:
		Box(){
			width = 30;
		}
	friend int printWidth(Box &bx);
};

int printWidth(Box &bx){
	bx.width = 60;
	cout << bx.width << endl;
}

int main(){
	
	Box red; 
	printWidth(red);
	
	//FRIEND FUNCTION
	
//	Batman bruce;
//	robin(bruce);
//	
	//CONSTRUCTOR
//	Sally so;
//	cout << "whats on my shoe" <<endl;
	
//	Box box1(222.44);
//	printWidth(box1);
//	Box(44.56);
//	box1.printWidth();


//myclass ob1(10, 2), ob2(13, 3);
//if(isfactor(ob1)) cout << "2 is a factor of 10\n";
//else cout << "2 is not a factor of 13\n";
	
//	Student student;
//	student.inputValues();
//	student.calc_media();
//	student.disp();




	
	
//	Rectangle rect;
//	rect.set_values(3, 4);
//	cout << "area is: " << rect.area() << endl;;
//	Parrallelogram mine;
//	mine.set_dimensions(23, 56);
//	cout << "parrallelogram is: " << mine.printArea();
//	Circle c1(1.2, "blue");
//	cout << "Radius=" << c1.getRadius() << " Area=" 
//	<< c1.getArea()<< " Color=" <<c1.getColor() 
//	<< endl;
//	// Construct another Circle instance
//	Circle c2(3.4); // default color
//	cout << "Radius=" << c2.getRadius() << " Area=" 
//	<< c2.getArea()<< " Color=" << c2.getColor() 
//	<< endl;
//	// Construct a Circle instance using default no-arg constructor
//	Circle c3; // default radius and color
//	cout << "Radius=" << c3.getRadius() << " Area=" 
//	<< c3.getArea()<< " Color=" << c3.getColor() 
//	<< endl;
//	
	
//	myclass ob1(10, 2), ob2(13, 3); 
//	if (isfactor(ob1)) cout << "2 is a factor of 10\n"; 
//	else cout << "2 is not a factor of 10\n"; 
//	if (isfactor(ob2)) cout << "3 is a factor of 13\n";
//	else cout << "3 is not a factor of 13\n"; 
//	if (ob2.isfactor()) cout << "3 is a factor of 13\n";
//	else cout << "3 is not a factor of 13\n";


//samp ob[80]; //array of 4 objects 
//int i; 
//for (i=0; i<80; i++) 
//ob[i].set_a(i); 
//for (i=0; i<80; i++) 
//cout << ob[i].get_a( ) << " "; 
//cout << "\n"; 
//return 0; 

	return 0;
	
}
