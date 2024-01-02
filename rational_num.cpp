//rational cpp file
#include "rational_num.h"

rational_num::rational_num()
{
	numirator = 0;
	donominator = 1;
}

rational_num::rational_num(int n, int d)
{
	numirator = n;
	donominator = d;
}

rational_num::rational_num(int n)
{ 
	numirator = n;
	donominator = 1;
}

rational_num rational_num::operator+(rational_num r)
{
	rational_num sum;
	sum.numirator = r.donominator * numirator + r.numirator * donominator;
	sum.donominator = donominator * r.donominator;
	return sum;
}

rational_num rational_num::operator+(int r)
{
	rational_num sum;
	sum.numirator = numirator + donominator * r;
	sum.donominator = donominator;
	return sum;
}

rational_num rational_num::operator*(rational_num r)
{
	rational_num mul;
	mul.numirator = numirator * r.numirator;
	mul.donominator = donominator * r.donominator;
	return mul;
}

void rational_num::operator--()
{
	numirator = numirator - donominator;
	donominator = donominator;
}

rational_num rational_num::operator-(rational_num r)
{
	rational_num diff;
	diff.numirator = numirator * r.donominator - donominator * r.numirator		;
	diff.donominator = donominator * r.donominator;

	return diff;
}

void rational_num::getdata()
{
	cout << numirator << "/" << donominator << endl;

}


