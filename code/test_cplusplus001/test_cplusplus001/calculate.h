#pragma once

#ifndef CALCULATE_CALSS_8293023
#define CALCULATE_CALSS_8293023


class Calculate
{
public:
	Calculate() {};
	~Calculate() {};

public:

	//��¼������
	enum EnumOP
	{
		NON_OP = 0,
		ADD_OP = 1,
		SUB_OP = 2,
		MUL_OP = 3,
		DIV_OP = 4
	};

public:
	double add(const double & p1, const double &p2);//�ӷ�
	double sub(const double & p1, const double &p2);//����
	double mul(const double & p1, const double &p2);//�˷�
	double div(const double & p1, const double &p2);//����

	inline bool get_operator_status();

private:
	double op1, op2;
	double result;
	EnumOP m_op = NON_OP;
	bool op_status = true;
};


//�����˽�ģ����
//2019.12.29
template <typename T>
class Calculate_T
{
public:
	//��¼������
	enum EnumOP
	{
		NON_OP = 0,
		ADD_OP = 1,
		SUB_OP = 2,
		MUL_OP = 3,
		DIV_OP = 4
	};

public:
	Calculate_T() {};
	~Calculate_T() {};


public:
	T add(const T & p1, const T &p2);//�ӷ�
	T sub(const T & p1, const T &p2);//����
	T mul(const T & p1, const T &p2);//�˷�
	T div(const T & p1, const T &p2);//����
public:
	T op1, op2;
	T result;
	EnumOP m_op = NON_OP;
	bool op_status = true;
};

//����ӷ�ģ�巽��
template <typename T>
T Calculate_T<T>::add(const T & p1, const T &p2)
{
	m_op = ADD_OP;
	op1 = p1;//��¼������
	op2 = p2;//��¼������
	result = p1 + p2;
	return result;
}

//�������ģ�巽��
template <typename T>
T Calculate_T<T>::sub(const T & p1, const T &p2)
{
	m_op = SUB_OP;
	op1 = p1;//��¼������
	op2 = p2;//��¼������
	result = p1 - p2;
	return result;
}

//����˷�ģ�巽��
template <typename T>
T Calculate_T<T>::mul(const T & p1, const T &p2)
{
	m_op = MUL_OP;
	op1 = p1;//��¼������
	op2 = p2;//��¼������
	result = p1 * p2;
	return result;
}

//�������ģ�巽��
template <typename T>
T Calculate_T<T>::div(const T & p1, const T &p2)
{
	m_op = DIV_OP;
	op1 = p1;//��¼������
	op2 = p2;//��¼������
	if (abs(p2) < 1e-10)
	{
		op_status = false;
	}
	else
	{
		result = p1 / p2;
	}

	return result;
}

#endif