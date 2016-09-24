#include<iostream>
using namespace std;
main()
{
	int i;
		cout << "---------------"<<endl;
		cout << "    FIZZBUZZ"<<endl;
		cout << "---------------";
	for (i=1; i<=100; i++)
		{
		
		
		if (i%3==0 && i%5==0)
		cout << " \nFizzBuzz ";
		
		
		else if (i%3==0 && i%5 != 0)
		cout << " \nFizz ";
		
		else if (i%3 !=0 && i%5 == 0)
		cout << " \nBuzz ";
	
		else 
			cout << "\n" << i;
		
	}
	
	return 0;
	
}




