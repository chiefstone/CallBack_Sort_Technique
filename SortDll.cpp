//#include "stdafx.h"
#include "SortDll.h"
#include <cstdio>

void SORTDLL_API __stdcall Bubblesort(byte* array, int size, int elem_size, CompareFunction cmpFunc)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(1 == (*cmpFunc)(array + j * elem_size , array+(j+1) * elem_size))
			{
				byte* temp = new byte[elem_size];
				//Memory Swap---------------------------------------------------
				memcpy(temp, array+j*elem_size, elem_size);
				memcpy(array+j*elem_size, array+(j+1)*elem_size, elem_size);
				memcpy(array+(j+1)*elem_size, temp, elem_size);
				//--------------------------------------------------------------
				delete [] temp;
			}
		}
	}
}
