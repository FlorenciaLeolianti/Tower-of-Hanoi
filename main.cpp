#include <iostream>
#include "hanoi.h"
#include "stack.h"

using namespace std;


int main()
{
	int input;
	Stack A("A");
	Stack B("B");
	Stack C("C");
	
	char jawab;
	cout<<"Apakah Anda ingin menampilkan detail Stack?"<<endl;
	cin>>jawab;
	
	cout<<"Masukkan berapa disk untuk tumpukan?"<<endl;
	cin>>input;
	if(cin.good())
	{
		int i;
		for(i=input;i>0;i--)
		{
			A.push(i);
		}
		if(jawab=='y' || jawab=='Y')
		{
			hanoi(input,&A, &B, &C, 1);	
		}
		else
		{
			hanoi(input,&A, &B, &C, 0);
		}
		
	}
	return 0;
}