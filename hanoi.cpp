#include <iostream>
#include "stack.h"
using namespace std;


void printStackLagi(Stack* stack)
{
	cout<<"Stack "<< stack->nama<<":" <<endl;
	stack->printStack();
	cout<<endl;
}

//Fungsi Hanoi rekursi.
//Sumber: http://www.scribd.com/doc/34314249/Rekursif-Permainan-Menara-Hanoi-dengan-Pemrograman-C#scribd

void hanoi(int piringan, Stack* dari, Stack* bantu, Stack* ke, int detail)
{
	if (piringan>0)
	{
		hanoi (piringan-1, dari, ke, bantu,detail);
		cout<<endl<<"Pindah "<< piringan << " ke "<< ke->nama<<endl;
		
		ke->push(dari->pop());
		
		
		if(detail==1)
		{
			//Masukkan ke array biar gampang diloop
			Stack* stacks[3];
			stacks[0]=dari;
			stacks[1]=bantu;
			stacks[2]=ke;

			//3 For loop untuk memastikan urutan A,B,C benar.
			int i;
			for(i=0;i<3;i++)
			{
				if(stacks[i]->nama=="A")
				{
					printStackLagi(stacks[i]);
				}
			}
			for(i=0;i<3;i++)
			{
				if(stacks[i]->nama=="B")
				{
					printStackLagi(stacks[i]);
				}
			}
			for(i=0;i<3;i++)
			{
				if(stacks[i]->nama=="C")
				{
					printStackLagi(stacks[i]);
				}
			}
		}	
		
		hanoi (piringan-1,bantu,dari,ke,detail);
	}
}

