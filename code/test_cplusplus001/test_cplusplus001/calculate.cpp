
#include "calculate.h"
#include <iostream>

//加法
double Calculate::add(const double & p1, const double &p2)
{
	op1 = p1;//记录操作数
	op2 = p2;//记录操作数
	result = p1 + p2;
	return result;
}

//减法
double Calculate::sub(const double & p1, const double &p2)
{
	//试尝试自己完成减法操作
	return result;
}

//乘法
double Calculate::mul(const double & p1, const double &p2)
{
	//试尝试自己完成乘法操作
	return result;
}

//除法
double Calculate::div(const double & p1, const double &p2)
{
	op1 = p1;//记录操作数
	op2 = p2;//记录操作数
	if (std::abs(p2) < 1.0e-10)
	{
		op_status = false; //表征此时计算有误
		result = -9999.9999;//一个自定义的错误值
	}
	else
	{
		result = p1 / p2;
	}
	return result;

}

inline bool Calculate::get_operator_status()
{
	return op_status;//返回计算状态值
}