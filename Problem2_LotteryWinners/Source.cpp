//This program designed to determine whether 
//person have won the lottery or not 
#include <iostream>
using namespace std; 
const int SIZE = 10; 
int checkTicketNumber(const int[], int, int); 

int main()
{
	int num,			//To hold the ticket number of the user
		result;			//To hold the result of the lottery 

	//Winning ticket numbers
	int array[SIZE] = { 13579, 26791, 26792, 33445, 55555,
					    62483, 77777, 79422, 85647, 93121 };
	
	cout << "Enter your winning ticket number: "; 
	cin >> num; 

	result = checkTicketNumber(array, SIZE, num); 

	if (result == -1)
		cout << "Sorry. You did not win the lottery!"; 
	else
	{
		cout << "Congratulations you have won the lottery!" << endl; 
		cout << "Your lucky number is " << result << endl; 
	}

	return 0; 
}
 
int checkTicketNumber(const int array[], int size, int userInput)
{
	int index = 0,
		result = -1; 
	bool found = false; 
	
	while (!found && index < size)
	{
		if (array[index] == userInput)
		{
			found = true; 
			result = array[index]; 
		}
		index++;
	}
	return result; 
}