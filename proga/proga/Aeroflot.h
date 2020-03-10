#pragma once
#include <string.h>
#include<iostream>
class Aeroflot
{
private:
	char mesto[50];
	char tip[15];
	int num;
public:
	Aeroflot(int a, char* b, char* c)
	{
		num = a;
		strcpy(tip, b);
		strcpy(mesto, c);
	}
	Aeroflot() { num = 0; tip[0] = '/0'; mesto[0] = '/0'; }
	Aeroflot(const Aeroflot& a)
	{
		num = a.num;
		strcpy(tip, a.tip);
		strcpy(mesto, a.mesto);
	}
	Aeroflot operator =(const Aeroflot& a)
	{
		num = a.num;
		strcpy(tip, a.tip);
		strcpy(mesto, a.mesto);
		return*this;
	}
	friend std::ostream &operator <<(std::ostream& os, Aeroflot& a)
	{
		;
	}
};

