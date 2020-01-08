#include <iostream> //#include 是包含文件的意思  <iostream> 输入输出流（接受键盘的输入和控制台的输出功能）
#include <string> // <string> 字符串相关文件
#include <array> //std::array 标准库 array头文件
#include <fstream> //std::ofstream std::ifstream 文件流操作

//int main(){ return 0}; 
//main函数是程序执行的入口，整个项目只有这一个执行入口


#include "calculate.h" //添加自定义的计算类（这里采用的是分离式编译）

//2019.12.18
void learning_inner_data_type()
{
	std::cout << "BEGIN=============================" << std::endl;
	//字符类型
	char ch = 'a';//定义字符型变量
	unsigned char uch = 'b'; //unsigned是定义正整数，char是-128~127,256个数，所以unsigned char表示为0~255的256个数
	signed char sch = 'c';//有符号的整数，可以为负数，因此signed char也为-128~127的256个数

	//字符串类型
	std::string str = "this is test string.";//std::调用C++的标准库；string，字符串相关文件

	//整型类型
	//1 short类型
	short sh = 5;//short表示有符号的整数，占2个字节，是int的一半
	unsigned short ush = 6; //无符号short类型，正整数
	signed short ssh = 7; //有符号short类型，同short

						  //2 int 类型
	int i = -80;//int表示基本的数据类型（整型）;
	unsigned int ui = 81; //无符号int类型
	signed int ssi = -82; //有符号int类型

						  //3 long 类型
	long l = -80;//整数，4个字节
	unsigned long ul = 81; //无符号long类型
	signed long sl = -82;  //有符号long类型

						   //浮点型
	float f = 5.0f; //单精度浮点型数据，只能是小数，精确到小数点后6位数

	double d = 8.0; //双精度浮点型数据，只能是小数，精确到小数点后15位数
	//指针类型
	char* pch = &ch;//char*是指针，指向字符型的变量（ch），&是取ch这个变量的地址
	unsigned char* puch = &uch;//正整数的字符型指针
	signed char sch2 = '4';//定义sch2为正整数4 
	signed char *psch = &sch2;//同char*，有符号可为正整数和负整数

	//字符串类型
	std::string str2 = "this is test string.";//std::调用C++标准库，string，字符串相关文件
	std::string* pstr = &str2;//string*是是指字符串类型的变量，&是指取这个str2这个字符串变量的地址

	//整型类型
	//1 short类型
	short* psh = &sh;//short*是指针，指向正负整数的变量，&是指取sh这个正负整数的变量的地址，8个字节
	unsigned short ush2 = 32;//定义ush2为正整数32
	unsigned short* push = &ush2; //无符号short类型，unsigned short*是指针，指向整数的变量
	signed short ssh2 = 64;//定义ssh2为正整数64
	signed short* pssh = &ssh2; //有符号short类型，signed short*是指针，指向正负整数的变量

								//2 int 类型
	int* pi = &i;//int*是指针，指向正负整数型的变量，4个字节，&是指取i这个正负整数的变量的地址
	unsigned int* pui = &ui; //无符号int类型，unsigned int*是指针，指向正负整数的变量
	signed int* pssi = &ssi; //有符号int类型，signed int*，指向正整数型的变量

							 //3 long 类型
	long* pl = &l;//long* 是指针，指向正负整数型的变量，8个字节，&是指取l这个正负整数的变量的地址
	unsigned long* pul = &ul; //无符号long类型unsigned long*是指针，指向正整数的变量
	signed long* psl = &sl;  //有符号long类型signed long*是指针，指向正负整数的变量

							 //浮点型
	float* pf = &f; //单精度浮点型数据，float*是指针，指向小数的变量

	double* pd = &d; //双精度浮点型数据double*，指向小数的变量

	std::cout << "END=============================" << std::endl;
}

