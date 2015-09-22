#include <iostream>
#include <malloc.h>
#include "stack.h"

using namespace std;

void Stack::push(int data){
	LinkList* DataBaru =(LinkList*) malloc(sizeof(LinkList));
	
	DataBaru->data = data;
	DataBaru->Next = Head;
	Head=DataBaru;
}
 int Stack::pop(){
 	int data=Head->data;
 	LinkList* Next = Head->Next;
 	free(Head);
 	Head=Next;
 	return data; 	
 }
