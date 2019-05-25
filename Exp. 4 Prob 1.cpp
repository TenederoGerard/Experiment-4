//This program is a simple calculator to compute basic addition, subraction, multiplication, division, or the modulus.
#include <iostream>

using namespace std;
int main ()
{
	int   function, x, y;
	double  answer;
	char yn;
	cout <<"Choose from the following Operations \n\n"; 
	cout <<"MENU:\n1.Add \n2.Subtract \n3.Multiply \n4.Divide\n5.Modulus";

	//Using do-while so that it will ask the user to repeat the program or not.
	do {
	
	cout << "\n\nSelect from 1-5: ";
	cin >> function;
	cout << "Input two integer values: \n"; 
	cin >> x >> y;
	
	//if statements what will the user will choose among the operations.
	if  (function == 1) 
 	answer = x + y;
	if  (function == 2) 
 	answer = x - y;
	if  (function == 3) 
	answer = x * y;
	if  (function == 4) 
	answer = x / y; 
	if  (function == 5) 
	answer = x % y; 
	
	//Output
	cout << "The answer is: " << answer << endl;
	cout << "CONTINUE? (y or n)" << endl;
	cin >> yn;
	
		} while (yn == 'y');	
			
}



