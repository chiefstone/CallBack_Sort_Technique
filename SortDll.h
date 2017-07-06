#ifndef _H_SORTDLL_
#define _H_SORTDLL_

#ifdef SORTDLL_EXPORTS
#define SORTDLL_API __declspec(dllexport)
#else
#define SORTDLL_API __declspec(dllimport)
#endif

typedef unsigned char byte; //0 to 255

//Prototype for callback----------------------------------------------------------------------------------
//Takes in two bytes that contain the memory address of components to be compared. This CallBack will be
//used on any of the other techniques to sort.
typedef int (__stdcall *CompareFunction)(const byte*, const byte*); 
//--------------------------------------------------------------------------------------------------------
																	                                  //Compare memory contents
//Bubble sort Prototype-----------------------------------------------------------------------------------
//Bubblesort_1(<byte*: "memory location of the data to be sorted">,
//             <int: "number of elements in the array to be sorted">,
//             <int: "size of the data type contained in the array to be sorted">
//             <CompareFunction : "CallBack to the function that will compare data in the array">)
void SORTDLL_API __stdcall Bubblesort_1(byte* Mem_Loc, int size, int sizeD, CompareFunction CMP_funct);
//--------------------------------------------------------------------------------------------------------

#endif
