#pragma once

/**
 * \brief ����� �����
 */
class Point
{
public:
	/**
	 * \brief ����������� �� ���������
	 */
	Point() {};

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
	 * \brief �����, ������������ ����� ���������� ����� �� ��� � 
	 * \return ����� ���������� ����� �� ��� �
	 */
	double GetNewX() const;

	/**
	 * \brief �����, ������������ ����� ���������� ����� �� ��� �
	 * \return ����� ���������� ����� �� ��� �
	 */
	double GetNewY() const;

	/**
	 * \brief ������������� ����� � ���� �������� ���������
	 * \return �������������� ��������� ����� �� ���������� ������� ��������� � ��������
	 */
	Point& GetPolarView() const;

	/**
	 * \brief �����, ������������ ���������� ������ �����
	 * \return ���������� ������ ����� ��� ���������� ���������� ����� ����� �������
	 */
	Point& GetPoint2() const;



	/**
	 * \brief ����� ����������� ����� �� ��� �
	 * \param other ����� ���������� �
	 * \return ����� (���������) �����
	 */
	Point& MoveX(const Point& other) const;

	/**
	 * \brief ����� ����������� ����� �� ��� �
	 * \param other ����� ���������� �
	 * \return ����� (���������) �����
	 */
	Point& MoveY(const Point& other) const;

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
