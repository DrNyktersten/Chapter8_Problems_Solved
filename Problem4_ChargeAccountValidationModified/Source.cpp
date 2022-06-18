//This program demonstrates is created to check 
//whether the number exists in the array using 
//linear search algorithm 
#include<iostream> 
using namespace std;
const int SIZE = 18;

void selectionSort(int[], int); 
void swap(int&, int&); 
int checkAccountValidation(const int[], int, int);

int main()
{
	int accNum,			//To hold user input of account charge
		position;		//To hold the position of the account charge
	int array[SIZE] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
						8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
						1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

	//Sort the array
	selectionSort(array, SIZE); 

	//Display the sorted array 
	cout << "The sorted values:" << endl;
	for (auto element : array)
		cout << element << " ";
	cout << endl << endl;

	//User input  
	cout << "Enter a number to check if the number is in array ";
	cin >> accNum;

	//Check whether the number exists in the array
	position = checkAccountValidation(array, SIZE, accNum);
	
	//Display the result 
	if (position == -1)
		cout << "The number is invalid!" << endl;
	else
	{
		cout << "The number is valid " << endl;
		cout << "and it is in the position " << position + 1 << endl;
	}
	
	return 0;
}

//The selection function sorts an int array in ascending order. 
void selectionSort(int array[], int size)
{
	int minIndex,
		minValue; 

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start; 
		minValue = array[start]; 
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index]; 
				minIndex = index; 
			}
		}
		swap(array[minIndex], array[start]);
	}
}

//The swap function swaps a and b in memory. 
void swap(int& a, int& b)
{
	int temp = a; 
	a = b; 
	b = temp; 
}

int checkAccountValidation(const int array[], int size, int userInput)
{
	int first = 0,			//First element of the array
		last = size - 1,	//Last element of the array 
		middle,				//Midpoint of the array 
		position = -1;      //To hold the search value result
	bool found = false; 

	while (!found && first <= last)
	{
		middle = (first + last) / 2; //middle of the array

		if (array[middle] == userInput)
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > userInput) //If the value is in lower half 
			last = middle - 1;
		else
			first = middle + 1; 
	}


	return position;				   //Return the result of the search
}