#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main(){
	
	int hashmatArmy;
	int opponentArmy;
	int difference[3],i;
	char cont;
	
	do{
		system ("cls");
		cout << "Enter Armies: [Hashmat's Armies vs Opponent's Armies]" << endl;
			for(i=0;i<3;i++)
	{
		
		cin>> hashmatArmy>> opponentArmy;
		
		if ( hashmatArmy <0 || opponentArmy<0){
			cout << "\n     Invalid Input. No negative input. \n";
			return 0;
		}
		
		else if (hashmatArmy > opponentArmy){
			cout << "\n     Invalid Input. Hashmat Army will never be greater than the Opponent's Army\n";
			return 0;
		}
		
		else {
					difference[i]=(opponentArmy-hashmatArmy);
		}		
}
				cout<<endl<<difference[0]<<endl<<difference[1]<<endl<<difference[2]<<endl;
				
		
			
		cout << "\n\nDo you want to try again? (y/n): ";
		cin >> cont;	
	}while(cont == 'y' || cont == 'Y');
	
	
	system ("pause");
}


