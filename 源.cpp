#include<iostream>
using namespace std;
class Solid
{
public:
	Solid(int x, int y, int z) :_x(x),_y(y), _z(z) {}
	void show()
	{
		cout << "��ά���꣺" << _x << "," << _y << "," << _z << endl;
	}
	friend class Point;
private:
	int _x, _y, _z;

};
class Point
{
public:
	Point(int x,int y):_x(x),_y(y){}
	Point(const Solid& another);//����ת�����캯��
	void show()
	{
		cout << "��ά���꣺" << _x <<"," << _y << endl;
	}
private:
	int _x, _y;
};
Point::Point(const Solid& another)
{
	this->_x = another._x;
	this->_y = another._y;
}
int main()
{
	cout << "ԭʼ���꣺" << endl;
	Point p(2, 3);
	p.show();
	Solid s(2, 5, 9);
	s.show();
	cout << "��άת����ά���꣺" << endl;
	p = s;
	p.show();
	return 0;
}
