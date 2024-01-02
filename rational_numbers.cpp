//rational number main file
using namespace std;
#include <iostream>
#include "rational_num.h"

int main()
{
	rational_num num1(3, 7);

	rational_num num2(2, 9);

	rational_num num3 = num1 + 5 + 10;
	rational_num sum = num2 + num3 - rational_num(1, 2);
	sum.getdata();
	rational_num mul = rational_num(10) * 5;
	mul.getdata();
	--mul;
	mul.getdata();





    
}



