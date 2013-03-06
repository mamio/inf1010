class Point3d
{
public:
	Point3d();
	Point3d(double coordx, double coordy, double coordz);
	~Point3d();

	double getX() const;
	double getY() const;
	double getZ() const;
	void move(double dx, double dy, double dz);
	void reset();

private:
	
	double x_;
	double y_;
	double z_;

};