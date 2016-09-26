// FLORES, PERLYN JOY M.  		201511778
// CPEPROG2LA E21
#include <iostream>
#include <math.h>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


// Function for Problem 1
double problem1 (double num) {
	return round(num);	
}

// Function for Problem 2
void problem2(){
	int uniquenums [10];
	int maxi(20);
	int mini(1);
	int nmbr; 
	bool checker=true; 
	
	srand(time(NULL)); 
	cout << "10 unique numbers : ";	
	
	for (int i=0;i<10;i++){
    	
	do{
    	nmbr=rand()%maxi+mini;
    	checker = true;
   		 for (int j=0;j<i;j++)
   		     if (nmbr == uniquenums[j]) {
           	 checker = false; 
             break; 
        }
    } while (!checker); 
	uniquenums[i]=nmbr;
	cout << nmbr << " ";
	}
	
	cout << endl << endl;
	
}

// Function for Call by Value [B]
int factorial(int n){
	
	if(n!=1)
     return n*factorial(n-1);
}

// Function for function max [C]
float max(float num1, float num2){
	int greatest;
	
	if (num1 < num2)
		 greatest= num2	;
	
	
	else 
		greatest= num1;	
	
	return greatest;
}


main () {
	
	char ans;
	
	do{
		system ("cls");
	// a program that will round off a given number.
	
	double num;
	cout << " ====================================" << endl;
	cout << " \t ROUND OFF A NUMBER " << endl;
	cout << " ====================================" << endl;
	cout << "  Enter a number to be round off:  ";
	if (cin >> num){
		cout << "\n    Round of value: " << problem1(num); //The value of num was returned from the function
	}
	else {
		cout << " \t Invalid." << endl;
		return 0;
	}
		
	cout << endl << endl;
	
	cout << " ====================================" << endl;
	cout << " \t UNIQUE RANDOM NUMBERS " << endl;
	cout << " ====================================" << endl;
	problem2();
	
	int n;
	cout << " ====================================" << endl;
	cout << " \t FACTORIAL OF A NUMBER " << endl;
	cout << " ====================================" << endl;
    cout << "   Enter a positive integer: ";
    if (cin >> n){
    	cout << "\n    Factorial of " << n << " is " << factorial(n);	
    }
   	else {
		cout << " \tInvalid." << endl;
		return 0;
	}
	
    
	cout << endl << endl;
	
	
	
	float fnum, snum;
	
	cout << " ====================================" << endl;
	cout << " \t GREATER VALUE " << endl;
	cout << " ====================================" << endl;
	cout <<"  Enter the first number: ";
	if (cin >> fnum){
		cout <<"  Enter the second number: ";
		if (cin >> snum) {
			cout << "\n   The greater number is "<< max (fnum,snum);	
		}
		else {
		cout << " \tInvalid." << endl;
		return 0;
		}
	}
	else {
		cout << " \tInvalid." << endl;
		return 0;
	}
		
	cout << endl << endl;

	cout<< " Would you like to continue? [Y/N] ";
	cin >> ans;
}while (ans=='Y' || ans== 'y');

	system ("pause");
	return 0;
	
} 

