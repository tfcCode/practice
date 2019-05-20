#ifndef SHAPE_H_
#define SHAPE_H_
class Shape
{
public:
	virtual void shape() = 0;
	virtual void area() = 0;
};
class Circle :public Shape
{
private:
	float radius;
public:
	virtual void shape();
	virtual void area();
};
class Rectangle : public Shape
{
private:
	float longth;
	float wide;
public:
	virtual void shape();
	virtual void area();
};
class Triangle :public Shape
{
private:
	float a, b, c;
public:
	virtual void shape();
	virtual void area();
};
#endif