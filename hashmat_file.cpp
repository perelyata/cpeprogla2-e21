#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	
	int hashmatArmies, opponentArmies;
	FILE *fp;
	fp = fopen ("input.txt", "r");
	
	if(!fp){
		cout <<"CANNOT OPEN FILE" << endl <<endl;
		system("pause");
		exit(1);
	}
	
	cout << "[Hashmat's Armies vs Opponent's Armies] \n \t    Differences:" << endl;
	while (f>>hashmatArmies>>opponentArmies){
	cout << abs(hashmatArmies-opponentArmies) << endl;
	}
	system ("pause > 0");
	return 0;
}
