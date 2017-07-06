#ifndef _H_SORTDLL_
#define _H_SORTDLL_

#ifdef SORTDLL_EXPORTS
#define SORTDLL_API __declspec(dllexport)
#else
#define SORTDLL_API __declspec(dllimport)
#endif

typedef unsigned char byte; //0 to 255

typedef int (__stdcall *CompareFunction)(const byte*, const byte*); //Prototype for callback: 
																	                                  //Compare memory contents

//Bubble sort Prototype------------------------------------------------------------------------------
void SORTDLL_API __stdcall Bubblesort(byte* array, int size, int elem_size, CompareFunction cmpFunc);
//---------------------------------------------------------------------------------------------------

#endif