//2019.12.19
void learning_inner_data_size()
{
	std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
	std::cout << "sizeof(unsigned char) = " << sizeof(unsigned char) << std::endl;
	std::cout << "sizeof(signed char) = " << sizeof(signed char) << std::endl;

	//字符串类型
	std::string str = "this is test string.";
	std::cout << "sizeof(str) = " << sizeof(str) << std::endl;

	//整型类型
	//1 short类型
	std::cout << "sizeof(short) = " << sizeof(short) << std::endl;
	std::cout << "sizeof(unsigned short) = " << sizeof(unsigned short) << std::endl;
	std::cout << "sizeof(signed short) = " << sizeof(unsigned short) << std::endl;

    //2 int 类型
	std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
	std::cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << std::endl;
	std::cout << "sizeof(signed int) = " << sizeof(unsigned int) << std::endl;

	//3 long 类型
	std::cout << "sizeof(long) = " << sizeof(long) << std::endl;
	std::cout << "sizeof(unsigned long) = " << sizeof(unsigned long) << std::endl;
	std::cout << "sizeof(signed long) = " << sizeof(unsigned long) << std::endl;

	std::cout << "sizeof(float) = " << sizeof(float) << std::endl;
	std::cout << "sizeof(double) = " << sizeof(double) << std::endl;

	//指针类型

	std::cout << "sizeof(char*) = " << sizeof(char*) << std::endl;
	std::cout << "sizeof(unsigned char*) = " << sizeof(unsigned char*) << std::endl;
	std::cout << "sizeof(signed char*) = " << sizeof(unsigned char*) << std::endl;

	//字符串类型
	std::cout << "sizeof(pstr*) = " << sizeof(std::string*) << std::endl;
	//整型类型
	//1 short类型
	std::cout << "sizeof(short*) = " << sizeof(short*) << std::endl;
	std::cout << "sizeof(unsigned short*) = " << sizeof(unsigned short*) << std::endl;
	std::cout << "sizeof(signed short*) = " << sizeof(signed short*) << std::endl;
	
	//2 int 类型
	std::cout << "sizeof(int*) = " << sizeof(int*) << std::endl;
	std::cout << "sizeof(unsigned int*) = " << sizeof(unsigned int*) << std::endl;
	std::cout << "sizeof(signed int*) = " << sizeof(unsigned int*) << std::endl;

	//3 long 类型
	std::cout << "sizeof(long*) = " << sizeof(long*) << std::endl;
	std::cout << "sizeof(unsigned long*) = " << sizeof(unsigned long*) << std::endl;
	std::cout << "sizeof(signed long*) = " << sizeof(signed long*) << std::endl;

	//浮点型
	std::cout << "sizeof(float*) = " << sizeof(float*) << std::endl;
	std::cout << "sizeof(double*) = " << sizeof(double*) << std::endl;
}

//2019.12.20
void learning_condition_keywords()
{
	//在C++里面有基本的判等于,不等于，大于，小于，大于等于，小于等于（逻辑判断）
	//当然还有布尔判断

	//先具一些常量的例子帮助理解，其实变量也是一样
	if (1)
	{
		std::cout << "1 is true condition." << std::endl;
	}

	if (0)
	{
		std::cout << "0 is true condition." << std::endl;
	}
	else
	{
		std::cout << "0 is false condition." << std::endl;
	}

	if (1 == 0)
	{
		std::cout << "1 == 0 is true condition." << std::endl;
	}
	else
	{
		std::cout << "1 == 0 is false condition." << std::endl;
	}

	if (1 != 0)
	{
		std::cout << "1 != 0 is true condition." << std::endl;
	}
	else
	{
		std::cout << "1 != 0 is false condition." << std::endl;
	}

	if (5 > 4)
	{
		std::cout << "5 > 4 is true condition." << std::endl;
	}

	if (5 > 6)
	{
		std::cout << "5 > 6 is false condition." << std::endl;
	}

	if (5 >= 7)
	{
		std::cout << "5 >= 7 is true condition." << std::endl;
	}
	else
	{
		std::cout << "5 >= 7 is false condition." << std::endl;
	}

	if (7 >= 5)
	{
		std::cout << "7 >= 5 is true condition." << std::endl;
	}
	else
	{
		std::cout << "7 >= 5 is false condition." << std::endl;
	}

	if ('a' > 'b') // 'a' 与 'b' 都是字符串常量
	{
		std::cout << "true condition." << std::endl;
	}
	else
	{
		std::cout << "false condition." << std::endl;
	}

	if ('1' > '2') // 'a' 与 'b' 都是字符串常量
	{
		std::cout << "true condition." << std::endl;
	}
	else
	{
		std::cout << "false condition." << std::endl;
	}

	//变量的例子
	int a = 10, b = 5;
	if (a >= 5)
	{
		std::cout << "10 >= 5 is true condition." << std::endl;
	}

	if (a >= b)
	{
		std::cout << "a >= b is true condition." << std::endl;
	}

	if (a != b)
	{
		std::cout << "a != b is true condition." << std::endl;
	}

	if (a == b)
	{
		std::cout << "a == b is true condition." << std::endl;
	}
	else
	{
		std::cout << "a == b is false condition." << std::endl;
	}
}

