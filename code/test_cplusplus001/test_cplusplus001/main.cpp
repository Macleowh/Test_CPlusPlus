#include <iostream> //#include �ǰ����ļ�����˼  <iostream> ��������������ܼ��̵�����Ϳ���̨��������ܣ�
#include <string> // <string> �ַ�������ļ�
#include <array> //std::array ��׼�� arrayͷ�ļ�
#include <fstream> //std::ofstream std::ifstream �ļ�������

//int main(){ return 0}; 
//main�����ǳ���ִ�е���ڣ�������Ŀֻ����һ��ִ�����


#include "calculate.h" //����Զ���ļ����ࣨ������õ��Ƿ���ʽ���룩

//2019.12.18
void learning_inner_data_type()
{
	std::cout << "BEGIN=============================" << std::endl;
	//�ַ�����
	char ch = 'a';//�����ַ��ͱ���
	unsigned char uch = 'b'; //unsigned�Ƕ�����������char��-128~127,256����������unsigned char��ʾΪ0~255��256����
	signed char sch = 'c';//�з��ŵ�����������Ϊ���������signed charҲΪ-128~127��256����

	//�ַ�������
	std::string str = "this is test string.";//std::����C++�ı�׼�⣻string���ַ�������ļ�

	//��������
	//1 short����
	short sh = 5;//short��ʾ�з��ŵ�������ռ2���ֽڣ���int��һ��
	unsigned short ush = 6; //�޷���short���ͣ�������
	signed short ssh = 7; //�з���short���ͣ�ͬshort

						  //2 int ����
	int i = -80;//int��ʾ�������������ͣ����ͣ�;
	unsigned int ui = 81; //�޷���int����
	signed int ssi = -82; //�з���int����

						  //3 long ����
	long l = -80;//������4���ֽ�
	unsigned long ul = 81; //�޷���long����
	signed long sl = -82;  //�з���long����

						   //������
	float f = 5.0f; //�����ȸ��������ݣ�ֻ����С������ȷ��С�����6λ��

	double d = 8.0; //˫���ȸ��������ݣ�ֻ����С������ȷ��С�����15λ��
	//ָ������
	char* pch = &ch;//char*��ָ�룬ָ���ַ��͵ı�����ch����&��ȡch��������ĵ�ַ
	unsigned char* puch = &uch;//���������ַ���ָ��
	signed char sch2 = '4';//����sch2Ϊ������4 
	signed char *psch = &sch2;//ͬchar*���з��ſ�Ϊ�������͸�����

	//�ַ�������
	std::string str2 = "this is test string.";//std::����C++��׼�⣬string���ַ�������ļ�
	std::string* pstr = &str2;//string*����ָ�ַ������͵ı�����&��ָȡ���str2����ַ��������ĵ�ַ

	//��������
	//1 short����
	short* psh = &sh;//short*��ָ�룬ָ�����������ı�����&��ָȡsh������������ı����ĵ�ַ��8���ֽ�
	unsigned short ush2 = 32;//����ush2Ϊ������32
	unsigned short* push = &ush2; //�޷���short���ͣ�unsigned short*��ָ�룬ָ�������ı���
	signed short ssh2 = 64;//����ssh2Ϊ������64
	signed short* pssh = &ssh2; //�з���short���ͣ�signed short*��ָ�룬ָ�����������ı���

								//2 int ����
	int* pi = &i;//int*��ָ�룬ָ�����������͵ı�����4���ֽڣ�&��ָȡi������������ı����ĵ�ַ
	unsigned int* pui = &ui; //�޷���int���ͣ�unsigned int*��ָ�룬ָ�����������ı���
	signed int* pssi = &ssi; //�з���int���ͣ�signed int*��ָ���������͵ı���

							 //3 long ����
	long* pl = &l;//long* ��ָ�룬ָ�����������͵ı�����8���ֽڣ�&��ָȡl������������ı����ĵ�ַ
	unsigned long* pul = &ul; //�޷���long����unsigned long*��ָ�룬ָ���������ı���
	signed long* psl = &sl;  //�з���long����signed long*��ָ�룬ָ�����������ı���

							 //������
	float* pf = &f; //�����ȸ��������ݣ�float*��ָ�룬ָ��С���ı���

	double* pd = &d; //˫���ȸ���������double*��ָ��С���ı���

	std::cout << "END=============================" << std::endl;
}

