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
	 * \brief ����������
	 */
	~Point();
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
	double SetNewX() const;
	/**
	 * \brief ����� ����������� ����� �� ��� �
	 * \return ����� ���������� ����� �� ��� �
	 */
	double SetNewY() const;
	/**
	 * \brief ������������� ����� � ���� �������� ���������
	 * \return �������������� ��������� ����� �� ���������� ������� ��������� � ��������
	 */
	std::string& GetPolarView() const;


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



