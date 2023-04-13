#include <iostream>
using namespace std;

int arr[20];  //array to do search
int n;  //number of elements in the array
int i;    //index of array element 

void input()
{
	while (true)
	{
		cout << "enter the number element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\narray should have minimum 1 and maximus 20 element\n\n";
	}

	//accept array elements 
	cout << "\n================== \n";
	cout << "enter array elements \n";
	cout << "\n================== \n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void linearsearch()
{
	char ch;
	int comparison;    //number of comparison

	do     //langkah 3
	{
		//accept the number to be search 
		cout << "\n enter the element you want to search : ";   //langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)
		{                                                      //langkah 2 & 4
			comparison++; 
			if (arr[i] == item)                                // langkah 5 a found
			{
				cout << "\n" << item << " > found at position " << (i + 1) << endl;
				break;
			}
		}
		if (i == n)
		
			cout << "\n" << item << "not found in the array \n";
			cout << "\nNumber comparison :" << comparison << endl;

			cout << "\nContinue search (y/n) :";
			cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
	
}

int main()
{
	input();
	linearsearch();
}