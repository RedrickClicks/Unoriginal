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
	Point(const Point& other) {};

	/**
	 * \brief Деструктор
	 */
	~Point();

	/**
	 * \brief Метод, возвращающий координату х
	 * \return Координата х
	 */
	double GetX() const {};

	/**
	 * \brief Метод, возвращающий координату у
	 * \return Координата у
	 */
	double GetY() const {};

	/**
	 * \brief Метод, возвращающий угол 
	 * \return угол
	 */
	double GetAngle() const{};

	/**
	 * \brief Метод, возвращающий координату перемещения точки по оси х 
	 * \return Координата перемещения точки по оси х
	 */
	double GetToX() const {};

	/**
	 * \brief Метод, возвращающий координату перемещения точки по оси у
	 * \return Координата перемещения точки по оси у
	 */
	double GetToY() const {};

	/**
	 * \brief Метод, возвращающий координаты второй точки
	 * \return Координаты второй точки
	 */
	Point& GetPoint2() const {};


	/**
	 * \brief Метод перемещения точки по оси х
	 * \param other Координата х
	 * \return Третья (результат) точка
	 */
	Point& MoveX(const Point& other) const {};

	/**
	 * \brief Метод перемещения точки по оси у
	 * \param other Координата у
	 * \return Третья (результат) точка
	 */
	Point& MoveY(const Point& other) const {};

	/**
	 * \brief Метод преобразования в полярные координаты
	 * \param other Угол
	 * \return Третья (результат) точка
	 */
	Point& Polar(const Point& other) const {};


	/**
	 * \brief Метод определения расстояния от точки до начала координат
	 * \return Расстояние от точки до начала координат
	 */
	double Distance() const {};


	/**
	 * \brief Метод определения расстояния между двумя точками
	 * \param other Координаты второй точки
	 * \return Расстояние между двумя точками
	 */
	double Range(const Point& other) const {};


	/**
	 * \brief Метод сравнения на совпадение и не совпадение координат двух точек
	 * \param other Координаты второй точки
	 * \return Результат сравнения на совпадение и не совпадение координат двух точек
	 */
	bool Mismatch(const Point& other) const {};
	
private:
	double x;
	double y;
};
