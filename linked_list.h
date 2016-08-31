#include <stdio.h>

//Declaring the 'Node' struct.
struct Node{
	char* next;
	int key;
	int value;
};

//Declaring the 'LinkedList' struct
struct LinkedList{
	char* head;
	char* tail;
	char* FP;
	int numberOfBlocks;
	int memSize;
	int blockSize;
	int listSize;
};

//Declaring the project's necessary functions.
//void Init(int M, int C);
//void Destroy();
//int Insert(int x, char* value_ptr, int value_len);
//void Delete(int x);
//char* Lookup(int x);
//void PrintList();
