#include <iostream>
#include <malloc.h>
#include "stack.h"

using namespace std;

Stack::Stack(string namaBaru)
{
	nama=namaBaru;
	Head=NULL;
}

void Stack::push(int data){
	LinkedList* DataBaru =(LinkedList*) malloc(sizeof(LinkedList));
	
	DataBaru->data = data;
	DataBaru->Next = Head;
	Head=DataBaru;
}
 int Stack::pop(){
 	int data=Head->data;
 	LinkedList* Next = Head->Next;
 	free(Head);
 	Head=Next;
 	return data; 	
 }

 void Stack::printStack()
 {
	 if(Head!=NULL)
	 {
		printStack(Head);
	 }
 }
 void Stack::printStack(LinkedList* Next)
 {
	 cout<< Next->data << endl;
	 if(Next->Next!=NULL)
	 {
		 printStack(Next->Next);
	 }
 }