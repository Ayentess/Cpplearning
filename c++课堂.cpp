//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//
//    system("pause");
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int fact(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return fact(n - 1) + fact(n - 2);
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int s=fact(n);
//	cout << "n的斐波那契数列是:" << s << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
////使用按值传递的方法将两变量值对换
//void swapbyValue(int a, int b)
//{
//	int t;
//	t = a;
//	a = b;
//	b = t;
//}
//
////使用按地址传递的方法将两变量值对换
//void swapbyAddress(int* a, int* b)
//{
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//
////使用按引用传递的方法将两变量值对换
//void swapbyQuote(int& a, int& b)
//{
//	int t;
//	//这里访问与修改的是实际参数本身，而不是实际参数的一个副本
//	t = a;
//	a = b;
//	b = t;
//}
//
//int main()
//{
//	int x, y;
//	x = 66;
//	y = 98;
//	swapbyValue(x, y);
//	cout << "x=" << x << "   y=" << y << endl;
//	swapbyAddress(&x, &y);
//	cout << "x=" << x << "   y=" << y << endl;
//	swapbyQuote(x, y);
//	cout << "x=" << x << "   y=" << y << endl;
//	return(0);
//}

//#include<iostream>
//using namespace std;
//int min(int a, int b, int c)
//{
//	int k;
//	k = (a < b) ? a : b;
//	k = (k < c) ? k : c;
//	return k;
//}
//int min(int a, int b)
//{
//	int k;
//	k = (a < b) ? a : b;
//	return k;
//}
//int main()
//{
//	int x, y, z, m;
//	cout << "请输入三个整数：";
//	cin >> x >> y >> z;
//	m = min(x, y, z);
//	cout << "最小的数是：" << m << "\n";
//	cout << "请输入两个整数：";
//	cin >> x >> y;
//	m = min(x, y);
//	cout << "最小的数是：" << m << "\n";
//	return(0);
//}

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//double get_area(double x, double y)//矩形
//{
//	double area;
//	area = x * y;
//	return area;
//}
//
//double get_area(double x)//圆形
//{
//	double area;
//	area = 3.1415926*x*x;
//	return area;
//}
//
//double get_area(double x,double y,double z)//三角形
//{
//	double area;
//	double p;
//    p = (x + y + z) / 2;
//    area = sqrt(p*(p - x)*(p - y)*(p - z));
//	return area;
//}
//
//int main()
//{
//	double x1, y1;
//    cout << "请输入矩形的长和宽：";
//    cin >> x1 >> y1;
//    cout << "矩形的面积是：" << get_area(x1, y1) << "\n";
//	
//	double x2;
//	cout<<"请输入圆形的半径：";
//    cin >> x2;
//    cout << "圆形的面积是：" << get_area(x2) << "\n";
//
//    double x3, y3, z3;
//    cout << "请输入三角形的三边：";
//    cin >> x3 >> y3 >> z3;
//    cout << "三角形的面积是：" << get_area(x3, y3, z3) << "\n";
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//template<class T>
//
//T MAX(T a, T b)
//{
//    return a > b ? a : b;
//}
//
//int main()
//{
//    int x1, y1;
//    cout<<"请输入两个整数："<<endl;
//    cin >> x1 >> y1;
//    cout << "较大的数是：" << MAX(x1, y1) << "\n";
//
//    double x2, y2;
//    cout << "请输入两个浮点数：" << endl;
//    cin >> x1 >> y1;
//    cout << "较大的数是：" << MAX(x1, y1) << "\n";
//	system("pause");
//    return 0;
//}

//#include<iostream>
//#include<conio.h>      //getch()要用到此头文件
//#include<stdlib.h>     //system("cls")清屏函数用到此头文件
//#include<string.h>
//using namespace std;
////定义一个账户结构体
//struct Account
//{
//	char mName[10];
//	long mSN;
//	float mBalance;
//};
////开户
//void getAcc(struct Account* p)
//{
//	cout << "请输入姓名、帐号、存入钱数：" << endl;
//	cout << "姓名：";
//	cin >> p->mName;
//	cout << "帐号：";
//	cin >> p->mSN;
//	cout << "存入钱数：";
//	cin >> p->mBalance;
//}
////往账户中存款，存款金额为amount
//void deposit(struct Account* p)
//{
//	float amount;
//	cout << "存款金额：";
//	cin >> amount;
//	p->mBalance = p->mBalance + amount;
//}
////从账户中取款，取款金额为amount(请考虑透支情况)
//void withdraw(struct Account* p)
//{
//	double amount;
//	cout << "取款金额：";
//	cin>>amount;
//	double Balance=p->mBalance-amount;
//    if (Balance<0)
//	{
//		cout << "您的账户已被透支！" << endl;
//	}
//	else
//	{
//		p->mBalance = Balance;
//		cout << "取款成功！" << endl;
//		cout << "您的余额为：" << p->mBalance << endl;
//	}
//	_getch();
//}
////*****查询帐户当前余额*****
//void getBalance(struct Account* p)
//{
//    cout << "您的余额为：" << p->mBalance << endl;
//	_getch();
//}
////主菜单
//void menu(void)
//{
//	system("cls");      //清屏
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "       简易银行帐户系统" << endl << endl;
//	cout << "1:开户" << endl;
//	cout << "2:存款 " << endl;
//	cout << "3:取款" << endl;
//	cout << "4:查询余额 " << endl;
//	cout << "5:退出 " << endl << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << endl << endl << endl;
//}
////主函数
//int main()
//{
//	int cho;
//	struct Account p;     //定义一个银行账户结构体变量
//	while (1)
//	{
//		menu();
//		do
//		{
//			cout << "please input selection:" << endl;
//			cin >> cho;
//		} while (cho < 1 || cho>5);
//		switch (cho)
//		{
//		case 1:	getAcc(&p);
//			break;
//		case 2:	deposit(&p);
//			break;
//		case 3: withdraw(&p);
//			break;
//		case 4: getBalance(&p);
//			break;
//		case 5:	return 0;
//		default: cout << "无效输入！"; _getch();
//		}
//	}
//	return(0);
//}
//



//#include<iostream>
//using namespace std;
//
//class Complex
//{
//public:
//	Complex(double real, double imag);
//
//	void getAdd(double a, double b);
//
//	void getSub(double a, double b);
//
//	void getDiv(double a, double b);
//
//	void getMul(double a, double b);
//
//	~Complex();
//
//private:
//	double m_real;
//	double m_imag;
//};
//
//Complex::Complex(double real, double imag)
//{
//    m_real = real;
//    m_imag = imag;
//}
//
//Complex::~Complex()
//{
//	cout << "调用析构函数" << endl;
//}
//
////加法
//void Complex::getAdd(double a, double b)
//{
//	double real = m_real+a;
//    double imag = m_imag+b;
//	cout << real <<"+" << imag<< "i"<<endl;
//}
////减法
//void Complex::getSub(double a, double b)
//{
//	double real = m_real - a;
//	double imag = m_imag - b;
//	cout << real << "+" << imag << "i" << endl;
//}
////除法
//void Complex::getDiv(double a, double b)
//{
//	double d= a * a + b * b;
//	if (d == 0)
//	{
//        cout << "除数不能为0" << endl;
//        return;
//	}
//	double real = (m_real*a + m_imag*b)/d;
//	double imag = (m_real*b - m_imag*a)/d;
//	cout << real << "+" << imag << "i" << endl;
//}
////乘法
//void Complex::getMul(double a, double b)
//{
//	double real = m_real * a - m_imag * b;
//	double imag = m_real * b + m_imag * a;
//	cout << real << "+" << imag << "i" << endl;
//}
//
//int main()
//{
//    double a1, b1;
//	cout << "请输入第一个复数的实部与虚部：" << endl;
//	cin >> a1 >> b1;
//	Complex c1(a1, b1);
//
//	double a2, b2;
//	cout << "请输入第二个复数的实部与虚部：" << endl;
//	cin >> a2 >> b2;
//	Complex c2(a2, b2);
//
//	cout << "加法结果：";
//	c1.getAdd(a2, b2);
//
//	cout << "减法结果：";
//	c1.getSub(a2, b2);
//
//	cout << "乘法结果：";
//	c1.getMul(a2, b2);
//
//	cout << "除法结果：";
//	c1.getDiv(a2, b2);
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Birth
//{
//public:
//	Birth();
//
//    void SetBirth();
//
//    Birth(Birth& birth);
//
//    void ShowBirth();
//
//    ~Birth();
//
//private:
//	int m_year;
//    int m_month;
//    int m_day;
//};
//
//Birth::Birth()
//{
//    cout << "调用Birth构造函数" << endl;
//}
//
//void Birth::SetBirth()
//{
//    cout << "请输入出生日期：" << endl;
//    cin >> m_year >> m_month >> m_day;
//}
//
//Birth::Birth(Birth& birth)
//{
//    m_year = birth.m_year;
//    m_month = birth.m_month;
//    m_day = birth.m_day;
//    cout << "调用Birth拷贝构造函数" << endl;
//}
//
//void Birth::ShowBirth()
//{
//    cout << m_year << "-" << m_month << "-" << m_day << endl;
//}
//
//Birth::~Birth()
//{
//    cout << "调用Birth析构函数" << endl;
//}
//
//
//class Student
//{
//public:
//	Student();
//
//	Student(Student& stu);
//
//    void ShowStudent();
//
//	~Student();
//
//private:
//	string m_name;
//    int m_age;
//    string m_sex;
//    string m_id;
//    Birth m_birth;
//};
//
//Student::Student()
//{
//    cout << "学号：" << endl;
//    cin>> m_id;
//    cout << "姓名：" << endl;
//    cin >> m_name;
//    cout << "年龄：" << endl;
//    cin >> m_age;
//    cout << "性别：" << endl;
//    cin >> m_sex;
//    m_birth.SetBirth();
//    cout << "调用Student构造函数" << endl;
//}
//
//Student::Student(Student& stu):m_birth(stu.m_birth)
//{
//	m_name = stu.m_name;
//    m_age = stu.m_age;
//    m_sex = stu.m_sex;
//    m_id = stu.m_id;
//    cout << "调用Student拷贝构造函数" << endl;
//}
//
//void Student::ShowStudent()
//{
//    cout << "学号：" << m_id << endl;
//    cout << "姓名：" << m_name << endl;
//    cout << "年龄：" << m_age << endl;
//    cout << "性别：" << m_sex << endl;
//    cout << "出生日期："<< endl;
//    m_birth.ShowBirth();
//}
//
//Student::~Student()
//{
//    cout << "调用Student析构函数" << endl;
//}
//
//int main()
//{
//    Student s1;
//    s1.ShowStudent();
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Complex
//{
//public:
//	Complex(double real, double imag);
//
//	void judge(double real,double imag);
//
//	void getAdd(double a, double b);
//
//	void getSub(double a, double b);
//
//	void getDiv(double a, double b);
//
//	void getMul(double a, double b);
//
//	~Complex();
//
//private:
//	double m_real;
//	double m_imag;
//};
//
//Complex::Complex(double real, double imag)
//{
//	m_real = real;
//	m_imag = imag;
//}
//
//Complex::~Complex()
//{
//	cout << "调用析构函数" << endl;
//}
//
////判断
//void Complex::judge(double real, double imag)
//{
//	if (real == 0 && imag == 0)
//	{
//		cout << "0" << endl;
//	}
//	else if (real == 0)
//	{
//		cout << imag << "i" << endl;
//	}
//	else if (imag == 0)
//	{
//		cout << real << endl;
//	}
//	else if (imag < 0)
//	{
//		cout << real << imag << "i" << endl;
//	}
//	else
//	{
//		cout << real << "+" << imag << "i" << endl;
//	}
//}
//
////加法
//void Complex::getAdd(double a, double b)
//{
//	double real = m_real + a;
//	double imag = m_imag + b;
//    judge(real, imag);
//}
////减法
//void Complex::getSub(double a, double b)
//{
//	double real = m_real - a;
//	double imag = m_imag - b;
//    judge(real, imag);
//}
////除法
//void Complex::getDiv(double a, double b)
//{
//	double d = a * a + b * b;
//	if (d == 0)
//	{
//		cout << "除数不能为0" << endl;
//		return;
//	}
//	double real = (m_real * a + m_imag * b) / d;
//	double imag = (m_real * b - m_imag * a) / d;
//    judge(real, imag);
//}
////乘法
//void Complex::getMul(double a, double b)
//{
//	double real = m_real * a - m_imag * b;
//	double imag = m_real * b + m_imag * a;
//    judge(real, imag);
//}
//
//int main()
//{
//	double a1, b1;
//	cout << "请输入第一个复数的实部与虚部：" << endl;
//	cin >> a1 >> b1;
//	Complex c1(a1, b1);
//
//	double a2, b2;
//	cout << "请输入第二个复数的实部与虚部：" << endl;
//	cin >> a2 >> b2;
//	Complex c2(a2, b2);
//
//	cout << "加法结果：";
//	c1.getAdd(a2, b2);
//
//	cout << "减法结果：";
//	c1.getSub(a2, b2);
//
//	cout << "乘法结果：";
//	c1.getMul(a2, b2);
//
//	cout << "除法结果：";
//	c1.getDiv(a2, b2);
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Account
//{
//public:
//	Account(char name[], long num, float amount);   //类的有参构造函数
//	Account();						//类的无参构造函数
//	void deposit(float amount); 	//往账户中存款
//	int withdraw(float amount); 	//从账户中取款
//	float getBalance();  			//查询余额
//private:
//	char mName[20];      			//银行账户的户名
//	long mSN;            				//本账户的帐号
//	float mBalance;      			//本账户当前的余额
//};
////有参构造函数的实现
//Account::Account(char name[], long num, float amount)
//{
//	strcpy(mName, name);
//	mSN = num;
//	mBalance = amount;
//}
////类的无参构造函数
//Account::Account()
//{
//	mName="未知";
//	mSN = 0;
//	mBalance = 0;
//	//无参构造没有参数传入，在函数内自定义进行初始化，将姓名定为未知，账号和余额定为0；
//}
////存款
//void Account::deposit(float amount)
//{
//	mBalance = mBalance + amount;
//}
////取款，考虑透支情况
//int Account::withdraw(float amount)
//{
//	mBalance = mBalance - amount;
//	if (mBalance < 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//	//计算余额，返回Balance的值，通过条件判断是否透支
//}
////查询余额
//float Account::getBalance()
//{
//	return mBalance;
//	//直接返回余额
//}
////主菜单
//void menu(void)
//{
//	system("cls");       //清屏
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "       简单银行帐户系统" << endl << endl;
//	cout << "1.存款 " << endl;
//	cout << "2:取款" << endl;
//	cout << "3:查询余额 " << endl;
//	cout << "4:退出 " << endl << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << endl << endl << endl;
//}
//int main()
//{
//	int cho, m;
//	char name[20];
//	long num;
//	float amount;
//	cout << "请输入开户信息：" << endl << endl;
//	cout << "姓名：";
//	cin >> name;
//	cout << "帐号：";
//	cin >> num;
//	cout << "存款金额：";
//	cin >> amount;
//	Account p(name, num, amount);     //定义银行账户类对象
//	while (1)
//	{
//		menu();
//		do
//		{
//			cout << "请输入选择:" << endl;
//			cin >> cho;
//		} while (cho < 1 || cho>4);
//		switch (cho)
//		{
//		case 1:	cout << "存款金额：";
//			cin >> amount;
//			p.deposit(amount);
//			break;
//		case 2: cout << "取款金额：";
//			cin >> amount;
//			m = p.withdraw(amount);
//			if (m == 0)
//				cout << "透支！" << endl;
//			else
//				cout << "取款成功！" << endl;
//			break;
//		case 3: cout << "余额为：" << p.getBalance() << endl;
//			break;
//		case 4:	return 0;
//		}
//		cout << endl << "敲回车继续!" << endl;
//		cin.sync();   //清空输入缓冲区的内容  
//		getchar();    //从指定的输入流中提取一个字符，防止屏幕一闪而过
//	}
//}

//#include<iostream>
//using namespace std;
//#include<string>
//
//class Birth
//{
//public:
//    Birth();
//
//    void SetBirth();
//
//    Birth(Birth& birth);
//
//    void ShowBirth();
//
//    ~Birth();
//
//private:
//    int m_year;
//    int m_month;
//    int m_day;
//};
//
//Birth::Birth()
//{
//    cout << "调用Birth构造函数" << endl;
//}
//
//void Birth::SetBirth()
//{
//    cout << "请输入出生日期：" << endl;
//    cin >> m_year >> m_month >> m_day;
//    if (m_year < 0 || m_month < 0 || m_month > 12 || m_day < 0 || m_day > 31)
//    {
//        cout << "输入有误，请重新输入！" << endl;
//        SetBirth();
//    }
//}
//
//Birth::Birth(Birth& birth)
//{
//    m_year = birth.m_year;
//    m_month = birth.m_month;
//    m_day = birth.m_day;
//    cout << "调用Birth拷贝构造函数" << endl;
//}
//
//void Birth::ShowBirth()
//{
//    cout << m_year << "-" << m_month << "-" << m_day << endl;
//}
//
//Birth::~Birth()
//{
//    cout << "调用Birth析构函数" << endl;
//}
//
//
//class Student
//{
//public:
//    Student();
//
//    Student(Student& stu);
//
//    void ShowStudent();
//
//    ~Student();
//
//private:
//    string m_name;
//    int m_age;
//    string m_sex;
//    string m_id;
//    string m_ID;
//    Birth m_birth;
//};
//
//Student::Student()
//{
//    cout << "学号：" << endl;
//    cin >> m_id;
//    cout << "姓名：" << endl;
//    cin >> m_name;
//    cout << "身份证号：" << endl;
//    cin>> m_ID;
//    cout << "年龄：" << endl;
//    cin >> m_age;
//    cout << "性别：" << endl;
//    cin >> m_sex;
//    m_birth.SetBirth();
//    cout << "调用Student构造函数" << endl;
//}
//
//Student::Student(Student& stu) :m_birth(stu.m_birth)
//{
//    m_name = stu.m_name;
//    m_age = stu.m_age;
//    m_sex = stu.m_sex;
//    m_id = stu.m_id;
//    cout << "调用Student拷贝构造函数" << endl;
//}
//
//void Student::ShowStudent()
//{
//    cout << "学号：" << m_id << endl;
//    cout << "姓名：" << m_name << endl;
//    cout << "身份证号：" << m_ID << endl;
//    cout << "年龄：" << m_age << endl;
//    cout << "性别：" << m_sex << endl;
//    cout << "出生日期：" << endl;
//    m_birth.ShowBirth();
//}
//
//Student::~Student()
//{
//    cout << "调用Student析构函数" << endl;
//}
//
//int main()
//{
//    Student s1;
//    s1.ShowStudent();
//
//    system("pause");
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Base
//{
//private:
//	int base_priv_dat;
//protected:
//	int base_prot_dat;
//public:
//	void base_show();
//};
//class Derived :public Base
//{
//private:
//	int derived_priv_dat;
//public:
//	void derived_show();
//};
//void Base::base_show()
//{
//	base_priv_dat = 1;  //基类函数可以操纵私有和保护型基类数据
//	base_prot_dat = 2;
//	cout << "base_priv_dat=" << base_priv_dat << '\t'
//		<< "	base_prot_dat=" << base_prot_dat << endl;
//}
//void Derived::derived_show()
//{
//	derived_priv_dat = 3;
//	base_prot_dat = 4;  //派生函数可以处理保护型基类数据，但不能处理私有基类数据
//	cout << "derived_priv_dat=" << derived_priv_dat << '\t'
//		<< "base_prot_dat=" << base_prot_dat << endl;
//
//	base_show();   //派生函数可以调用公有基类函数
//}
//int main()
//{
//	Derived d_obj;
//	d_obj.base_show();   //可用派生对象调用基类函数
//	d_obj.derived_show();
//	return(0);
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	Person(const char* s)  //带参数的构造函数
//	{
//		name = new char[strlen(s) + 1];
//		strcpy(name, s);
//	}
//	~Person() { delete[]name; }   //析构函数做清理工作
//	char* GetName() { return name; }
//protected:
//	char* name;
//};
//class Student :public Person
//{
//	char* major;
//public:
//	Student(const char* s, const char* m) :Person(s)    //派生类构造函数
//	{
//		major = new char[strlen(m) + 1]; strcpy(major, m);
//	}
//	~Student() { delete[] major; }       //派生类析构函数
//	char* GetMajor() { return major; }
//};
//int main()
//{
//	Student stu("WZQ", "Electric automatization");
//	cout << "student Name is:" << stu.GetName() << "  Major is:"
//		<< stu.GetMajor() << endl;
//	return(0);
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	Person(string the_name, string the_gender, string  the_id)
//	{
//		name = the_name;
//		gender = the_gender;
//		id_number = the_id;
//		cout << "Person类构造函数被调用！" << endl;
//	}
//	void show()
//	{
//		cout << "姓名：" << name << endl;
//		cout << "性别：" << gender << endl;
//		cout << "身份证号码：" << id_number << endl;
//	}
//protected:
//	string name;			//姓名
//	string gender;            //性别
//	string id_number;       //身份证号码
//};
//
//class Student : public Person
//{
//public:
//	Student(string n, string g, string i, string c) :Person(n, g, i)
//	{
//		classname = c;
//		cout << "Student类构造函数被调用！" << endl;
//	}
//protected:
//	string classname;			//学生所在班级
//};
//
//class Teacher : public Person
//{
//public:
//	Teacher(string n, string g, string i, string d) :Person(n, g, i)
//	{
//		department = d;
//		cout << "Teacher类构造函数被调用！" << endl;
//	}
//protected:
//	string department;			//教师所在单位
//};
//
//class Assistant :public Student, public Teacher
//{
//public:
//	Assistant(string n, string g, string i, string c, string d) :Student(n, g, i, c), Teacher(n, g, i, d)
//	{
//	}
//	void disp()
//	{
//		show();
//		cout << "班级：" << classname << endl;
//		cout << "系部：" << department << endl;
//	}
//};
//int main()
//{
//	Assistant a("李玮", "男", "420300199212032323", "软件141", "电信系");
//	a.disp();
//	return 0;
//
//}

//开发一个简单的大学人员管理程序，该程序可以管理大学的一些基本人员：
//学生（student）、教师（teacher）。
//首先设计一个虚基类person。通过该类保存人员的最基本信息：姓名（name）、年龄（age）、性别（sex）和身份证号码。
//然后使用该类派生出学生类student、教师类teacher，在其中添加各自的特性，
//如在student类中添加如下信息：专业（speciality），在teacher类中添加院系（department）等。
//还有部分教师在工作的同时在职修读学位，因此同时具有教师和学生双重身份，
//所以由student类和teacher类再次派生出stuTeacher类。为每个类定义一个输出函数print()，
//输出该类相关信息。

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age, string sex, string id);
//
//	void virtual Print();
//
//protected:
//	string m_name;
//	int m_age;
//	string m_sex;
//	string m_id;
//};
//
//Person::Person(string name, int age, string sex, string id)
//{
//	m_name = name;
//    m_age = age;
//    m_sex = sex;
//    m_id = id;
//}
//
//void Person::Print()
//{
//	cout << "姓名：" << m_name << endl;
//    cout << "年龄：" << m_age << endl;
//    cout << "性别：" << m_sex << endl;
//    cout << "身份证号码：" << m_id << endl;
//}
//
//class Student :virtual public Person
//{
//public:
//	Student(string name, int age, string sex, string id, string speciality): Person(name, age, sex, id)
//	{
//		m_speciality = speciality;
//	}
//
//	void Print()
//	{
//		Person::Print();
//		cout << "专业：" << m_speciality << endl;
//	}
//
//protected:
//		string m_speciality;
//};
//
//class Teacher :virtual public Person
//{
//public:
//	Teacher(string name, int age, string sex, string id, string department) : Person(name, age, sex, id)
//	{
//		m_department = department;
//	}
//
//	void Print()
//	{
//		Person::Print();
//		cout << "院系：" << m_department << endl;
//	}
//
//protected:
//	string m_department;
//};
//
//class stuTeacher :public Student, public Teacher
//{
//public:
//	stuTeacher(string name, int age, string sex, string id,string speciality,string department) :Person(name, age, sex, id),  Student(name, age, sex, id, speciality), Teacher(name, age, sex, id, department)
//	{
//
//	}
//
//	void Print()
//	{
//		Student::Print();
//		cout << "院系：" << m_department << endl;
//	}
//};
//
//void test()
//{
//	string name, sex, id, speciality, department;
//    int age;
//	int choice;
//
//	cout << "请输入姓名:";
//    cin >> name;
//    cout << "请输入年龄:";
//    cin >> age;
//    cout << "请输入性别:";
//    cin >> sex;
//    cout << "请输入身份证号码:";
//    cin >> id;
//
//	cout << "请选择您的身份："<<endl;
//	cout << "1.学生" << endl;
//    cout << "2.教师" << endl;
//    cout << "3.学生兼教师" << endl;
//	cin >> choice;
//
//	switch (choice)
//	{
//		case 1:
//		{
//            cout << "请输入专业：";
//            cin >> speciality;
//            Student stu(name, age, sex, id, speciality);
//            stu.Print();
//            break;
//		}  
//
//        case 2:
//		{
//            cout << "请输入院系：";
//            cin >> department;
//            Teacher tea(name, age, sex, id, department);
//            tea.Print();
//            break;
//		}
//            
//        case 3:
//		{
//            cout << "请输入专业：";
//            cin >> speciality;
//            cout << "请输入院系：";
//            cin >> department;
//            stuTeacher sttea(name, age, sex, id, speciality, department);
//            sttea.Print();
//			break;
//		}
//            
//		default:
//		{
//            cout << "输入错误！" << endl;
//            break;
//		}
//
//	}
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Complex
//{
//public:
//	Complex() {};//构造函数空实现
//	Complex(double real, double image);
//
//	void Print();
//
//	Complex operator+(const Complex& c)
//	{
//		Complex temp;
//		temp.m_real=this->m_real+c.m_real;
//		temp.m_image=this->m_image+c.m_image;
//		return temp;
//	}
//
//	Complex operator-(const Complex& c)
//	{
//		Complex temp;
//		temp.m_real = this->m_real - c.m_real;
//		temp.m_image = this->m_image - c.m_image;
//		return temp;
//	}
//
//	Complex operator*(const Complex& c)
//	{
//		Complex temp;
//		temp.m_real = this->m_real * c.m_real- this->m_image * c.m_image;
//		temp.m_image = this->m_image * c.m_real+ this->m_real * c.m_image;
//		return temp;
//	}
//
//	Complex operator/(const Complex& c)
//	{
//		double numb1;//实部分子
//		double numb2;//虚部分子
//		double denom;
//		numb1 = this->m_real * c.m_real + this->m_image * c.m_image;
//		numb2 = this->m_image * c.m_real - this->m_real * c.m_image;
//        denom = c.m_real * c.m_real + c.m_image * c.m_image;
//
//		Complex temp;
//		temp.m_real = numb1 / denom;
//		temp.m_image = numb2 / denom;
//		return temp;
//	}
//
//
//	double m_real;
//	double m_image;
//};
//
//Complex::Complex(double real, double image)
//{
//	m_real = real;
//	m_image = image;
//}
//
//void Complex::Print()
//{
//	if (m_real == 0 && m_image == 0)
//	{
//		cout << "0" << endl;
//	}
//	else if (m_real == 0 && m_image != 0)
//	{
//		cout << m_image << "i" << endl;
//	}
//	else if (m_real != 0 && m_image == 0)
//	{
//		cout << m_real << endl;
//	}
//	else
//	{
//		cout << m_real << " + " << m_image << "i" << endl;
//	}
//}
//
//void test()
//{
//	double x1, y1;
//	cout << "请输入第一个复数的实部：" << endl;
//	cin >> x1;
//	cout << "请输入第一个复数的虚部：" << endl;
//	cin >> y1;
//	Complex c1(x1, y1);
//
//	double x2, y2;
//	cout << "请输入第二个复数的实部：" << endl;
//	cin >> x2;
//	cout << "请输入第二个复数的虚部：" << endl;
//	cin >> y2;
//	Complex c2(x2, y2);
//
//	Complex c3;
//
//	while (1)
//	{
//		int chioce;
//		cout << "请选择想要实现的方法:" << endl;
//		cout << "1.加法" << endl;
//		cout << "2.减法" << endl;
//		cout << "3.乘法" << endl;
//		cout << "4.除法" << endl;
//        cout << "5.退出" << endl;
//		cin >> chioce;
//
//
//		switch (chioce)
//		{
//			case 1:
//				{
//					c3 = c1 + c2;
//					c3.Print();
//					break;
//				}
//			case 2:
//				{
//					c3 = c1 - c2;
//					c3.Print();
//					break;
//				}
//			case 3:
//				{
//					c3 = c1 * c2;
//					c3.Print();
//					break;
//				}
//			case 4:
//				{
//					c3 = c1 / c2;
//					c3.Print();
//					break;
//				}
//			case 5:
//				{
//					cout << "已退出" << endl;
//					return;
//				}
//			default:
//				{
//					cout << "输入错误" << endl;
//					break;
//				}
//		}
//	}
//}
//
//
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	const char* str = "How are you!";
//	cout << str << endl;
//	cout.write(str, 8);
//	cout.put('\n');
//	cout.write(str + 4, 8);
//	cout.put('\n');
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int SIZE = 30;
//
//int main()
//{
//	char buffer[SIZE];
//	cout << "Enter a sentence with cin>>:" << endl;
//	cin >> buffer;
//	cout << "The sentence is:" << buffer << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int SIZE = 30;
//int main()
//{
//	char buffer[SIZE];
//	cout << "Enter a sentence with cin.get():" << endl;
//	cin.get(buffer, SIZE);   //默认以换行符结束
//	cout << "The sentence is:" << buffer << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int SIZE = 30;
//int main()
//{
//	char buffer[SIZE];
//	cout << "Enter a sentence with cin.getline():" << endl;
//	cin.getline(buffer, SIZE, '?');	   //以字符?作为终止符
//	cout << "The sentence is:" << buffer << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int SIZE = 30;
//int main()
//{
//	char buffer[SIZE];
//	cout << "Enter a sentence with cin.read():" << endl;
//	cin.read(buffer, 18);     //从输入流提取18字节写入字符数组
//	cout << "The sentence is:" << buffer << endl;
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int x = 123;
//	float y = 456.789;
//	cout << setw(8) << x << endl << y << endl;  //设置域宽为8
//	cout << setprecision(4) << y << endl;   //设置浮点数有效位
//	cout << setiosflags(ios::scientific) << y << endl;//设置科学记数法
//	cout << resetiosflags(ios::scientific);   //取消科学记数法
//	cout << setiosflags(ios::fixed) << setprecision(4) << y << endl;//设置定点表示及小数位数
//	cout << setiosflags(ios::dec) << setiosflags(ios::left) << setfill('#') << setw(8) << x << endl;
//	cout << dec << x << endl;
//	cout << oct << x << endl;
//	cout << hex << x << endl;
//	cout << setiosflags(ios::showbase);  //设置输出时带有基数标志
//	cout << dec << x << endl;
//	cout << oct << x << endl;
//	cout << hex << x << endl;
//	return 0;
//}

