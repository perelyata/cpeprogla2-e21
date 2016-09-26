// FLORES, PERLYN JOY M.  		201511778
// CPEPROG2LA E21

#include<iostream>
#include<cstring>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
//VARIABLES DECLARATION
int result;
char str1[100];
char str2[100];
int x, i, flag = 0;
char simstr [100];
string strng,strsp,val;

const char* customstringcpy ( char* str1,  char* str2) { // const char* - blue print of returning a string value 
	strcpy (str1, str2);
	return str1;
	}
	
const char* yo(char* str1){
 
 	return str1;
}

// DECLARATION OF FUNCTIONS
//programCases
void pcaseA();
void pcaseB();
void pcaseC();
void pcaseD();
void pcaseE();
void pcaseF();

// MAIN FUNCTION
int main() {
	char ans;
	char choices;
	
	do{
	
	system ("cls");
	
	cout << "[A] String Compare \n";
	cout << "[B] String Copy\n";
	cout << "[C] String Concatenation\n";
	cout << "[D] Palindrome\n";
	cout << "[E] Capitalization\n";
	cout << "[F] Reverse Vertical Order" << endl<< endl;
	cout<<"Enter you choice: ";
	cin>>choices;
	
	switch(choices) {
		case 'A':
		case 'a':
			pcaseA();
			break;
			
		case 'B':
		case 'b':
			pcaseB();
			break;
			
		case 'C':
		case 'c':
			pcaseC();
			break;
			
		case 'D':
		case 'd':
			pcaseD();
			break;
			
		case 'E':
		case 'e':
			pcaseE();
			break;
			
		case 'F':
		case 'f':
			pcaseF();
			break;	
			
		default:
			cout << "--- INVALID KEYWORD ---" << endl;
			
}

	cout << "\n \nWould you like to try again? [y/n] ";
  	cin >> ans;		
	} while (ans =='Y' || ans == 'y');
	
}

// FUNCTION DEFINITIONS
void pcaseA(){
	 cout << " ===========================" << endl;
  cout << "\t STRING COMPARE " << endl;
  cout << " ---------------------------" << endl; 
  
  cout << " Enter First word: " ; 
  cin >> strcpy(str1," ");
  cout << " Enter Second word: " ; 
  cin >> strcpy(str2, " ");
  
  /*
  //compare two strings
  result = strcmp(str1,str2);
  
  // using if else
  if (result == -1){
  	cout << "\n \t -- Negative --" << endl;
  }
  
  else if (result == 1){
  	cout <<"\n \t -- Positive --" << endl;
  }
  
  else if (result ==0 ){
  	cout << "\n \t --Equal --" << endl;
  } */
  
  
  
  // using switch case
  switch (strcmp(str1,str2))
  {
  	case -1:
  		cout << "\n \t -- Negative --" << endl;
  		break;
  	case 1:
  		cout <<"\n \t -- Positive --" << endl;
  		break;
  	case 0: 
  		cout << "\n \t --Equal --" << endl;
  		break;
  	default:
  		cout << "\n \t -- INVALID --" << endl;
  } 	
}


void pcaseB(){
	
	 cout << " ===========================" << endl;
     cout << "\t STRING COPY " << endl;
  	 cout << " ---------------------------" << endl;   	

	cin.ignore();
  	cout << "Enter the first word: ";
	gets(str1);
	cout << "Enter the second word: ";
	gets(str2);
	strcpy(str1,str2);
  	cout << "\nNew string value for Str1: " << str1 << endl<<endl;
}


void pcaseC(){
	
	 cout << " ===========================" << endl;
  	 cout << "     STRING CONCATENATION " << endl;
     cout << " ---------------------------" << endl; 
	
	cin.ignore();
	cout << "Enter the first word: ";
	gets(str1);
	cout << "Enter the second word: ";
	gets(str2);
	strcat(str1,str2);
	cout << "New string value for first string: " << str1 << endl << endl;	
}

void pcaseD(){
	
	 cout << " ===========================" << endl;
  	 cout << "\t PALINDROME " << endl;
     cout << " ---------------------------" << endl; 
  	
  	cout << "Enter a word: ";
	cin >> simstr;
	strlwr(simstr);
	x = strlen(simstr);
	for (int i = 0; i < x; i++)
	{
		if (simstr[i]!= simstr[x-i-1])
		{
			flag =1;
			break;
		}
	}
	
	if (flag)
		cout << "The word " << simstr << " is not a palindrome.";
	
	else
		cout << "The word " << simstr << " is a palindrome.";
	
}

void pcaseE(){
	
	 cout << " ===========================" << endl;
  	 cout << " capitalize each word from the \n \tstring input " << endl;
     cout << " ---------------------------" << endl; 
	
	cin.ignore();
  	cout<<"Enter string: ";
 	gets(str1);
 	strlwr(str1);
 	
	 str1[0]-=32;
 		for(i=1;i<strlen(str1);i++){
 			if(str1[i]==' ')
 			str1[i+1]-=32;
	 	}
 	puts(str1);
	
}

void pcaseF(){
	 cout << " ==============================================" << endl;
  	 cout << "  split the string in to word and display in \n \treverse vertical order " << endl;
     cout << " ----------------------------------------------" << endl; 

	int var(0), length;
	cin.ignore();
	cout<<"Enter the string: ";
	gets(str1);
	
	length=strlen(str1);
	for(i=length;i>=0;i--){
	if(str1[i]==32){
		var=i+1;
		while(str1[var]!=32&&var<length){
			cout<<str1[var];
			var++;
			}
		cout<<endl;
		}
	}
	var=0;
	while(str1[var]!=32){
		cout<<str1[var];
		var++;
	}


}



