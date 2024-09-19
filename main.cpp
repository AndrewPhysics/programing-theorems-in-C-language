#include <iostream>
#include <vector>
using namespace std;


//auxiliary functions
void writeArray(int a[], int size)
{
	int i = 0;
	while (i < size)
	{
		a[i] = 1 + rand() % 10;
		i++;
	}
}
void readArray(int a[], int size)
{
	int i = 0;
	while (i < size)
	{
		cout <<i+1<<". " << a[i] << endl;
		i++;
	}
}
bool P_property(int x)
{
	//if (x%3==0)
	//{
	// return true;
	//}
	//else
	//{
	// return false;
	//}
	return x % 3 == 0;
}

//programming theorems
void variableReplecement(int& a, int& b) 
{
	int temp = a;
	a = b;
	b = temp;
}
int summationOfOneDimArrayElements(int a[], int size)
{
	int i = 0;
	int sum = 0;
	while (i < size)
	{
		sum += a[i];
		i++;
	}
	return sum;
}
void decisionMaking(int a[], int size)
{
	int i = 0;
	while (i < size && !P_property(a[i]))
	{
		i++;
	}
	if (i < size)
	{
		cout << "There is an element with P property!" << endl;
	}
	else
	{
		cout << "There is NO element with P property!" << endl;
	}
}
int conditionalSum(int a[], int size)
{
	int sum = 0;
	int i = 0;
	while (i < size)
	{
		if (P_property(a[i]))
		{
			sum += a[i];
		}
		i++;
	}
	return sum;
}
int conditionalCount(int a[], int size)
{
	int count = 0;
	int i = 0;
	while (i < size)
	{
		if (P_property(a[i]))
		{
			count++;
		}
		i++;
	}
	return count;
}
int conditionalSelect(int a[], int size)
{
	int index = -1;
	//return -1 if P property element not found in array
	int i = 0;
	while (i < size)
	{
		if (P_property(a[i]))
		{
			index = i;
			return index;
		}
		i++;
	}
	return -1;
}
int selectMax(int aa[], int size)
{
	int max_i = 0;
	int i = 0;
	while (i < size)
	{
		if (aa[max_i] < aa[i])
		{
			max_i = i;
		}
		i++;
	}
	return max_i;
}
void swapSort(int a[], int size)
{
	int i = 0;
	int j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
void maxSelectSort(int a[], int size)
{
	int tmp;
	int min;
	for (int i = 0; i < size - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
		}
	}
}

void selectionOfElements(int aa[], int size)//ez jó
{
	cout << "assortment: " << endl;
	int* p = new int[size];
	int numberOfAssortedElements = 0;
	int j = 0;
	int i = 0;
	while (i < size)
	{
		if (P_property(aa[i]))
		{
			p[j] = aa[i];
			j++;
		}
		else
		{
			p[j] = 0;
		}
		i++;
	}
	if (j == 0)
	{
		cout << "There is no element with P_property! " << endl;
	}
	numberOfAssortedElements = j;
	i = 0;
	while (i < numberOfAssortedElements)
	{
		cout << "The selected elements are: " << p[i] << endl;
		i++;
	}
	delete[] p;
}
void sectionOfElements()
{
	vector<int> a, b, c;
	int number;
	

}





int main() 
{
	//1. variable replecement theorem
	int a = 10;
	int b = 20;
	cout << "a: " << a << ", b: " << b << endl;
	variableReplecement(a, b);
	cout << "a: " << a << ", b: " << b << endl;
	cout << "---" << endl;
	//---
	//2. summation theorem, summations of elements in one dimensional array
	int size = 8;
	int array[8];
	writeArray(array, size);
	readArray(array, size);
	cout << "---" << endl;
	int sum=summationOfOneDimArrayElements(array, size);
	cout << "Sum of elements: " << sum << endl;
	cout << "---" << endl;
	//3. decision theorem
	cout << "P property means that there is an element which is percfecly devisible by 3!" << endl;
	decisionMaking(array, size);
	cout << "---" << endl;
	//4. conditional sum
	cout << "I summarize only those elements that satisfy property P!" << endl;
	int P_sum=conditionalSum(array, size);
	cout << "Sum of elements with P property: " << P_sum << endl;
	cout << "---" << endl;
	//5. conditional count
	int C_sum=conditionalCount(array, size);
	cout << "Element counting with P property: " << C_sum << endl;
	cout << "---" << endl;
	//6. Conditional select
	int P_index = conditionalSelect(array, size);
	cout << "Index of first element with P property: " << P_index+1 << endl;
	cout << "---" << endl;
	//7. Select max element
	int M_index = selectMax(array, size);
	cout << "Index of maximum value element: " << M_index + 1 << endl;
	cout << "---" << endl;
	//8. Swap sort in ascending order.
	swapSort(array, size);
	readArray(array, size);
	cout << "---" << endl;
	writeArray(array, size);
	cout << "New random numbers!" << endl;
	readArray(array, size);
	cout << "---" << endl;
	//9. Element sorting by maximum select.
	maxSelectSort(array, size);
	readArray(array, size);
	cout << "---" << endl;
	//10. Selection of elements with P properties
	selectionOfElements(array, size);
	cout << "---" << endl;
	//11. Section of elements


}