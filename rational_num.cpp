/*
 * RationalNumber.cpp
 *
 *  Created on: Dec 20, 2023
 *      Author: Ahmed
 */
#include "rational_num.h"

rational_num::rational_num()
{
	numirator = 0;
	denominator = 1;
}

rational_num::rational_num(int n, int d)
{
	numirator = n;
	denominator = d;
}

rational_num::rational_num(int n)
{ 
	numirator = n;
	denominator = 1;
}

rational_num rational_num::operator+(rational_num r)
{
	rational_num sum;
	sum.numirator = r.denominator * numirator + r.numirator * denominator;
	sum.denominator = denominator * r.denominator;
	return sum;
}

rational_num rational_num::operator+(int r)
{
	rational_num sum;
	sum.numirator = numirator + denominator * r;
	sum.denominator = denominator;
	return sum;
}

rational_num rational_num::operator*(rational_num r)
{
	rational_num mul;
	mul.numirator = numirator * r.numirator;
	mul.denominator = denominator * r.denominator;
	return mul;
}

void rational_num::operator--()
{
	numirator = numirator - denominator;
	denominator = denominator;
}

rational_num rational_num::operator-(rational_num r)
{
	rational_num diff;
	diff.numirator = numirator * r.denominator - denominator * r.numirator		;
	diff.denominator = denominator * r.denominator;

	return diff;
}

void rational_num::getdata()
{
	cout << numirator << "/" << denominator << endl;

}


