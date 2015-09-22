#include <iostream>
using namespace std;

void hanoi(int piringan, char dari, char ke, char bantu)
{
	if (piringan>0)
	{
		hanoi (piringan-1, dari, ke, bantu);
		cout<<"Pindahkan piringan"<< piringan<<"dari"<< dari<<"ke"<< ke;
		hanoi (piringan-1,bantu,dari,ke);
	}
}

