// SortDll.cpp : Defines the exported functions for the DLL application.
//#include "stdafx.h"
#include "SortDll.h"
#include <cstdio>

void SORTDLL_API __stdcall Bubblesort_1(byte* Mem_Loc, int size, int sizeD, CompareFunction CMP_funct)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(1 == (*CMP_funct)(Mem_Loc + j * sizeD , Mem_Loc+(j+1) * sizeD))
			{
				byte* temp = new byte[sizeD];
				//Memory Swap---------------------------------------------------
				memcpy(temp, Mem_Loc + j * sizeD, sizeD);
				memcpy(Mem_Loc + j * sizeD, Mem_Loc + (j+1) * sizeD, sizeD);
				memcpy(Mem_Loc + (j+1) * sizeD, temp, sizeD);
				//--------------------------------------------------------------
				delete [] temp;
			}
		}
	}
}
