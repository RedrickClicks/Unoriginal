#pragma once
#include <string>


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
     * \brief ������������ �����������
     * \param other ������ ����������� �����
	*/
	Point(Point&& other) = default;
	/**
	 * \brief ����������
	 */
	~Point() = default;
	/**
	 * \brief �����, ������������ ���������� �
	 * \return ���������� �
	 */
	double GetX() const;
	/**
	 * \brief �����, ������������ ���������� �
	 * \return ���������� �
	 */
	double GetY() const;
	/**
	 * \brief ����� ����������� ����� �� ��� �
	 * \return ����� ���������� ����� �� ��� �
	 */
	std::string SetNewX(double x);
	/**
	 * \brief ����� ����������� ����� �� ��� �
	 * \return ����� ���������� ����� �� ��� �
	 */
	std::string SetNewY(double y);
	/**
	 * \brief ������������� ����� � ���� �������� ���������
	 * \return �������������� ��������� ����� �� ���������� ������� ��������� � ��������
	 */
	std::string GetPolarView() const;


	/**
	 * \brief ����� ����������� ���������� �� ����� �� ������ ���������
	 * \return ���������� �� ����� �� ������ ���������
	 */
	double GetDistanceToOrigin() const;
	/**
	 * \brief ����� ����������� ���������� ����� ����� �������
	 * \param other ���������� ������ �����
	 * \return ���������� ����� ����� �������
	 */
	double GetDistanceToPoint(const Point& other) const;
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




