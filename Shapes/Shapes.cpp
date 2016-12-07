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
	float location_X;
	float location_Y;
public:
	Square() {};
	Square(float a, float b) {
		location_X = a;
		location_Y = b;
	}
	float Center[2]
	float corner1[2]{
		
	}
	float corner2[2]{

	}
	float corner3[2]{

	}
	float corner4[2]{

	}
};