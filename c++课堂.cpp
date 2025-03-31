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