//2019.12.19
void learning_inner_data_size()
{
	std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
	std::cout << "sizeof(unsigned char) = " << sizeof(unsigned char) << std::endl;
	std::cout << "sizeof(signed char) = " << sizeof(signed char) << std::endl;

	//�ַ�������
	std::string str = "this is test string.";
	std::cout << "sizeof(str) = " << sizeof(str) << std::endl;

	//��������
	//1 short����
	std::cout << "sizeof(short) = " << sizeof(short) << std::endl;
	std::cout << "sizeof(unsigned short) = " << sizeof(unsigned short) << std::endl;
	std::cout << "sizeof(signed short) = " << sizeof(unsigned short) << std::endl;

    //2 int ����
	std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
	std::cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << std::endl;
	std::cout << "sizeof(signed int) = " << sizeof(unsigned int) << std::endl;

	//3 long ����
	std::cout << "sizeof(long) = " << sizeof(long) << std::endl;
	std::cout << "sizeof(unsigned long) = " << sizeof(unsigned long) << std::endl;
	std::cout << "sizeof(signed long) = " << sizeof(unsigned long) << std::endl;

	std::cout << "sizeof(float) = " << sizeof(float) << std::endl;
	std::cout << "sizeof(double) = " << sizeof(double) << std::endl;

	//ָ������

	std::cout << "sizeof(char*) = " << sizeof(char*) << std::endl;
	std::cout << "sizeof(unsigned char*) = " << sizeof(unsigned char*) << std::endl;
	std::cout << "sizeof(signed char*) = " << sizeof(unsigned char*) << std::endl;

	//�ַ�������
	std::cout << "sizeof(pstr*) = " << sizeof(std::string*) << std::endl;
	//��������
	//1 short����
	std::cout << "sizeof(short*) = " << sizeof(short*) << std::endl;
	std::cout << "sizeof(unsigned short*) = " << sizeof(unsigned short*) << std::endl;
	std::cout << "sizeof(signed short*) = " << sizeof(signed short*) << std::endl;
	
	//2 int ����
	std::cout << "sizeof(int*) = " << sizeof(int*) << std::endl;
	std::cout << "sizeof(unsigned int*) = " << sizeof(unsigned int*) << std::endl;
	std::cout << "sizeof(signed int*) = " << sizeof(unsigned int*) << std::endl;

	//3 long ����
	std::cout << "sizeof(long*) = " << sizeof(long*) << std::endl;
	std::cout << "sizeof(unsigned long*) = " << sizeof(unsigned long*) << std::endl;
	std::cout << "sizeof(signed long*) = " << sizeof(signed long*) << std::endl;

	//������
	std::cout << "sizeof(float*) = " << sizeof(float*) << std::endl;
	std::cout << "sizeof(double*) = " << sizeof(double*) << std::endl;
}