//2019.12.21
void learning_loop_keywords()
{
	//C++中循环条件执行语句有三个，分别是：for，while，do-while

	//for循环
	for (int i = 0; i < 10; i++)// 其中 i++ 等效与 i = i + 1;
	{
		std::cout << "i = " << i << std::endl;
	}

	//while循环
	{
		int i = 0;
		while (i < 10)
		{
			std::cout << "i = " << i << std::endl;
			i++;
		}
	}

	//do-while循环
	{
		int i = 0;
		do
		{
			std::cout << "i = " << i << std::endl;
			i++;
		} while (i < 10);
	}

	//试体会这三种循环判断条件的执行方式的不同。

	//试了解 i++ ++i --i i-- 这四种操作的结果的不同。
}

void learning_loop_keywords_9_mul_9()
{
	// for 
	// int[]
	// std::cout << << std::endl;

	/*
	for (int i = 9, a = 1; i > 0, a < 10; --i,++a, a = i * a )
	{
		std::cout << "a = " << a << std::endl;
	}
	*/

	/*for (int i=1;i<10;i++ )//正序，i=1<10开始，不停相加
	{
		for (int j = 1;j<=i;j++)//先做这里的for循环，j=1不停加1，直到等于i为止
		{
			std::cout << i << "*" << j << " = " << i*j << " ";
			//std::cout << "i = " << i << " j = " << j  << " i * j = " << i*j << std::endl;
		}
		std::cout << std::endl;
	}
	*/


/*	for (int i = 9; i>0; i--)    //倒叙，从9*1开始，i=9，j=1
	{
		for (int j = 1; j <= i; j++)//条件j从1开始加，直到等于i为止，然后输出
		{
			std::cout << i << "*" << j << " = " << i*j << " ";
			//std::cout << "i = " << i << " j = " << j  << " i * j = " << i*j << std::endl;
		}
		std::cout << std::endl;//断行，跳到第二行
	}
	*/


	for (int i = 1, j = 1; i < 10; j++)
	{

		if (j == i)
		{
			std::cout << i << "*" << j << " = " << i*j << " ";
			std::cout << std::endl;
			i++;
			j = 1;
		}
		if (i < 10)
		{
			std::cout << i << "*" << j << " = " << i*j << " ";
		}
	}
	
}



int test_increase_and_decrease()
{
	//i++
	{
		int i = 0, j = 0;    //i=1 j=0
		j = i++;
		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
	}
	
	//++i
	{
		int i = 0, j = 0;//i=1 j=1
		j = ++i;
		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
	}
	
	//i--
	{
		int i = 0, j = 0;//i=-1 j=0
		j = i--;
		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
	}
	
	//--i
	{
		int i = 0, j = 0;//i=-1 j=-1
		j = --i;
		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
	}
	
	return 0;
}

