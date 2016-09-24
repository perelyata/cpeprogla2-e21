#include<iostream>
#include<cstring>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

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
			pcase2();
			break;
			
		case 3:
			pcase3();
			break;
			
		default:
			cout << "--- INVALID KEYWORD ---" << endl;
			
}

	cout << "\n \nWould you like to try again? [y/n] ";
  	cin >> ans;		
	} while (ans =='Y' || ans == 'y');
}


//FUNCTION FOR PROBLEM 1
void pcase1(){

//structure declaration	for problem 1
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
    cout << "Student record\n";
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



void pcase2(){
	
	int x, i, j	;
	float fgrade;
		
//structure declaration	for problem 2	
	struct record{
		int id;
		char name[30];
		struct studQuizzes {
		float quiz;
		};
 	studQuizzes quizzes[3];
	};

	void newLine();

	record rec[5];
	
//input data
	cout <<"--------------------------" << endl;	
	cout<<"Enter 5 Student/s Record: " << endl;
	cout <<"--------------------------" << endl;
	
	for (i=0; i<5; i++){
		cout<<"\nStudent "<<(i+1)<< endl;
		cout<<"ID: ";
		cin>>rec[i].id;
		newLine();
		
		cout<<"Name: ";
		cin.getline(rec[i].name, 49);
		
		cout<<"Enter 3 quizze(s): ";
		for(j=0;j<3;j++){	
			cin>>rec[i].quizzes[j].quiz;	
		}
	}
	
//output data
	cout << endl;
	cout << setw(5) << "  ID No." << setw(15)<<"Student No" << setw(15)<<"Name" << setw(15)<<"Grade" << setw(13)<<"Remark";
	
	for(int i=0; i<5; i++){
		fgrade=0;
		
		for(j=0;j<3;j++){
			fgrade+=rec[i].quizzes[j].quiz;
		}
		cout<<endl;
		
		cout<<setw(5)<< i+1 <<setw(15)<<rec[i].id <<setw(20)<<rec[i].name;
		cout<<setw(10)<<setprecision(4)<<fgrade/3<<setw(15);
		
		if( fgrade/3>=75 ){
			cout<<"Passed";
			}
			else{
			cout<<"Failed";
			}
		}
		cout<<endl;
}


void pcase3(){
	
	int i, j, totalPrice;

//structure declaration	for problem 3	
	struct customer{
		struct Name{
		char givenName[20];
		char lastName[20];
		}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quantity;
		
		    struct Item{
				int id;
				char itemName[20];
				int price;
		};
		
	Item item[3];
	}order;
	
	};

	void newLine();

	customer cons[3];
	
//input data
	for (i=0;i<3;i++){
		
		cout << "\n \nCUSTOMER INFORMATION "<< i+1 <<endl;
		cin.ignore();
		cout << "First Name: ";
		cin.getline(cons[i].name.givenName,25);
		cout << "Last Name: ";
		cin.getline(cons[i].name.lastName,25);
		
		
		cout << "ORDER DATE: " << endl;
		cout << "Day: ";
		cin >> cons[i].order.day;
		cout << "Month: ";
		cin >> cons[i].order.month;
		cout << "Year: ";
		cin >> cons[i].order.year;
		cout << "\nENTER 3 ITEMS: "<<endl;
		
		
		for (j=0;j<3;j++){
		    cout << "ID: ";
		    cin >> cons[i].order.item[j].id;
		    newLine();
    	    cout<<"Name: ";
    		cin.getline(cons[i].order.item[j].itemName,24);
    		cout << "Price: ";
    		cin >>cons[i].order.item[j].price;
    		cout <<"Quantity: ";
    		cin >>cons[i].order.quantity;
    		cout <<endl;
		}
		newLine();
}
	j=0;
	
	
//output data
	cout << " -----------------"<< endl;
	cout << "\tSUMMARY REPORT"<<endl;
	cout << " -----------------"<< endl;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout <<" #"<<setw(10)<<"Customer Name"
		<<setw(10)<<"Order Date"
		<<setw(10)<<"Items"
		<<setw(10)<<"Price"
		<<setw(10)<<"Quantity"<<endl;
	
	for (i=0;i<3;i++){
	
		totalPrice=0;
		
		cout <<" "<< i+1
			<< setw(10)<<cons[i].name.lastName<<","
			<< setw(2)<<cons[i].name.givenName
			<< setw(10) <<cons[i].order.day 
						<<"/"<<cons[i].order.month
						<<"/"<<cons[i].order.year << endl;
		
    	for (j=0;j<3;j++){
    		
    		cout<<setw(40)<<cons[i].order.item[j].itemName	
				<<setw(2)<<cons[i].order.item[j].price
				<<setw(5)<<cons[i].order.quantity<<endl;
			
    		totalPrice += cons[i].order.item[j].price;
		}
		totalPrice = totalPrice * cons[i].order.quantity;
		cout << setw(40) << "TOTAL PRICE: "<< totalPrice << endl;
	}
}

	
//FUNCTION FOR NEWLINE
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
