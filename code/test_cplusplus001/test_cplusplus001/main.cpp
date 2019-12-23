#include <iostream> //#include 是包含文件的意思  <iostream> 输入输出流（接受键盘的输入和控制台的输出功能）
#include <string> // <string> 字符串相关文件

//int main(){ return 0}; 
//main函数是程序执行的入口，整个项目只有这一个执行入口


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
		std::cout << "1 is false condition." << std::endl;
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

int test_increase_and_decrease()
{
	//i++
	{
		int i = 0, j = 0;
		j = i++;
		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
	}
	
	//++i
	{
		int i = 0, j = 0;
		j = ++i;
		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
	}
	
	//i--
	{
		int i = 0, j = 0;
		j = i--;
		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
	}
	
	//--i
	{
		int i = 0, j = 0;
		j = --i;
		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
	}
	
	return 0;
}

//2019.12.23
void learing_basic_operation()
{
	//双目基本运算符
	{
		int a[4] = { 0 }, b = 3, c = 5; //其中a[4] 是int类型的数组，数组长度为4，起始下标为0，终止下标为3

		std::cout << "运算前的数值" << std::endl;
		std::cout << "a[0] = " << a[0] << " a[1] = " << a[1]
			<< " a[2] = " << a[2] << " a[3] = " << a[3] << std::endl;
		a[0] = b + c;
		a[1] = b - c;
		a[2] = b * c;
		a[3] = b / c;
		std::cout << "运算后的数值" << std::endl;
		std::cout << "a[0] = " << a[0] << " a[1] = " << a[1]
			<< " a[2] = " << a[2] << "a[3] = " << a[3] << std::endl;
	}

	//三目运算符
	{
		int a[3] = { 1, 2, 3 }; // a[0] = 1, a[1] = 2, a[2] = 3;
		int b = a[0] > 0 ? a[1] : a[2]; // 如果a[0] > 0成立，那么b = a[1],否则 b = a[2];
		std::cout << "a[0] = " << a[0] << " a[1] = " << a[1]
			<< " a[2] = " << a[2] << std::endl;
		std::cout << "b = " << b << std::endl;
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
			<< " c[2] = " << c[2] << " c[3] = " << c[3] << std::endl;
		c[0] = a || b; // 或操作符 ：两个操作数有一个为真，则条件为真，否则为假
		c[1] = c && b; // 与操作符 ：两个操作数都为真，则条件为真，否则为假
	}

}

int main()
{
	learning_inner_data_type();

	learning_inner_data_size();

	learning_condition_keywords();

	learning_loop_keywords();
	
	int ret = test_increase_and_decrease();

	learing_basic_operation();

	learning_logic_operation();

	std::cin.get();//等待键盘输入,目的是可以暂停看到控制台的输出字符

	return 0;
}