//2019.12.23
void learning_basic_operation()
{
	//双目基本运算符
	{
		double a[4] = { 0.0 }, b = 3.0, c = 5.0; //其中a[4] double是双精度浮点型数据类型的数组，数组长度为4，起始下标为0，终止下标为3

		std::cout << "运算前的数值" << std::endl;
		std::cout << "a[0] = " << a[0] << " a[1] = " << a[1]
			<< " a[2] = " << a[2] << " a[3] = " << a[3] << std::endl;
		a[0] = b + c;
		a[1] = b - c;
		a[2] = b * c;
		a[3] = b / c;
		std::cout << "运算后的数值" << std::endl;
		std::cout << "a[0] = " << a[0] << " a[1] = " << a[1]
			<< " a[2] = " << a[2] << " a[3] = " << a[3] << std::endl;//a[0]=8.0	a[1]=-2.0 	a[2]=15.0 a[3]= 0.6
	}

	//三目运算符
	{
		int a[3] = { 1, 2, 3 }; // a[0] = 1, a[1] = 2, a[2] = 3;
		int b = a[0] < 0 ? a[1] : a[2]; // 如果a[0] > 0成立，那么b = a[1],否则 b = a[2];
		std::cout << "a[0] = " << a[0] << " a[1] = " << a[1]
			<< " a[2] = " << a[2] << std::endl;
		std::cout << "b = " << b << std::endl;//b=a[2]=3
	}
}

void learning_logic_operation()
{
	//位运算符
	{
		bool a = true; // true 为 1
		bool b = false; // false 为 0

		bool c[4] = { false }; //c[4] 是bool 类型的数组，数组长度为4，起始下标为0，终止下标为3
		std::cout << "运算前的数值" << std::endl;
		std::cout << "c[0] = " << c[0] << " c[1] = " << c[1]
			<< " c[2] = " << c[2] << " c[3] = " << c[3] << std::endl;
		c[0] = a & b; // & 为按位与操作数：相同，则为1，否则为0
		c[1] = a | b; // | 为按位或操作数：有1，则为1，否则为0
		c[1] = a ^ b; // | 为按位异或操作数：不同，则为1，否则为0
		c[2] = !a; // ! 为非操作数：取反操作
		c[3] = !b; // ! 为非操作数：取反操作
		std::cout << "运算后的数值" << std::endl;
		std::cout << "c[0] = " << c[0] << " c[1] = " << c[1]
			<< " c[2] = " << c[2] << " c[3] = " << c[3] << std::endl;
	}

	//双目逻辑运算符
	{
		bool a = true; // true 为 1
		bool b = false; // false 为 0
		bool c[4] = { false };
		std::cout << "运算前的数值" << std::endl;
		std::cout << "c[0] = " << c[0] << " c[1] = " << c[1]
			<< " c[2] = " << c[2] << " c[3] = " << c[3] << std::endl;//c[0] = 0 c[1] = 0 c[2] = 0 c[3] = 0
		c[0] = a || b; // 或操作符 ：两个操作数有一个为真，则条件为真，否则为假
		c[1] = c && b; // 与操作符 ：两个操作数都为真，则条件为真，否则为假
	}

}

//2019.12.24 重点理解指针和引用（这是C++的一个小难点）
void learning_pointer_and_reference()
{
	//指针
	{
		int  i = 20;   // 实际变量的声明
		int* pi;        // 指针变量的声明

		pi = &i;       // 在指针变量中存储 var 的地址

		std::cout << "i的值是: " << i << std::endl;

		// 输出在指针变量中存储的地址
		std::cout << "pi中存储的地址是: " << pi << std::endl;

		// 访问指针中地址的值
		std::cout << "*pi 地址所指向的数值是: " << *pi << std::endl;
	}

	//引用
	{
		// 声明简单的变量
		int    i = 5;
		double d = 4.0;
		int j = i;
		// 声明引用变量
		int&    r = i; //引用必须初始化（试了解初始化和赋值操作的区别）
		std::cout << "j = " << j << std::endl;
		std::cout << "r = " << r << std::endl;
		i++;
		std::cout << "j = " << j << std::endl;
		std::cout << "r = " << r << std::endl;


		double& s = d;

		i = 5;
		std::cout << "Value of i : " << i << std::endl;
		std::cout << "Value of i reference : " << r << std::endl;

		d = 11.7;
		std::cout << "Value of d : " << d << std::endl;
		std::cout << "Value of d reference : " << s << std::endl;
	}
}