//2019.12.20
void learning_condition_keywords()
{
	//��C++�����л������е���,�����ڣ����ڣ�С�ڣ����ڵ��ڣ�С�ڵ��ڣ��߼��жϣ�
	//��Ȼ���в����ж�

	//�Ⱦ�һЩ���������Ӱ�����⣬��ʵ����Ҳ��һ��
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

	if ('a' > 'b') // 'a' �� 'b' �����ַ�������
	{
		std::cout << "true condition." << std::endl;
	}
	else
	{
		std::cout << "false condition." << std::endl;
	}

	if ('1' > '2') // 'a' �� 'b' �����ַ�������
	{
		std::cout << "true condition." << std::endl;
	}
	else
	{
		std::cout << "false condition." << std::endl;
	}

	//����������
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
	//C++��ѭ������ִ��������������ֱ��ǣ�for��while��do-while

	//forѭ��
	for (int i = 0; i < 10; i++)// ���� i++ ��Ч�� i = i + 1;
	{
		std::cout << "i = " << i << std::endl;
	}

	//whileѭ��
	{
		int i = 0;
		while (i < 10)
		{
			std::cout << "i = " << i << std::endl;
			i++;
		}
	}

	//do-whileѭ��
	{
		int i = 0;
		do
		{
			std::cout << "i = " << i << std::endl;
			i++;
		} while (i < 10);
	}

	//�����������ѭ���ж�������ִ�з�ʽ�Ĳ�ͬ��

	//���˽� i++ ++i --i i-- �����ֲ����Ľ���Ĳ�ͬ��
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

	/*for (int i=1;i<10;i++ )//����i=1<10��ʼ����ͣ���
	{
		for (int j = 1;j<=i;j++)//���������forѭ����j=1��ͣ��1��ֱ������iΪֹ
		{
			std::cout << i << "*" << j << " = " << i*j << " ";
			//std::cout << "i = " << i << " j = " << j  << " i * j = " << i*j << std::endl;
		}
		std::cout << std::endl;
	}
	*/


/*	for (int i = 9; i>0; i--)    //���𣬴�9*1��ʼ��i=9��j=1
	{
		for (int j = 1; j <= i; j++)//����j��1��ʼ�ӣ�ֱ������iΪֹ��Ȼ�����
		{
			std::cout << i << "*" << j << " = " << i*j << " ";
			//std::cout << "i = " << i << " j = " << j  << " i * j = " << i*j << std::endl;
		}
		std::cout << std::endl;//���У������ڶ���
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
	//˫Ŀ���������
	{
		double a[4] = { 0.0 }, b = 3.0, c = 5.0; //����a[4] double��˫���ȸ������������͵����飬���鳤��Ϊ4����ʼ�±�Ϊ0����ֹ�±�Ϊ3

		std::cout << "����ǰ����ֵ" << std::endl;
		std::cout << "a[0] = " << a[0] << " a[1] = " << a[1]
			<< " a[2] = " << a[2] << " a[3] = " << a[3] << std::endl;
		a[0] = b + c;
		a[1] = b - c;
		a[2] = b * c;
		a[3] = b / c;
		std::cout << "��������ֵ" << std::endl;
		std::cout << "a[0] = " << a[0] << " a[1] = " << a[1]
			<< " a[2] = " << a[2] << " a[3] = " << a[3] << std::endl;//a[0]=8.0	a[1]=-2.0 	a[2]=15.0 a[3]= 0.6
	}

	//��Ŀ�����
	{
		int a[3] = { 1, 2, 3 }; // a[0] = 1, a[1] = 2, a[2] = 3;
		int b = a[0] < 0 ? a[1] : a[2]; // ���a[0] > 0��������ôb = a[1],���� b = a[2];
		std::cout << "a[0] = " << a[0] << " a[1] = " << a[1]
			<< " a[2] = " << a[2] << std::endl;
		std::cout << "b = " << b << std::endl;//b=a[2]=3
	}
}

void learning_logic_operation()
{
	//λ�����
	{
		bool a = true; // true Ϊ 1
		bool b = false; // false Ϊ 0

		bool c[4] = { false }; //c[4] ��bool ���͵����飬���鳤��Ϊ4����ʼ�±�Ϊ0����ֹ�±�Ϊ3
		std::cout << "����ǰ����ֵ" << std::endl;
		std::cout << "c[0] = " << c[0] << " c[1] = " << c[1]
			<< " c[2] = " << c[2] << " c[3] = " << c[3] << std::endl;
		c[0] = a & b; // & Ϊ��λ�����������ͬ����Ϊ1������Ϊ0
		c[1] = a | b; // | Ϊ��λ�����������1����Ϊ1������Ϊ0
		c[1] = a ^ b; // | Ϊ��λ������������ͬ����Ϊ1������Ϊ0
		c[2] = !a; // ! Ϊ�ǲ�������ȡ������
		c[3] = !b; // ! Ϊ�ǲ�������ȡ������
		std::cout << "��������ֵ" << std::endl;
		std::cout << "c[0] = " << c[0] << " c[1] = " << c[1]
			<< " c[2] = " << c[2] << " c[3] = " << c[3] << std::endl;
	}

	//˫Ŀ�߼������
	{
		bool a = true; // true Ϊ 1
		bool b = false; // false Ϊ 0
		bool c[4] = { false };
		std::cout << "����ǰ����ֵ" << std::endl;
		std::cout << "c[0] = " << c[0] << " c[1] = " << c[1]
			<< " c[2] = " << c[2] << " c[3] = " << c[3] << std::endl;//c[0] = 0 c[1] = 0 c[2] = 0 c[3] = 0
		c[0] = a || b; // ������� ��������������һ��Ϊ�棬������Ϊ�棬����Ϊ��
		c[1] = c && b; // ������� ��������������Ϊ�棬������Ϊ�棬����Ϊ��
	}

}

//2019.12.24 �ص����ָ������ã�����C++��һ��С�ѵ㣩
void learning_pointer_and_reference()
{
	//ָ��
	{
		int  i = 20;   // ʵ�ʱ���������
		int* pi;        // ָ�����������

		pi = &i;       // ��ָ������д洢 var �ĵ�ַ

		std::cout << "i��ֵ��: " << i << std::endl;

		// �����ָ������д洢�ĵ�ַ
		std::cout << "pi�д洢�ĵ�ַ��: " << pi << std::endl;

		// ����ָ���е�ַ��ֵ
		std::cout << "*pi ��ַ��ָ�����ֵ��: " << *pi << std::endl;
	}

	//����
	{
		// �����򵥵ı���
		int    i = 5;
		double d = 4.0;
		int j = i;
		// �������ñ���
		int&    r = i; //���ñ����ʼ�������˽��ʼ���͸�ֵ����������
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
//���������ݽṹ
void learning_basic_data_struct()
{
	//����
	char   ctable[5] = { 'a','b','c','d','e' }; //�ַ�������
	int    itable[5] = { 0, 1, 2, 3, 4 }; //��������
	float  ftable[5] = { 0.1f, 1.1f, 2.2f, 3.3f, 4.4f }; //����������
	double dtable[5] = { 0.1, 1.1, 2.2, 3.3, 4.4 }; //˫�������飬�����ftable �� dtable�кβ�ͬ

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

	//����at()�����±����
	for (size_t i = 0; i < arrayChar.size(); ++i)
	{
		std::cout << "arrayChar[" << i << "] = " << arrayChar.at(i) << std::endl;//string s;s.at(n)��ʾ�����±�Ϊn��Ԫ�ص����á�
	}

	//���õ���������
	for (std::array<int, data_size>::iterator it = arrayInt.begin(); it != arrayInt.end(); ++it)
	{
		std::cout << "arrayInt[" << (it - arrayInt.begin()) << "] = " << (*it) << std::endl;
	}

	//����[]�����±����
	for (size_t i = 0; i < arrayFloat.size(); ++i)
	{
		std::cout << "arrayFloat[" << i << "] = " << arrayFloat[i] << std::endl;//[]�������˼�͸�at����һ�����Ƿ��أ��������Ԫ�ص�����
	}

	//����auto�������� C++ 11
	int idx = 0;
	for (auto &it : arrayDouble)// auto�Զ������ƶϣ����ڴӳ�ʼ�����ʽ���ƶϳ���������������.&it ��ֵ=arrayDouble
	{
	
		std::cout << "arrayDouble[" << idx << "] = " << it << std::endl;
		idx++;
	}

	//��������ָ�뷽ʽ��������
	for (int i = 0, i<5, i++)
	{
		std::cout << arrayInt["<<i<<"] << arrayInt.at(i) << std:endl

	}
}

//�Զ������ݽṹ
struct MyStruct
{
	std::string  name;//����
	unsigned int age; //����
	bool         bIsmale;//�Ա�
	unsigned int height; //���
	float        weight; //����
};

void learning_use_define_struct()
{
	MyStruct mystruct;
	mystruct.name = "Zhang San";
	mystruct.age = 18;
	mystruct.bIsmale = true; 
	mystruct.height = 170;
	mystruct.weight = 56;
	//һ���� Zhang San 18�꣬���ԣ����170 ���� 56Kg���˶�����ˡ�

	std::cout << "mystruct.name = " << mystruct.name << std::endl;
	std::cout << "mystruct.age = " << mystruct.age << std::endl;
	std::cout << "mystruct.bIsmale = " << mystruct.bIsmale << std::endl;
	std::cout << "mystruct.height = " << mystruct.height << std::endl;
	std::cout << "mystruct.weight = " << mystruct.weight << std::endl;
	MyStruct mystruct
		mystruct.name = "Li Si";
	mystruct.age = 22;
	mystruct.bIsmale = woman;//Ϊʲôtrue�����԰�������Ӧ����man��woman������
	mystruct.height = 170;
	mystruct.weight = 50;

	//�Գ��Զ�������һ�����ĵ���
	//�Գ��Զ������������ݽṹ��ʵ���Լ��Ķ���
}


//2019.12.26
int learning_basic_file_operation(const std::string & save_filename)
{
	//������־�Ͷ�ȡ�ļ�
	//������ʵ��д�ļ��Ĺ��� 
	std::ofstream outFile;
	outFile.open(save_filename, std::ios::out);//��дģʽ���ļ�
	
	if (!outFile.eof())//����ļ���Ϊ��
	{
		outFile << "This is a coding world." << std::endl; //д���ļ�����
		outFile << "My study step may be slow, but i will never give up!" << std::endl;//д���ļ�����
		outFile.close();//�ر��ļ�
	}
	else //�ļ�Ϊ��
	{
		outFile.close();//�ر��ļ�
		return 1;//�����쳣ֵ
	}
	return 0;//��������ֵ

	//�Գ���ʵ�ֶ�ȡ�ļ��Ĺ���
	int learning_basic_file_operation(const std::string & save_filename)
	{
		std::ofstream outFile;//outfile�Ƕ����һ���ļ������������������ݵ��ļ��
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
		std::ifstream infile;//infile�Ƕ����һ���ļ�������������Ҫ���ļ���ȡ���ݵġ�
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
	std::cin >> read_num;//���ܼ�������(����)
	std::cout << "get input number = " << read_num << std::endl;
	std::string read_str;
	std::cin >> read_str;//���ܼ�������(�ַ�)
	std::cout << "get input string = " << read_str << std::endl; // string ֻ�ܽ��ܴӿ�ʼ����һ�������ո������
	float read_float_num;
	std::cin >> read_float_num;//���ܼ�������(С��)
	std::cout << "get input float number = " << read_float_num << std::endl;
}

//2019.12.28 ����calculate��ļ򵥴���
void learing_test_class()
{
	Calculate calc;//����һ�������
	double op1 = 4.0;
	double op2 = 5.0;
	
	//���Լӷ�
	double add_result = calc.add(op1, op2);
	std::cout << "op1 + op2 = " << add_result << std::endl;

	//���Գ���
	double div_result = calc.div(op1, op2);
	std::cout << "op1 / op2 = " << div_result << std::endl;

}

//2019.12.29
void learing_test_class2()
{
	//�����͵ļӷ��ͳ���
	{
		Calculate_T<double> cal_t;
		double op1 = 4.0;
		double op2 = 5.0;
		//���Լӷ�
		double add_result = cal_t.add(op1, op2);
		std::cout << "op1 + op2 = " << add_result << std::endl;

		//���Գ���
		double div_result = cal_t.div(op1, op2);
		std::cout << "op1 / op2 = " << div_result << std::endl;
	}

	//���͵ļӷ��ͳ���
	{
		Calculate_T<int> cal_t;
		int op1 = 4;
		int op2 = 5;
		//���Լӷ�
		int add_result = cal_t.add(op1, op2);
		std::cout << "op1 + op2 = " << add_result << std::endl;

		//���Գ���
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
	if (!learning_basic_file_operation(filename))//�������ã�������ֵ��Ϊ�ж�����
	{
		std::cout << "�ļ�д��ɹ���" << std::endl;
	}
	else
	{
		std::cout << "�ļ�д��ʧ�ܣ�" << std::endl;
	}

	//learning_basic_io_stream();

	learing_test_class();

	learing_test_class2();

	std::cin.get();//�ȴ���������,Ŀ���ǿ�����ͣ��������̨������ַ�


	return 0;
}
