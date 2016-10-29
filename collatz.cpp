#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main ()
{
	int collatz,input1,input2, cycleLength, maxcycleLength;	
	int manip_input1, manip_input2;
	ifstream f("input.txt");
	while(f >> input1 >> input2){
	
		manip_input1 = input1<=input2 ? input1:input2;
		manip_input2 = input1<=input2 ? input2:input1; 
		
		cycleLength=0;
		maxcycleLength=0;		
		
		for(int value=manip_input1; value<=manip_input2; value++){
			cycleLength=0;
			int value2=value;			
			
			while(value2 !=1 ){
				if(value2%2 ==1) { value2 = value2*3 +1; cycleLength++;	}
				else { value2 /= 2;	cycleLength++;	}
			}
			
			cycleLength++;
			if(cycleLength>maxcycleLength) maxcycleLength = maxcycleLength=cycleLength;
		}		
		
		cout << input1 << " " << input2	<< " " << maxcycleLength << "\n";
	}
	}
	
