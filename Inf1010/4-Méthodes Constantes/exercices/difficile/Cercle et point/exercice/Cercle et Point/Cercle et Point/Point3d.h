/****************************************************************************
 * Fichier: Point3d.h
 * Auteur: Angelo Rossi
 * Date: 18 janvier 2009
 * Description: Définition de la classe Point3d
 ****************************************************************************/

#ifndef _POINT3D_H_
#define _POINT3D_H_

class Point3d
{
public:
	Point3d();
	Point3d(double coordx, double coordy, double coordz);
	~Point3d();

	double getX() const;
	double getY() const;
	double getZ() const;
	void move(double& dx, double& dy, double& dz);
	void reset();

private:
	
	double x_;
	double y_;
	double z_;

};
#endif // _POINT_H_