#include "Date.h"
	
	Date::Date(unsigned int j, unsigned int m , unsigned int a):jour_(j), mois_(m), annee_(a)
	{
	
	}

	Date::Date()
	{
		jour_ = 1;
		mois_ = 1; 
		annee_ = 2010;
	}

	Date::~Date()
	{
	
	}
	void Date::setJ(unsigned int j)
	{
		jour_ = j;
	}
	void Date::setM(unsigned int m)
	{
		mois_ = m;
	}
	void Date::setA(unsigned int a)
	{
		annee_ = a;
	}
	unsigned int Date::getJ()const
	{
		return jour_;
	}
	unsigned int Date::getM()const
	{
		return mois_;
	}
	unsigned int Date::getA()const
	{
		return annee_;
	}

	void Date::afficheDate() const
	{
		cout << getJ() << '/' << getM() << '/' << getA() << endl; 
	}
