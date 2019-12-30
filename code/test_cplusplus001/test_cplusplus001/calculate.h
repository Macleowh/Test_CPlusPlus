#pragma once

#ifndef CALCULATE_CALSS_8293023
#define CALCULATE_CALSS_8293023
#include <limits>

class Calculate
{
public:
	Calculate() {};
	~Calculate() {};

public:

	//记录操作数
	enum EnumOP
	{
		NON_OP = 0,
		ADD_OP = 1,
		SUB_OP = 2,
		MUL_OP = 3,
		DIV_OP = 4
	};

public:
	double add(const double & p1, const double &p2);//加法
	double sub(const double & p1, const double &p2);//减法
	double mul(const double & p1, const double &p2);//乘法
	double div(const double & p1, const double &p2);//除法

	inline bool get_operator_status();

private:
	double op1, op2;
	double result;
	EnumOP m_op = NON_OP;
	bool op_status = true;
};


//尝试了解模板编程
//2019.12.29
template <typename T>
class Calculate_T
{
public:
	//记录操作数
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
	T add(const T & p1, const T &p2);//加法
	T sub(const T & p1, const T &p2);//减法
	T mul(const T & p1, const T &p2);//乘法
	T div(const T & p1, const T &p2);//除法

protected:

private:
	T op1, op2;
	T result;
	EnumOP m_op = NON_OP;
	bool op_status = true;
};

//定义加法模板方法
template <typename T>
T Calculate_T<T>::add(const T & p1, const T &p2)
{
	//2019.12.30 增加输入参数的有效性检查
	if (typeid(T) == typeid(double))//假设输入类型是double
	{
		if ((std::numeric_limits<double>::min() < p1 && p1 < std::numeric_limits<double>::max()) &&
			(std::numeric_limits<double>::min() < p2 && p2 < std::numeric_limits<double>::max()))
		{
			op_status = true;
		}
		else
		{
			op_status = false;
		}
	}
	else if (typeid(T) == typeid(int))
	{
		if ((std::numeric_limits<int>::min() < p1 && p1 < std::numeric_limits<int>::max()) &&
			(std::numeric_limits<int>::min() < p2 && p2 < std::numeric_limits<int>::max()))
		{
			op_status = true;
		}
		else
		{
			op_status = false;
		}
	}

	m_op = ADD_OP;
	op1 = p1;//记录操作数
	op2 = p2;//记录操作数
	result = p1 + p2;
	return result;
}

//定义减法模板方法
template <typename T>
T Calculate_T<T>::sub(const T & p1, const T &p2)
{
	//尝试增加减法模块的算法输入参数的有效性检查
	m_op = SUB_OP;
	op1 = p1;//记录操作数
	op2 = p2;//记录操作数
	result = p1 - p2;
	return result;
}

//定义乘法模板方法
template <typename T>
T Calculate_T<T>::mul(const T & p1, const T &p2)
{
	//尝试增加乘法模块的算法输入参数的有效性检查
	m_op = MUL_OP;
	op1 = p1;//记录操作数
	op2 = p2;//记录操作数
	result = p1 * p2;
	return result;
}

//定义除法模板方法
template <typename T>
T Calculate_T<T>::div(const T & p1, const T &p2)
{
	//2019.12.30 增加输入参数的有效性检查
	if (typeid(T) == typeid(double))//假设输入类型是double
	{
		if ((std::numeric_limits<double>::min() < p1 && p1 < std::numeric_limits<double>::max()) &&
			(std::numeric_limits<double>::min() < p2 && p2 < std::numeric_limits<double>::max()))
		{
			op_status = true;
		}
		else
		{
			op_status = false;
		}
	}
	else if (typeid(T) == typeid(int))
	{
		if ((std::numeric_limits<int>::min() < p1 && p1 < std::numeric_limits<int>::max()) &&
			(std::numeric_limits<int>::min() < p2 && p2 < std::numeric_limits<int>::max()))
		{
			op_status = true;
		}
		else
		{
			op_status = false;
		}
	}

	m_op = DIV_OP;
	op1 = p1;//记录操作数
	op2 = p2;//记录操作数
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