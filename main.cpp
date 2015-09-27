#include <iostream>
#include "hanoi.h"
#include "stack.h"

using namespace std;


int main()
{
	int input, langkah;
	Stack A("A");
	Stack B("B");
	Stack C("C");
	
	char jawab;
	cout<<"Apakah Anda ingin menampilkan detail Stack? Jika iya, maka masukkan y/Y"<<endl;
	cin>>jawab;
	for(;;)
	{
	cin.clear();
    cin.ignore();
    fflush(stdin);
	cout<<"Masukkan berapa disk untuk tumpukan? Minimum 3 tumpukan."<<endl;
	cin>>input;
		
		if(cin.good() && input>2)
		{
			int i;
			for(i=input;i>0;i--)
			{
				A.push(i);
			}
			if(jawab=='y' || jawab=='Y')
			{
				langkah=hanoi(input,&A, &B, &C, 1);	
			}
			else
			{
				langkah=hanoi(input,&A, &B, &C, 0);
			}
			break;
		}
		else
		{
			cout<<"Data yang dimasukkan salah atau input kurang dari 3."<<endl<<"Silahkan coba lagi!!!"<<endl;
		}
	}	
	cout<< endl << "Total langkah yang dilakukan adalah "<<langkah<< " langkah."<<endl;
	return 0;
}