// 2019.12.25
//基本的数据结构
void learning_basic_data_struct()
{
	//数组
	char   ctable[5] = { 'a','b','c','d','e' }; //字符型数组
	int    itable[5] = { 0, 1, 2, 3, 4 }; //整型数组
	float  ftable[5] = { 0.1f, 1.1f, 2.2f, 3.3f, 4.4f }; //单精度数组
	double dtable[5] = { 0.1, 1.1, 2.2, 3.3, 4.4 }; //双精度数组，试体会ftable 和 dtable有何不同

	for (int i = 0; i < 5; ++i)
	{
		std::cout << "ctable[" << i << "] = " << ctable[i]
			<< " itable[" << i << "] = " << itable[i]
			<< " ftable[" << i << "] = " << ftable[i]
			<< " dtable[" << i << "] = " << dtable[i] << std::endl;//ctable[0] = a itable[0] = 0 ftable[0] = 0.1f??????? dtable[0] = 0.1
	}

	const int data_size = 5;
	std::array<char, data_size> arrayChar{ 'a','b','c','d','e' };
	std::array<int, data_size> arrayInt{ 5, 6, 7, 8, 9 };
	std::array<float, data_size> arrayFloat{ 0.1f, 1.1f, 2.2f, 3.3f, 4.4f };
	std::array<double, data_size> arrayDouble{ 0.1, 1.1, 2.2, 3.3, 4.4 };

	//利用at()方法下标访问
	for (size_t i = 0; i < arrayChar.size(); ++i)
	{
		std::cout << "arrayChar[" << i << "] = " << arrayChar.at(i) << std::endl;//string s;s.at(n)表示返回下标为n的元素的引用。
	}

	//利用迭代器访问
	for (std::array<int, data_size>::iterator it = arrayInt.begin(); it != arrayInt.end(); ++it)
	{
		std::cout << "arrayInt[" << (it - arrayInt.begin()) << "] = " << (*it) << std::endl;
	}

	//利用[]方法下标访问
	for (size_t i = 0; i < arrayFloat.size(); ++i)
	{
		std::cout << "arrayFloat[" << i << "] = " << arrayFloat[i] << std::endl;//[]代表的意思就跟at（）一样，是返回（）里面的元素的引用
	}

	//利用auto方法访问 C++ 11
	int idx = 0;
	for (auto &it : arrayDouble)// auto自动类型推断，用于从初始化表达式中推断出变量的数据类型.&it 赋值=arrayDouble
	{
	
		std::cout << "arrayDouble[" << idx << "] = " << it << std::endl;
		idx++;
	}

	//试增加用指针方式访问数组
	for (int i = 0, i<5, i++)
	{
		std::cout << arrayInt["<<i<<"] << arrayInt.at(i) << std:endl

	}
}

//自定义数据结构
struct MyStruct
{
	std::string  name;//姓名
	unsigned int age; //年龄
	bool         bIsmale;//性别
	unsigned int height; //身高
	float        weight; //体重
};

void learning_use_define_struct()
{
	MyStruct mystruct;
	mystruct.name = "Zhang San";
	mystruct.age = 18;
	mystruct.bIsmale = true; 
	mystruct.height = 170;
	mystruct.weight = 56;
	//一个叫 Zhang San 18岁，男性，身高170 体重 56Kg的人定义好了。

	std::cout << "mystruct.name = " << mystruct.name << std::endl;
	std::cout << "mystruct.age = " << mystruct.age << std::endl;
	std::cout << "mystruct.bIsmale = " << mystruct.bIsmale << std::endl;
	std::cout << "mystruct.height = " << mystruct.height << std::endl;
	std::cout << "mystruct.weight = " << mystruct.weight << std::endl;
	MyStruct mystruct
		mystruct.name = "Li Si";
	mystruct.age = 22;
	mystruct.bIsmale = woman;//为什么true是男性啊，不是应该用man和woman定义吗？
	mystruct.height = 170;
	mystruct.weight = 50;

	//试尝试定义另外一个李四的人
	//试尝试定义其他的数据结构，实现自己的定义
}


