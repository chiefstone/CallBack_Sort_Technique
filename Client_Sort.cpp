//#include "stdafx.h"
#include <cstring>
#include <iostream>
#include "SortDll.h"

using std::cout;

//Implementation to compare integers----------------------------------
int __stdcall Compare_Integers(const byte* velem1, const byte* velem2)
{
	//Pull data from the memory locations------------------------
	int elem1 = *(int*)velem1;
	int elem2 = *(int*)velem2;

	//Convention for Swap----------------------------------------
	if(elem1 < elem2) //No swap needed
		return -1;
	if(elem1 > elem2) //Swap needed
		return 1;

	return 0; //if same... then, no swap
}

//Implementation to compare strings----------------------------------
int __stdcall Compare_Strings(const byte* velem1, const byte* velem2)
{
	const char* elem1 = (char*)velem1;
	const char* elem2 = (char*)velem2;

	return strcmp(elem1, elem2);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	int ARRAY_DATA[] = {1985, 1589, 3256, 8989, 7899};
	const char ARRAY_DATA_STR[5][10] = {"andres", "evelyn", "arturo", "steve", "gato"};
	
	//Sort Integers--------------------------------------------------------------------------------------
	cout << "Before sorting ints with Bubblesort\n";
	for(i=0; i<5; i++)
		cout << ARRAY_DATA[i] << '\n';
		
  	/* Code for Use of the CallBack Here ---------------------------------------------------------------*/
  	//Bubblesort_1(<memory locations>, <size of the array>, <size of the data type>, &Compare_Integers);
	//--------------------------------------------------------------------------------------------------
 	
	cout << "After the sorting\n";
	for(i=0; i<5; i++)
		cout << ARRAY_DATA[i] << '\n';
	
	
	
	
	//Sort Strings--------------------------------------------------------------------------------------
	cout << "Before sorting strings with BubbleSort\n";
	for(i=0; i<5; i++)
		cout << ARRAY_DATA_STR[i] << '\n';
		
	/* Code for Use of the CallBack Here ---------------------------------------------------------------*/
	//Bubblesort_1(<memory locations>, <size of the array>, <size of the data type>, &Compare_Strings);
	//--------------------------------------------------------------------------------------------------
	
  	cout << "After sorting strings with BubbleSort\n";
	for(i=0; i<5; i++)
		cout << ARRAY_DATA_STR[i] << '\n';
		
  	return 0;
}
