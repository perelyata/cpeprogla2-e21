#include<iostream>
#include<cmath>
using namespace std;

int main()

{
	int armyDifference[3],i,armyA,armyB;
	
	cout << "[Hashmat's Armies vs Opponent's Armies]" << endl;

	for(i=0;i<3;i++)
	{
		cin>>armyA>>armyB;
		armyDifference[i]=abs(armyA-armyB);
	}
	
	cout << endl << endl <<"Differences: ";
	cout << endl << armyDifference[0] << endl << armyDifference[1] << endl << armyDifference[2] <<endl;
	system ("pause > 0");
	return 0;
}
