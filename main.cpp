#include <iostream>
using namespace std;

//0. Read array
void readArray(int array[], int size);
//1. decision maker
bool decisionMaker(int array[], int size);
//2. sum and average calculation
int sumOfElements(int array[], int size);
//3. counting 
int countingElements(int array[], int size, int numberToCount);
//4. linear search
bool P(int x);
void linearSearch(int array[], int size);
//5. select max element
int selectMax(int array[], int size);
//6. select index of max element
int selectMaxIndex(int array[], int size);
//7. swap sorting in ascending order
void simpleSwapSort(int array[], int size);
//8. bubble sorting in ascending order
void bubbleSort(int array[], int size);
//9. max select sorting in ascending order
void maxSelectSort(int array[], int size);
//10.logarithmic search

//11. Kiválagoatás tétele

//12. metszet képzés

//13. unió képzés



int main()
{
	const int size = 5;
	int array[size] = { 1,-2,7,4,4 };
	readArray(array, size);
	cout << "--" << endl;
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
	cout << "Index of max element: " << selectMaxIndex(array, size)+1<<". " << endl;
	cout << "--" << endl;
	readArray(array, size);
	//simpleSwapSort(array, size);
	cout << "--" << endl;
	//readArray(array, size);
	cout << "--" << endl;
	//bubbleSort(array, size);
	//readArray(array, size);
	cout << "--" << endl;
	maxSelectSort(array, size);
	readArray(array, size);
}
void readArray(int array[], int size)
{
	int i = 0;
	while (i < size)
	{
		cout << array[i] << endl;
		i++;
	}
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
	//if not then rewrite max variable
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
int selectMaxIndex(int array[], int size)
{
	//get index of max element in array
	//we assume that the largest element is the zeroth
	//if not then rewrite max variable
	int maxIndex = 0;
	int i = 0;
	while (i < size)
	{
		if (array[i] > array[maxIndex])
		{
			maxIndex = i;
		}
		i++;
	}
	return maxIndex;
}
void simpleSwapSort(int array[], int size) 
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
void bubbleSort(int array[], int size)
{
	int i = size - 1;
	int j = 0;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (array[j] > array[j + 1])
			{
				int seged = array[j];
				array[j] = array[j + 1];
				array[j + 1] = seged;
			}
			j++;
		}
		i--;
	}
}
void maxSelectSort(int array[], int size)
{
	int max_index = 0;
	int i = size - 1;
	int j = 0;
	int seged = 0;
	while (i >= 0)
	{
		while (j <= i)
		{
			if (array[j] > array[max_index])
			{
				max_index = j;
			}
			j++;
		}
		seged = array[i];
		array[i] = array[max_index];
		array[max_index] = seged;
		i--;
		max_index = 0;
		j = 0;
	}
}

