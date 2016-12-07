#include <iostream>

class BaseShape
{
	virtual void DebugPrint() {}
};

//class Point : public BaseShape
//{
//private:
//	float location_X;
//	float location_Y
//};

class Square : public BaseShape
{
private:
	float X;
	float Y;
public:
	Square() {};
	Square(float a, float b) {
		X = a;
		Y = b;
	}
	float corner1()
	{
		float result[2];
		result[0] = X;
		result[1] = Y;
		return result[2];
	}
	float corner2()
	{
		float result[2] = {X + X, Y};
		return result[2];
	}
	float corner3()
	{
		float result[2] = { X, Y - X };
		return result[2];
	}
	float corner4()
	{
		float result[2] = { X + X, Y - X };
		return result[2];
	}
	float Center()
	{
		float result[2] = { (X + ((X + X) / 2)),(Y - ((Y + Y) / 2)) };
	}

};