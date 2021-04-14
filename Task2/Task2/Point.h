#pragma once
#include "Header.h"
#include <string>
#include <iostream>
#include <cmath>

/**
 * \brief ����� �����
 */
class Point
{
public:
	/**
	 * \brief ����������� �� ���������
	 */
	Point();

	/**
	 * \brief ����������� � �����������
	 * \param � ���������� �
	 * \param � ���������� �
	 */
	Point(const double x, const double y);

	/**
	 * \brief ����������� �����������
	 * \param other �����
	 */
	Point(const Point& other);

	/**
	 * \brief ����������
	 */
	~Point();



	/**
	 * \brief �����, ������������ ���������� �
	 * \return ���������� �
	 */
	double GetX();

	/**
	 * \brief �����, ������������ ���������� �
	 * \return ���������� �
	 */
	double GetY() const;

	/**
	 * \brief ����� ����������� ����� �� ��� �
	 * \return ����� ���������� ����� �� ��� �
	 */
	double SetX(const double& ValueX)
	{
		x = ValueX;
	};

	/**
	 * \brief ����� ����������� ����� �� ��� �
	 * \return ����� ���������� ����� �� ��� �
	 */
	double SetY() const;

	/**
	 * \brief ������������� ����� � ���� �������� ���������
	 * \return �������������� ��������� ����� �� ���������� ������� ��������� � ��������
	 */
	std::string& GetPolarView(const Point& XYZ) const {
		double r, f, a, b;
		r = sqrt(x * x + y * y);
		if (x == 0) {
			f = asin(y);
		}
		else {
			f = atan(y / x);
		};
		a = r * cos(f);
		b = r * sin(f);
	};


	/**
	 * \brief ����� ����������� ���������� �� ����� �� ������ ���������
	 * \return ���������� �� ����� �� ������ ���������
	 */
	double GetDistanceToOrigin(const Point& XYZ) const {
		double d = sqrt(XYZ.x * XYZ.x + XYZ.y * XYZ.y);
		return d;
	};


	/**
	 * \brief ����� ����������� ���������� ����� ����� �������
	 * \param other ���������� ������ �����
	 * \return ���������� ����� ����� �������
	 */
	double GetDistanceToPoint(const Point& XYZ, const Point& Second) const {
		double d = sqrt(pow((XYZ.x - Second.x), 2) + pow((XYZ.y - Second.y), 2));
		return d;
	};


	/**
	 * \brief ����� ��������� �� ���������� � �� ���������� ��������� ���� �����
	 * \param other ���������� ������ �����
	 * \return ��������� ��������� �� ���������� � �� ���������� ��������� ���� �����
	 */
	bool AreEqual(const Point& other) const;


private:
	double x;
	double y;
};



