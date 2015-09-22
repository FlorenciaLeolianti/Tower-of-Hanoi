#ifndef STACK_H
#define STACK_H
using namespace std;

struct LinkedList{
	int data;
	struct LinkedList* Next;
};

class Stack
{	
	public:
		string nama;
		
		Stack(string namaBaru);
		
		void push(int data);
		int pop ();
		void printStack();
	private:
		struct LinkedList* Head;
		void printStack(LinkedList* next);
};
#endif
