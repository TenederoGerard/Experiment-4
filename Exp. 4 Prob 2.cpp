//This program is about choosing between Selection or Bubble Sorting

#include <iostream>

using namespace std;

int main ()
{
	
	int size, arr[30], i, j, temp;
	char ab;
	
	cout << "Choose what sorting you want:\n";
	cout << "A. Selection\n";
	cout << "B. Bubble \n";
	cin >> ab;
	
// Using if else statement to generate what will the user will choose.
//Selection Sorting 	
if (ab == 'a') 
	{
	
	cout << "Enter array size: ";
	cin >> size;
	cout <<"Enter array elements: \n";

	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
	}


	cout <<"Sorting array using selection sort...\n";

	for (i = 0; i < size; i++)
	{
		for (j= i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout <<" Now the array after sorting is: \n";
	for ( i=0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
}

//Bubble Sorting.
	
else if (ab == 'b') 
	cout << "Enter the no. of elements to be sorted: " << flush;
	cin >> size;

	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
		cout << arr[i] << ", ";

	}

	cout << endl << endl;

	for (i = 0; i < size; i++)
	{
		for (j= 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	cout <<" The array elements after sorting is: ";
	for ( i=0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}


	return 0;
}