//按一行一行的方法将一个文本文件复制到另一个文件中
//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main()
//{
//	ifstream infile;
//	infile.open("test01.txt", ios::in);
//	ofstream outfile;
//	outfile.open("test02.txt", ios::out);
//
//	if (!infile)
//	{
//		cout << "打开文件失败" << endl;
//		return 1;
//	}
//	char ch;
//
//	while (infile.get(ch))
//	{
//		outfile.put(ch);
//	}
//
//	infile.close();
//	outfile.close();
//
//	return 0;
//}


//打开指定的一个文本文件，在每一行前面加上行号

#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	fstream iofile;
	iofile.open("test03.txt", ios::in);

	if (!iofile)
	{
		cout << "打开文件失败" << endl;
		return 1;
	}

	vector<string> lines;
	string line;//line存储每一行字符串
	int linenum = 1;

	while (getline(iofile,line))//getline读取每一行字符串
	{
		lines.push_back(line);//存储在容器中
	}
    iofile.close();

	fstream outfile;
	outfile.open("test03.txt", ios::out);

	for (int i = 0; i < lines.size(); i++)
	{
		outfile<<linenum<<":"<<lines[i]<<endl;
		linenum++;
	}
	outfile.close();

	cout << "插入行数成功！" << endl;

	return 0;
}

