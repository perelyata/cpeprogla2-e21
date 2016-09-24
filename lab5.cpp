#include<iostream>
#include<cstring>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int flag=0, n=0, x=0, choices;
char str1[75], str2[75], str[75], *pstr1, *pstr2, ans;

// DECLARATION OF FUNCTIONS
void pcase1();
void pcase2();
void pcase3();



// MAIN FUNCTION
int main() {
	char ans;
	int choices;
	
	do{
	
	system ("cls");
	cout << "Choose a problem number to solve [1-3]: " << endl<< endl;
	cout<<"Enter you choice: ";
	cin>>choices;
	
	switch(choices) {
		case 1:
			pcase1();
			break;
			
		case 2:
			cout <<"wow";
			/*pcase2();
			break;
			
		case 3:
			pcase3();
			break;*/
			
		default:
			cout << "--- INVALID KEYWORD ---" << endl;
			
}

	cout << "\n \nWould you like to try again? [y/n] ";
  	cin >> ans;		
	} while (ans =='Y' || ans == 'y');
}

//FUNCTION DEFINITIONS


//FUNCTION FOR PROBLEM 1
void pcase1(){

//structure declaration	
struct studname{
       char fullName[100];
};

struct record{
       int id;
       studname name;
       double quiz[3]; 
       double sum;
	   double average;      
};

void newLine();

// Input data
    record rec;
    cout << "Enter Student record: \n";
    cout << "ID: ";
    cin >> rec.id;
    newLine();
    cout << "Name: ";
    cin.getline(rec.name.fullName, 99);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> rec.quiz[i];        
    }
    
    
//output data   
    cout << "\n\n";
    cout << "Student recordordord\n";
    cout << "ID: " << rec.id << endl;
    cout << "Name: " << rec.name.fullName << endl;
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": " << rec.quiz[i] << endl;       
            rec.sum+=rec.quiz[i];
            rec.average=rec.sum/3;
    }
    cout<< "Grades: " << rec.average;
    
    if (rec.average>=75)
    {
    	cout << " \nRemarks: Passed";
	}
	else
	{
		cout << " \nRemarks: Failed";
	}

}




//FUNCTION FOR NEWLINE
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
