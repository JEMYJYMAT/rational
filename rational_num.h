//rational header file 
#ifndef rational_header
#define raional_header

using namespace std;
#include <iostream>

class rational_num
{ private:
	int numirator;
	int donominator;
public:
	rational_num();
	rational_num(int n,int d);
	rational_num(int n);
	rational_num operator +(rational_num r);
	rational_num operator +(int r);
	rational_num operator *(rational_num r);
	void operator --();
	rational_num operator -(rational_num r);
	void getdata();




};
#endif rational_header
