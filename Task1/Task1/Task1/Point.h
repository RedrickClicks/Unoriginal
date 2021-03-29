#pragma once

/**
 * \brief Класс Точка
 */
class Point
{
public:
	/**
	 * \brief Конструктор по умолчанию
	 */
	Point() {};

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
	double GetX() const;

	/**
	 * \brief Метод, возвращающий координату у
	 * \return Координата у
	 */
	double GetY() const;

	/**
	 * \brief Метод, возвращающий новую координату точки на оси х 
	 * \return Новая координата точки на оси х
	 */
	double GetNewX() const;

	/**
	 * \brief Метод, возвращающий новую координату точки на оси у
	 * \return Новая координата точки на оси у
	 */
	double GetNewY() const;

	/**
	 * \brief Представление точки в виде полярных координат
	 * \return Преобразование координат точки из декартовой системы координат в полярную
	 */
	Point& GetPolarView() const;

	/**
	 * \brief Метод, возвращающий координаты второй точки
	 * \return Координаты второй точки для вычисления расстояния между двумя точками
	 */
	Point& GetPoint2() const;



	/**
	 * \brief Метод перемещения точки по оси х
	 * \param other Новая координата х
	 * \return Новая (результат) точка
	 */
	Point& MoveX(const Point& other) const;

	/**
	 * \brief Метод перемещения точки по оси у
	 * \param other Новая координата у
	 * \return Новая (результат) точка
	 */
	Point& MoveY(const Point& other) const;

	/**
	 * \brief Метод определения расстояния от точки до начала координат
	 * \return Расстояние от точки до начала координат
	 */
	double GetDistanceToOrigin() const;


	/**
	 * \brief Метод определения расстояния между двумя точками
	 * \param other Координаты второй точки
	 * \return Расстояние между двумя точками
	 */
	double GetDistanceToPoint(const Point& other) const;


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
