#pragma once

#ifndef CALCULATE_CALSS_8293023
#define CALCULATE_CALSS_8293023


class Calculate
{
public:
	Calculate() {};
	~Calculate() {};
public:
	double add(const double & p1, const double &p2);//�ӷ�
	double sub(const double & p1, const double &p2);//����
	double mul(const double & p1, const double &p2);//�˷�
	double div(const double & p1, const double &p2);//����

	inline bool get_operator_status();

private:
	double op1, op2;
	double result;
	bool op_status = true;
};

#endif