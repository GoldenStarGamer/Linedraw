//Here Be Dragons
#include "cinc.h"
#include "Linedraw.h"

float povx, povy, tx, ty;

int main()
{
	cout << "your x coord.:";
	cin >> povx;
	cout << "\nyour y coord.:";
	cin >> povy;
	cout << "\ntarget's x coord.:";
	cin >> tx;
	cout << "\ntarget's y coord.:";
	cin >> ty;
	Linedraw ld;
	cout << ld.Dist(povx, povy, tx, ty);
	return 0;
}