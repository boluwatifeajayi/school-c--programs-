#include<iostream>;

using namespace std;

int main(){
	srand(time(NULL));
	Worrior thor("Thor", 100, 30, 15);
	Worrior hulk("Hulk", 135, 25, 10);
	
	Battle::StartFight(thor, hulk);
	
	return 0;
}

