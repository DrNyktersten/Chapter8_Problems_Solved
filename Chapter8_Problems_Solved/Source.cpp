//This program demonstrates is created to check 
//whether the number exists in the array using 
//linear search algorithm 
#include<iostream> 
using namespace std;
const int SIZE = 18;
int checkAccountValidation(const int[], int, int);

int main()
{
	int accNum,			//To hold user input of account charge
		position;		//To hold the position of the account charge
	int array[SIZE] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
						8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
						1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

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

int checkAccountValidation(const int array[], int size, int userInput)
{
	int index = 0,		//Used as a subscript to search array 
		position = -1;  //To record the position of the search value 
	bool found = false; //Flag to indicate if the value was found 

	while (!false && index < size)
	{
		if (array[index] == userInput) //If the value was found in the array 
		{
			found = true;			   //Set the flag
			position = index;		   //Record the value's subscript 
		}
		index++;					   //Go to the next element
	}
	return position;				   //Return the result of the search
}