#include <iostream>
using namespace std;

// CLASSE POINT

class Point
{
public:
	Point(int,int);

	void afficher();

	int getX();
	int getY();

	void setX(int);
	void setY(int);

	void faireTranslation(int, int);

private:
	int x_, y_;
};


Point::Point(int x, int y)
{
	x_= x;
	y_= y;
}
void Point:: afficher()
{
	cout << "X "<< x_<<endl;
	cout << "Y "<< y_<<endl;
}

int Point:: getX()
{ return x_;}

int Point:: getY()
{ return y_;}

void Point:: setX(int x)
{x_ = x;}

void Point:: setY(int y)
{y_= y;}

void Point::faireTranslation( int deltaX, int deltaY)
{
	x_ = x_ + deltaX;
	y_ = y_ + deltaY;
}


// CLASSE POINT3D

class Point3D:public Point
{
public:
	Point3D(int, int,int);

	void afficher();

	void faireTranslation(int, int,int);
	void faireMiseAEchelle(int scaling);

	int getZ();
	void setZ(int);

private:
	int z_;
};

Point3D::Point3D(int x, int y , int z):Point(x,y)
{z_= z;}

void Point3D::afficher()
{ 
	Point::afficher();
	cout <<"Z " << z_<<endl;
}

void Point3D::faireTranslation(int deltaX, int deltaY, int deltaZ)
{
	Point::faireTranslation(deltaX,deltaY);
	z_= z_ + deltaZ;
}

void  Point3D::faireMiseAEchelle(int scaling)
{
	setX(getX()* scaling);
	setY(getY()* scaling);
	z_ = z_ * scaling;
}

int Point3D::getZ()
{return z_;}

void Point3D::setZ(int z)
{ z_ = z;}

// PROGRAMME PRINCIPAL

int main()
{
	Point P1(2,3);
	P1.afficher ();
	P1.faireTranslation(2,5);
	cout <<"X " << P1.getX()<< endl;
	cout <<"Y " << P1.getY()<< endl;


	Point3D P2(1,2,3);

	P2.afficher();
	P2.faireTranslation(1,1,1);
	cout << "X " << P2.getX()<<endl;
	cout << "Y " << P2.getY()<< endl;
	cout << "Z " << P2.getZ()<< endl;

	P2.faireMiseAEchelle (4);
	P2.afficher();

	// exécuter la méthode afficher de Point
	P2.Point::afficher();

	return 0;
}
