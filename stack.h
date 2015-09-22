#ifndef STACK_H
#define STACK_H

using namespace std;

struct LinkList{
	int data;
	struct LinkList* Next;
};

class Stack
{
	public:
		void push(int data);
		int pop ();
	private:
		struct LinkList* Head=null;
};
#endif
