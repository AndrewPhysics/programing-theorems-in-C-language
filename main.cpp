#include <iostream>
using namespace std;
//1. decision maker
bool decisionMaker(int array[], int size);
//2. sum and average calculation
int sumOfElements(int array[], int size);
//3. counting 
int countingElements(int array[], int size, int numberToCount);
//4. linear search
bool P(int x);
void linearSearch(int array[], int size);
//select max element
int selectMax(int array[], int size);
int main()
{
	const int size = 5;
	int array[size] = { 1,-2,3,4,4 };
	if (decisionMaker(array, size)) 
	{
		cout << "There is an element 5 in array!" << endl;
	}
	else
	{
		cout << "There is no element 5 in array!" << endl;
	}
	cout << "Sum of elements: " << sumOfElements(array, size) << endl;
	cout << "Average of elements: " << (float)sumOfElements(array, size) / (float)size << endl; 
	cout << "Number of "<< 4 <<" elements in array: " << countingElements(array, size, 4) << endl;
	linearSearch(array, size);
	cout << "Max element: " <<selectMax(array, size)<< endl;
}
bool decisionMaker(int array[], int size)
{
	int i = 0;
	while (i<size && array[i]!=5)
	{
		i++;
	}
	return i < size;
}
int sumOfElements(int array[], int size) 
{
	int sum = 0;
	int i = 0;
	while (i<size)
	{
		sum = sum + array[i];
		i++;
	}
	return sum;
}
int countingElements(int array[], int size, int numberToCount) 
{
	int i = 0;
	int count = 0;
	while (i<size)
	{
		if (array[i]==numberToCount)
		{
			count++;
		}
		i++;
	}
	return count;
}
bool P(int x)
{
	return x > 0;
}
void linearSearch(int array[], int size)
{
	//Find index of first negativ value.
	int i = 0;
	while (i<size && P(array[i]))
	{
		i++;
	}
	if (i < size) 
	{
		cout << "Negativ value found at index: " << i + 1 <<"." << endl;
	}
	else
	{
		cout << "There is no negativ element found!" << endl;
	}
}
int selectMax(int array[], int size)
{
	//get index of max element in array
	//we assume that the largest element is the zeroth
	int max = array[0];
	int i = 0;
	while (i<size)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
		i++;
	}
	return max;
}


