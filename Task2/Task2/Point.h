#pragma once
#include "Header.h"
#include <string>
#include <iostream>
#include <cmath>

/**
 * \brief Класс Точка
 */
class Point
{
public:
	/**
	 * \brief Конструктор по умолчанию
	 */
	Point();

	/**
	 * \brief Конструктор с параметрами
	 * \param х Координата х
	 * \param у Координата у
	 */
	Point(const double x, const double y);

	/**
	 * \brief Конструктор копирования
	 * \param other Точка
	 */
	Point(const Point& other);

	/**
	 * \brief Деструктор
	 */
	~Point();



	/**
	 * \brief Метод, возвращающий координату х
	 * \return Координата х
	 */
	double GetX();

	/**
	 * \brief Метод, возвращающий координату у
	 * \return Координата у
	 */
	double GetY() const;

	/**
	 * \brief Метод перемещения точки на оси х
	 * \return Новая координата точки на оси х
	 */
	double SetX(const double& ValueX)
	{
		x = ValueX;
	};

	/**
	 * \brief Метод перемещения точки на оси у
	 * \return Новая координата точки на оси у
	 */
	double SetY() const;

	/**
	 * \brief Представление точки в виде полярных координат
	 * \return Преобразование координат точки из декартовой системы координат в полярную
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
	 * \brief Метод определения расстояния от точки до начала координат
	 * \return Расстояние от точки до начала координат
	 */
	double GetDistanceToOrigin(const Point& XYZ) const {
		double d = sqrt(XYZ.x * XYZ.x + XYZ.y * XYZ.y);
		return d;
	};


	/**
	 * \brief Метод определения расстояния между двумя точками
	 * \param other Координаты второй точки
	 * \return Расстояние между двумя точками
	 */
	double GetDistanceToPoint(const Point& XYZ, const Point& Second) const {
		double d = sqrt(pow((XYZ.x - Second.x), 2) + pow((XYZ.y - Second.y), 2));
		return d;
	};


	/**
	 * \brief Метод сравнения на совпадение и не совпадение координат двух точек
	 * \param other Координаты второй точки
	 * \return Результат сравнения на совпадение и не совпадение координат двух точек
	 */
	bool AreEqual(const Point& other) const;


private:
	double x;
	double y;
};



