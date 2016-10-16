#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	
	int i;
	FILE *fp;
	fp = fopen ("input.txt", "r");
		
	if(!fp){
		cout <<"CANNOT OPEN FILE" << endl <<endl;
		system("pause");
		exit(1);
	}
	

	while (f>>i){
		if (i%3==0 && i%5==0)
		cout << " \nFizzBuzz ";
		
		
		else if (i%3==0 && i%5 != 0)
		cout << " \nFizz ";
		
		else if (i%3 !=0 && i%5 == 0)
		cout << " \nBuzz ";
	
		else 
			cout << "\n" << i;
	}
	system ("pause > 0");
	return 0;
}