//#include<iostream>
//#include<fstream>
//#include<vector>
//
//using namespace std;
//
//class Student
//{
//    friend void test();
//public:
//	Student();
//
//    void GetAverage();
//
//protected:
//	char m_name[64];
//	char m_id[64];
//	double m_math;
//	double m_english;
//	double m_chinese;
//    double m_average;
//};
//
//Student::Student()
//{
//	cout<< "请输入姓名：" << endl;
//    cin >> m_name;
//    cout<< "请输入学号：" << endl;
//    cin >> m_id;
//    cout<< "请输入数学成绩：" << endl;
//    cin >> m_math;
//    cout<< "请输入英语成绩：" << endl;
//    cin >> m_english;
//    cout<< "请输入语文成绩：" << endl;
//    cin >> m_chinese;
//    GetAverage();
//}
//
//void Student::GetAverage()
//{
//    double avg = (m_math + m_english + m_chinese) / 3;
//    m_average=avg;
//}
//
//void test()
//{
//    ofstream outfile;
//    outfile.open("test04.txt", ios::out|ios::binary);
//
//    if (!outfile)
//    {
//        cout<< "打开文件失败" << endl;
//        exit(1);
//    }
//
//    vector<Student> students;
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout<< "请输入第" << i + 1 << "个学生的信息：" << endl;
//        students.push_back(Student());
//    }
//
//    for (int i = 0; i < students.size(); i++)
//    {
//        outfile.write((char*)&students[i].m_name, sizeof(students[i].m_name));
//        outfile.write((char*)&students[i].m_id, sizeof(students[i].m_id));
//        outfile.write((char*)&students[i].m_math, sizeof(students[i].m_math));
//        outfile.write((char*)&students[i].m_english, sizeof(students[i].m_english));
//        outfile.write((char*)&students[i].m_chinese, sizeof(students[i].m_chinese));
//        outfile.write((char*)&students[i].m_average, sizeof(students[i].m_average));
//    }
//
//    outfile.close();
//
//    cout<< "写入文件成功" << endl;
//}
//
//int main()
//{
//    test();
//	return 0;
//}
