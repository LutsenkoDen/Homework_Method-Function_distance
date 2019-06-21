#include <cmath>
#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
	{
		/*if (x > 100)this->x = 100;
		else*/
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	double distance(Point other) //Метод, который вычисляет расстояние до указанной точки;
	{
		/*double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		return sqrt(x_distance*x_distance + y_distance * y_distance);*/
		/*return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));*/
		return pow(pow(this->x - other.x, 2) + pow(this->y - other.y, 2), 0.5);
	}

	void print()
	{
		cout << "x=" << x << "\ty=" << y << endl;
	}
};

double distance(Point A, Point B) //Функция, которая вычисляет расстояние между двумя точками;
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	/*return sqrt(pow(x_distance, 2) + pow(y_distance, 2));*/
	return sqrt(pow(A.get_x() - B.get_x(), 2) + pow(A.get_y() - B.get_y(), 2));
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	Point A;
	double x, y;
	cout << "Введите координаты точки: "; cin >> x >> y;
	A.set_x(x);
	A.set_y(y);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point* pA = &A;
	cout << pA->get_x() << "\t" << pA->get_y() << endl;
	//	. - Оператор прямого доступа (Point operator);
	//	-> - Оператор косвенного доступа (Arrow operator);

	Point B;
	B.set_x(55);
	B.set_y(77);
	cout << B.get_x() << "\t" << B.get_y() << endl;
	
	cout << "\n--------------------------------------" << endl;
	cout << A.distance(B) << endl;
	cout << distance(A, B) << endl;
}