//2019.12.26
int learning_basic_file_operation(const std::string & save_filename)
{
	//保存日志和读取文件
	//本例子实现写文件的功能 
	std::ofstream outFile;
	outFile.open(save_filename, std::ios::out);//已写模式打开文件
	
	if (!outFile.eof())//如果文件不为空
	{
		outFile << "This is a coding world." << std::endl; //写入文件内容
		outFile << "My study step may be slow, but i will never give up!" << std::endl;//写入文件内容
		outFile.close();//关闭文件
	}
	else //文件为空
	{
		outFile.close();//关闭文件
		return 1;//返回异常值
	}
	return 0;//返回正常值

	//试尝试实现读取文件的功能
	int learning_basic_file_operation(const std::string & save_filename)
	{
		std::ofstream outFile;//outfile是定义的一个文件输出流，就是输出数据到文件里。
		outFile.open(save_filename, std::ios::out);
		if (!outFile.eof())
		{
			outFile << "Hello World" << std::endl;
			outFile << "The class is so difficult" << std::endl;
			outFile.close();
		}
		else
		{
			outFile.close();
			return 1;
		}

		return 0;
		std::ifstream infile;//infile是定义的一个文件输入流，就是要从文件读取数据的。
		infile.open(save_filename, std::ios::in);
		if (!outFile.eof())
		{
			infile << "Hello World" << std::endl;
			infile << "The class is so difficult" << std::endl;
			infile.close();
		}
		else
		{
			infile.cleso();
			return 1;
		}
		return 0;
	}
}

//2019.12.27
void learning_basic_io_stream()
{
	int read_num;
	std::cin >> read_num;//接受键盘输入(整数)
	std::cout << "get input number = " << read_num << std::endl;
	std::string read_str;
	std::cin >> read_str;//接受键盘输入(字符)
	std::cout << "get input string = " << read_str << std::endl; // string 只能接受从开始到第一个不含空格的内容
	float read_float_num;
	std::cin >> read_float_num;//接受键盘输入(小数)
	std::cout << "get input float number = " << read_float_num << std::endl;
}

//2019.12.28 测试calculate类的简单代码
void learing_test_class()
{
	Calculate calc;//申请一个类对象
	double op1 = 4.0;
	double op2 = 5.0;
	
	//测试加法
	double add_result = calc.add(op1, op2);
	std::cout << "op1 + op2 = " << add_result << std::endl;

	//测试除法
	double div_result = calc.div(op1, op2);
	std::cout << "op1 / op2 = " << div_result << std::endl;

}

//2019.12.29
void learing_test_class2()
{
	//浮点型的加法和除法
	{
		Calculate_T<double> cal_t;
		double op1 = 4.0;
		double op2 = 5.0;
		//测试加法
		double add_result = cal_t.add(op1, op2);
		std::cout << "op1 + op2 = " << add_result << std::endl;

		//测试除法
		double div_result = cal_t.div(op1, op2);
		std::cout << "op1 / op2 = " << div_result << std::endl;
	}

	//整型的加法和除法
	{
		Calculate_T<int> cal_t;
		int op1 = 4;
		int op2 = 5;
		//测试加法
		int add_result = cal_t.add(op1, op2);
		std::cout << "op1 + op2 = " << add_result << std::endl;

		//测试除法
		int div_result = cal_t.div(op1, op2);
		std::cout << "op1 / op2 = " << div_result << std::endl;
	}
}


int main()
{
	learning_loop_keywords_9_mul_9();

	learning_inner_data_type();

	learning_inner_data_size();

	learning_condition_keywords();

	learning_loop_keywords();
	
	int ret = test_increase_and_decrease();

	learning_basic_operation();

	learning_logic_operation();

	learning_pointer_and_reference();

	learning_basic_data_struct();

	learning_use_define_struct();

	std::string filename{ "test_write_file.txt" };
	if (!learning_basic_file_operation(filename))//函数调用，将返回值作为判断条件
	{
		std::cout << "文件写入成功！" << std::endl;
	}
	else
	{
		std::cout << "文件写入失败！" << std::endl;
	}

	//learning_basic_io_stream();

	learing_test_class();

	learing_test_class2();

	std::cin.get();//等待键盘输入,目的是可以暂停看到控制台的输出字符


	return 0;
}
