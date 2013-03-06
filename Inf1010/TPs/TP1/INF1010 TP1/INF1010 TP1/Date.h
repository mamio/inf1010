#ifndef _DATE_H_
#define _DATE_H_

#include<iostream>
#include<string>

using namespace std;

class Date
{
public:
	Date();
	Date(unsigned int j, unsigned int m , unsigned int a); 
	~Date();

	void setJ(unsigned int j);
	void setM(unsigned int m);
	void setA(unsigned int a);

	unsigned int getJ()const;
	unsigned int getM()const;
	unsigned int getA()const;


	void afficheDate() const;

private: 
	unsigned int jour_;
	unsigned int mois_;
	unsigned int annee_;
};

#endif