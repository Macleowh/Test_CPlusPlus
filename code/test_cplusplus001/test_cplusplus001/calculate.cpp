
#include "calculate.h"
#include <iostream>

//�ӷ�
double Calculate::add(const double & p1, const double &p2)
{
	op1 = p1;//��¼������
	op2 = p2;//��¼������
	result = p1 + p2;
	return result;
}

//����
double Calculate::sub(const double & p1, const double &p2)
{
	//�Գ����Լ���ɼ�������
	return result;
}

//�˷�
double Calculate::mul(const double & p1, const double &p2)
{
	//�Գ����Լ���ɳ˷�����
	return result;
}

//����
double Calculate::div(const double & p1, const double &p2)
{
	op1 = p1;//��¼������
	op2 = p2;//��¼������
	if (std::abs(p2) < 1.0e-10)
	{
		op_status = false; //������ʱ��������
		result = -9999.9999;//һ���Զ���Ĵ���ֵ
	}
	else
	{
		result = p1 / p2;
	}
	return result;

}

inline bool Calculate::get_operator_status()
{
	return op_status;//���ؼ���״ֵ̬
}