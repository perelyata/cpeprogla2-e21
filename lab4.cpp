#include<iostream>
#include<cstring>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int flag=0, n=0, x=0, choices;
char str1[75], str2[75], str[75], *pstr1, *pstr2, ans;

// DECLARATION OF FUNCTIONS
void mStrcpy();
void mStrcmp();
void mStrcat();
int mStrlen(char*);
char mRvrs(char*str);


// MAIN FUNCTION
int main() {
	char ans;
	char choices;
	
	do{
	
	system ("cls");
	
	cout << "[A] String Copy \n";
	cout << "[B] String Compare\n";
	cout << "[C] String Concatenation\n";
	cout << "[D] String Length\n";
	cout << "[E] String Reverse" << endl<< endl;
	cout<<"Enter you choice: ";
	cin>>choices;
	
	switch(choices) {
		case 'A':
		case 'a':
			mStrcpy();
			break;
			
		case 'B':
		case 'b':
			mStrcmp();
			break;
			
		case 'C':
		case 'c':
			mStrcat();
			break;
			
		case 'D':
		case 'd':
			mStrlen(str1);
			break;
			
		case 'E':
		case 'e':
			mRvrs(str1);
			break;
			
		default:
			cout << "--- INVALID KEYWORD ---" << endl;
			
}

	cout << "\n \nWould you like to try again? [y/n] ";
  	cin >> ans;		
	} while (ans =='Y' || ans == 'y');
}



// FUNCTION DEFINITIONS
void mStrcpy() {
	
	cout << " ===========================" << endl;
    cout << "\t STRING COPY " << endl;
    cout << " ---------------------------" << endl; 
    
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	pstr1=&str1[i];
    	pstr2=&str2[i];
    	*pstr1=*pstr2;
	
    cout<< str1[i];
}  
}


void mStrcmp() {
	
	cout << " ===========================" << endl;
  cout << "\t STRING COMPARE " << endl;
  cout << " ---------------------------" << endl; 
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<75;i++){
    	pstr1=&str1[i];
    	pstr2=&str2[i];
    	(int) str1[i];
    	(int) str2[i];
    if (*pstr1==*pstr2) flag+=0;
	else if (*pstr2<*pstr1) flag+=1;
	else if (*pstr2>*pstr1) flag-=1;
}
	if (flag==0) cout<<"Equal";
	else if (flag>0) cout<<"Positive";
	else if (flag<0) cout<<"Negative";
}


void mStrcat() {
	
	cout << " ===========================" << endl;
  cout << "\t STRING CONCATENATE " << endl;
  cout << " ---------------------------" << endl; 
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    pstr1=&str1[i];
    cout<<*pstr1;
}
for(int i=0;i<strlen(str2);i++){
    pstr2=&str2[i];
    cout<<*pstr2;
}
}


int mStrlen(char*pstr1){
	
	cout << " ===========================" << endl;
 	cout << "\t STRING LENGHT " << endl;
    cout << " ---------------------------" << endl; 

	cout<<"\nEnter a string:  ";
	cin.ignore();
    gets(str1);
		while(*pstr1!='\0') {
			x++;
			pstr1++;
		}
		cout<<"The length of the string is: "<<x;
		return x;
		
}


char mRvrs(char*str) {
cout<<"\nEnter a string: ";
cin.ignore();
    gets(str);
    cout<<"The reverse is: ";
	n=strlen(str);
	for(int i=n-1;i>=0;i--) {
	cout<<str[i];
	}
}
