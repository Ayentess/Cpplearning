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
//	cout << "n��쳲�����������:" << s << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
////ʹ�ð�ֵ���ݵķ�����������ֵ�Ի�
//void swapbyValue(int a, int b)
//{
//	int t;
//	t = a;
//	a = b;
//	b = t;
//}
//
////ʹ�ð���ַ���ݵķ�����������ֵ�Ի�
//void swapbyAddress(int* a, int* b)
//{
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//
////ʹ�ð����ô��ݵķ�����������ֵ�Ի�
//void swapbyQuote(int& a, int& b)
//{
//	int t;
//	//����������޸ĵ���ʵ�ʲ�������������ʵ�ʲ�����һ������
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
//	cout << "����������������";
//	cin >> x >> y >> z;
//	m = min(x, y, z);
//	cout << "��С�����ǣ�" << m << "\n";
//	cout << "����������������";
//	cin >> x >> y;
//	m = min(x, y);
//	cout << "��С�����ǣ�" << m << "\n";
//	return(0);
//}

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//double get_area(double x, double y)//����
//{
//	double area;
//	area = x * y;
//	return area;
//}
//
//double get_area(double x)//Բ��
//{
//	double area;
//	area = 3.1415926*x*x;
//	return area;
//}
//
//double get_area(double x,double y,double z)//������
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
//    cout << "��������εĳ��Ϳ�";
//    cin >> x1 >> y1;
//    cout << "���ε�����ǣ�" << get_area(x1, y1) << "\n";
//	
//	double x2;
//	cout<<"������Բ�εİ뾶��";
//    cin >> x2;
//    cout << "Բ�ε�����ǣ�" << get_area(x2) << "\n";
//
//    double x3, y3, z3;
//    cout << "�����������ε����ߣ�";
//    cin >> x3 >> y3 >> z3;
//    cout << "�����ε�����ǣ�" << get_area(x3, y3, z3) << "\n";
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
//    cout<<"����������������"<<endl;
//    cin >> x1 >> y1;
//    cout << "�ϴ�����ǣ�" << MAX(x1, y1) << "\n";
//
//    double x2, y2;
//    cout << "������������������" << endl;
//    cin >> x1 >> y1;
//    cout << "�ϴ�����ǣ�" << MAX(x1, y1) << "\n";
//	system("pause");
//    return 0;
//}

//#include<iostream>
//#include<conio.h>      //getch()Ҫ�õ���ͷ�ļ�
//#include<stdlib.h>     //system("cls")���������õ���ͷ�ļ�
//#include<string.h>
//using namespace std;
////����һ���˻��ṹ��
//struct Account
//{
//	char mName[10];
//	long mSN;
//	float mBalance;
//};
////����
//void getAcc(struct Account* p)
//{
//	cout << "�������������ʺš�����Ǯ����" << endl;
//	cout << "������";
//	cin >> p->mName;
//	cout << "�ʺţ�";
//	cin >> p->mSN;
//	cout << "����Ǯ����";
//	cin >> p->mBalance;
//}
////���˻��д������Ϊamount
//void deposit(struct Account* p)
//{
//	float amount;
//	cout << "����";
//	cin >> amount;
//	p->mBalance = p->mBalance + amount;
//}
////���˻���ȡ�ȡ����Ϊamount(�뿼��͸֧���)
//void withdraw(struct Account* p)
//{
//	double amount;
//	cout << "ȡ���";
//	cin>>amount;
//	double Balance=p->mBalance-amount;
//    if (Balance<0)
//	{
//		cout << "�����˻��ѱ�͸֧��" << endl;
//	}
//	else
//	{
//		p->mBalance = Balance;
//		cout << "ȡ��ɹ���" << endl;
//		cout << "�������Ϊ��" << p->mBalance << endl;
//	}
//	_getch();
//}
////*****��ѯ�ʻ���ǰ���*****
//void getBalance(struct Account* p)
//{
//    cout << "�������Ϊ��" << p->mBalance << endl;
//	_getch();
//}
////���˵�
//void menu(void)
//{
//	system("cls");      //����
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "       ���������ʻ�ϵͳ" << endl << endl;
//	cout << "1:����" << endl;
//	cout << "2:��� " << endl;
//	cout << "3:ȡ��" << endl;
//	cout << "4:��ѯ��� " << endl;
//	cout << "5:�˳� " << endl << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << endl << endl << endl;
//}
////������
//int main()
//{
//	int cho;
//	struct Account p;     //����һ�������˻��ṹ�����
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
//		default: cout << "��Ч���룡"; _getch();
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
//	cout << "������������" << endl;
//}
//
////�ӷ�
//void Complex::getAdd(double a, double b)
//{
//	double real = m_real+a;
//    double imag = m_imag+b;
//	cout << real <<"+" << imag<< "i"<<endl;
//}
////����
//void Complex::getSub(double a, double b)
//{
//	double real = m_real - a;
//	double imag = m_imag - b;
//	cout << real << "+" << imag << "i" << endl;
//}
////����
//void Complex::getDiv(double a, double b)
//{
//	double d= a * a + b * b;
//	if (d == 0)
//	{
//        cout << "��������Ϊ0" << endl;
//        return;
//	}
//	double real = (m_real*a + m_imag*b)/d;
//	double imag = (m_real*b - m_imag*a)/d;
//	cout << real << "+" << imag << "i" << endl;
//}
////�˷�
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
//	cout << "�������һ��������ʵ�����鲿��" << endl;
//	cin >> a1 >> b1;
//	Complex c1(a1, b1);
//
//	double a2, b2;
//	cout << "������ڶ���������ʵ�����鲿��" << endl;
//	cin >> a2 >> b2;
//	Complex c2(a2, b2);
//
//	cout << "�ӷ������";
//	c1.getAdd(a2, b2);
//
//	cout << "���������";
//	c1.getSub(a2, b2);
//
//	cout << "�˷������";
//	c1.getMul(a2, b2);
//
//	cout << "���������";
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
//    cout << "����Birth���캯��" << endl;
//}
//
//void Birth::SetBirth()
//{
//    cout << "������������ڣ�" << endl;
//    cin >> m_year >> m_month >> m_day;
//}
//
//Birth::Birth(Birth& birth)
//{
//    m_year = birth.m_year;
//    m_month = birth.m_month;
//    m_day = birth.m_day;
//    cout << "����Birth�������캯��" << endl;
//}
//
//void Birth::ShowBirth()
//{
//    cout << m_year << "-" << m_month << "-" << m_day << endl;
//}
//
//Birth::~Birth()
//{
//    cout << "����Birth��������" << endl;
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
//    cout << "ѧ�ţ�" << endl;
//    cin>> m_id;
//    cout << "������" << endl;
//    cin >> m_name;
//    cout << "���䣺" << endl;
//    cin >> m_age;
//    cout << "�Ա�" << endl;
//    cin >> m_sex;
//    m_birth.SetBirth();
//    cout << "����Student���캯��" << endl;
//}
//
//Student::Student(Student& stu):m_birth(stu.m_birth)
//{
//	m_name = stu.m_name;
//    m_age = stu.m_age;
//    m_sex = stu.m_sex;
//    m_id = stu.m_id;
//    cout << "����Student�������캯��" << endl;
//}
//
//void Student::ShowStudent()
//{
//    cout << "ѧ�ţ�" << m_id << endl;
//    cout << "������" << m_name << endl;
//    cout << "���䣺" << m_age << endl;
//    cout << "�Ա�" << m_sex << endl;
//    cout << "�������ڣ�"<< endl;
//    m_birth.ShowBirth();
//}
//
//Student::~Student()
//{
//    cout << "����Student��������" << endl;
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
//	cout << "������������" << endl;
//}
//
////�ж�
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
////�ӷ�
//void Complex::getAdd(double a, double b)
//{
//	double real = m_real + a;
//	double imag = m_imag + b;
//    judge(real, imag);
//}
////����
//void Complex::getSub(double a, double b)
//{
//	double real = m_real - a;
//	double imag = m_imag - b;
//    judge(real, imag);
//}
////����
//void Complex::getDiv(double a, double b)
//{
//	double d = a * a + b * b;
//	if (d == 0)
//	{
//		cout << "��������Ϊ0" << endl;
//		return;
//	}
//	double real = (m_real * a + m_imag * b) / d;
//	double imag = (m_real * b - m_imag * a) / d;
//    judge(real, imag);
//}
////�˷�
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
//	cout << "�������һ��������ʵ�����鲿��" << endl;
//	cin >> a1 >> b1;
//	Complex c1(a1, b1);
//
//	double a2, b2;
//	cout << "������ڶ���������ʵ�����鲿��" << endl;
//	cin >> a2 >> b2;
//	Complex c2(a2, b2);
//
//	cout << "�ӷ������";
//	c1.getAdd(a2, b2);
//
//	cout << "���������";
//	c1.getSub(a2, b2);
//
//	cout << "�˷������";
//	c1.getMul(a2, b2);
//
//	cout << "���������";
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
//	Account(char name[], long num, float amount);   //����вι��캯��
//	Account();						//����޲ι��캯��
//	void deposit(float amount); 	//���˻��д��
//	int withdraw(float amount); 	//���˻���ȡ��
//	float getBalance();  			//��ѯ���
//private:
//	char mName[20];      			//�����˻��Ļ���
//	long mSN;            				//���˻����ʺ�
//	float mBalance;      			//���˻���ǰ�����
//};
////�вι��캯����ʵ��
//Account::Account(char name[], long num, float amount)
//{
//	strcpy(mName, name);
//	mSN = num;
//	mBalance = amount;
//}
////����޲ι��캯��
//Account::Account()
//{
//	mName="δ֪";
//	mSN = 0;
//	mBalance = 0;
//	//�޲ι���û�в������룬�ں������Զ�����г�ʼ������������Ϊδ֪���˺ź���Ϊ0��
//}
////���
//void Account::deposit(float amount)
//{
//	mBalance = mBalance + amount;
//}
////ȡ�����͸֧���
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
//	//����������Balance��ֵ��ͨ�������ж��Ƿ�͸֧
//}
////��ѯ���
//float Account::getBalance()
//{
//	return mBalance;
//	//ֱ�ӷ������
//}
////���˵�
//void menu(void)
//{
//	system("cls");       //����
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
//	cout << "       �������ʻ�ϵͳ" << endl << endl;
//	cout << "1.��� " << endl;
//	cout << "2:ȡ��" << endl;
//	cout << "3:��ѯ��� " << endl;
//	cout << "4:�˳� " << endl << endl;
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
//	cout << "�����뿪����Ϣ��" << endl << endl;
//	cout << "������";
//	cin >> name;
//	cout << "�ʺţ�";
//	cin >> num;
//	cout << "����";
//	cin >> amount;
//	Account p(name, num, amount);     //���������˻������
//	while (1)
//	{
//		menu();
//		do
//		{
//			cout << "������ѡ��:" << endl;
//			cin >> cho;
//		} while (cho < 1 || cho>4);
//		switch (cho)
//		{
//		case 1:	cout << "����";
//			cin >> amount;
//			p.deposit(amount);
//			break;
//		case 2: cout << "ȡ���";
//			cin >> amount;
//			m = p.withdraw(amount);
//			if (m == 0)
//				cout << "͸֧��" << endl;
//			else
//				cout << "ȡ��ɹ���" << endl;
//			break;
//		case 3: cout << "���Ϊ��" << p.getBalance() << endl;
//			break;
//		case 4:	return 0;
//		}
//		cout << endl << "�ûس�����!" << endl;
//		cin.sync();   //������뻺����������  
//		getchar();    //��ָ��������������ȡһ���ַ�����ֹ��Ļһ������
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
//    cout << "����Birth���캯��" << endl;
//}
//
//void Birth::SetBirth()
//{
//    cout << "������������ڣ�" << endl;
//    cin >> m_year >> m_month >> m_day;
//    if (m_year < 0 || m_month < 0 || m_month > 12 || m_day < 0 || m_day > 31)
//    {
//        cout << "�����������������룡" << endl;
//        SetBirth();
//    }
//}
//
//Birth::Birth(Birth& birth)
//{
//    m_year = birth.m_year;
//    m_month = birth.m_month;
//    m_day = birth.m_day;
//    cout << "����Birth�������캯��" << endl;
//}
//
//void Birth::ShowBirth()
//{
//    cout << m_year << "-" << m_month << "-" << m_day << endl;
//}
//
//Birth::~Birth()
//{
//    cout << "����Birth��������" << endl;
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
//    cout << "ѧ�ţ�" << endl;
//    cin >> m_id;
//    cout << "������" << endl;
//    cin >> m_name;
//    cout << "���֤�ţ�" << endl;
//    cin>> m_ID;
//    cout << "���䣺" << endl;
//    cin >> m_age;
//    cout << "�Ա�" << endl;
//    cin >> m_sex;
//    m_birth.SetBirth();
//    cout << "����Student���캯��" << endl;
//}
//
//Student::Student(Student& stu) :m_birth(stu.m_birth)
//{
//    m_name = stu.m_name;
//    m_age = stu.m_age;
//    m_sex = stu.m_sex;
//    m_id = stu.m_id;
//    cout << "����Student�������캯��" << endl;
//}
//
//void Student::ShowStudent()
//{
//    cout << "ѧ�ţ�" << m_id << endl;
//    cout << "������" << m_name << endl;
//    cout << "���֤�ţ�" << m_ID << endl;
//    cout << "���䣺" << m_age << endl;
//    cout << "�Ա�" << m_sex << endl;
//    cout << "�������ڣ�" << endl;
//    m_birth.ShowBirth();
//}
//
//Student::~Student()
//{
//    cout << "����Student��������" << endl;
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
//	base_priv_dat = 1;  //���ຯ�����Բ���˽�кͱ����ͻ�������
//	base_prot_dat = 2;
//	cout << "base_priv_dat=" << base_priv_dat << '\t'
//		<< "	base_prot_dat=" << base_prot_dat << endl;
//}
//void Derived::derived_show()
//{
//	derived_priv_dat = 3;
//	base_prot_dat = 4;  //�����������Դ������ͻ������ݣ������ܴ���˽�л�������
//	cout << "derived_priv_dat=" << derived_priv_dat << '\t'
//		<< "base_prot_dat=" << base_prot_dat << endl;
//
//	base_show();   //�����������Ե��ù��л��ຯ��
//}
//int main()
//{
//	Derived d_obj;
//	d_obj.base_show();   //��������������û��ຯ��
//	d_obj.derived_show();
//	return(0);
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	Person(const char* s)  //�������Ĺ��캯��
//	{
//		name = new char[strlen(s) + 1];
//		strcpy(name, s);
//	}
//	~Person() { delete[]name; }   //����������������
//	char* GetName() { return name; }
//protected:
//	char* name;
//};
//class Student :public Person
//{
//	char* major;
//public:
//	Student(const char* s, const char* m) :Person(s)    //�����๹�캯��
//	{
//		major = new char[strlen(m) + 1]; strcpy(major, m);
//	}
//	~Student() { delete[] major; }       //��������������
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
//		cout << "Person�๹�캯�������ã�" << endl;
//	}
//	void show()
//	{
//		cout << "������" << name << endl;
//		cout << "�Ա�" << gender << endl;
//		cout << "���֤���룺" << id_number << endl;
//	}
//protected:
//	string name;			//����
//	string gender;            //�Ա�
//	string id_number;       //���֤����
//};
//
//class Student : public Person
//{
//public:
//	Student(string n, string g, string i, string c) :Person(n, g, i)
//	{
//		classname = c;
//		cout << "Student�๹�캯�������ã�" << endl;
//	}
//protected:
//	string classname;			//ѧ�����ڰ༶
//};
//
//class Teacher : public Person
//{
//public:
//	Teacher(string n, string g, string i, string d) :Person(n, g, i)
//	{
//		department = d;
//		cout << "Teacher�๹�캯�������ã�" << endl;
//	}
//protected:
//	string department;			//��ʦ���ڵ�λ
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
//		cout << "�༶��" << classname << endl;
//		cout << "ϵ����" << department << endl;
//	}
//};
//int main()
//{
//	Assistant a("����", "��", "420300199212032323", "���141", "����ϵ");
//	a.disp();
//	return 0;
//
//}

//����һ���򵥵Ĵ�ѧ��Ա������򣬸ó�����Թ����ѧ��һЩ������Ա��
//ѧ����student������ʦ��teacher����
//�������һ�������person��ͨ�����ౣ����Ա���������Ϣ��������name�������䣨age�����Ա�sex�������֤���롣
//Ȼ��ʹ�ø���������ѧ����student����ʦ��teacher����������Ӹ��Ե����ԣ�
//����student�������������Ϣ��רҵ��speciality������teacher�������Ժϵ��department���ȡ�
//���в��ֽ�ʦ�ڹ�����ͬʱ��ְ�޶�ѧλ�����ͬʱ���н�ʦ��ѧ��˫����ݣ�
//������student���teacher���ٴ�������stuTeacher�ࡣΪÿ���ඨ��һ���������print()��
//������������Ϣ��

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
//	cout << "������" << m_name << endl;
//    cout << "���䣺" << m_age << endl;
//    cout << "�Ա�" << m_sex << endl;
//    cout << "���֤���룺" << m_id << endl;
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
//		cout << "רҵ��" << m_speciality << endl;
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
//		cout << "Ժϵ��" << m_department << endl;
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
//		cout << "Ժϵ��" << m_department << endl;
//	}
//};
//
//void test()
//{
//	string name, sex, id, speciality, department;
//    int age;
//	int choice;
//
//	cout << "����������:";
//    cin >> name;
//    cout << "����������:";
//    cin >> age;
//    cout << "�������Ա�:";
//    cin >> sex;
//    cout << "���������֤����:";
//    cin >> id;
//
//	cout << "��ѡ��������ݣ�"<<endl;
//	cout << "1.ѧ��" << endl;
//    cout << "2.��ʦ" << endl;
//    cout << "3.ѧ�����ʦ" << endl;
//	cin >> choice;
//
//	switch (choice)
//	{
//		case 1:
//		{
//            cout << "������רҵ��";
//            cin >> speciality;
//            Student stu(name, age, sex, id, speciality);
//            stu.Print();
//            break;
//		}  
//
//        case 2:
//		{
//            cout << "������Ժϵ��";
//            cin >> department;
//            Teacher tea(name, age, sex, id, department);
//            tea.Print();
//            break;
//		}
//            
//        case 3:
//		{
//            cout << "������רҵ��";
//            cin >> speciality;
//            cout << "������Ժϵ��";
//            cin >> department;
//            stuTeacher sttea(name, age, sex, id, speciality, department);
//            sttea.Print();
//			break;
//		}
//            
//		default:
//		{
//            cout << "�������" << endl;
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
//	Complex() {};//���캯����ʵ��
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
//		double numb1;//ʵ������
//		double numb2;//�鲿����
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
//	cout << "�������һ��������ʵ����" << endl;
//	cin >> x1;
//	cout << "�������һ���������鲿��" << endl;
//	cin >> y1;
//	Complex c1(x1, y1);
//
//	double x2, y2;
//	cout << "������ڶ���������ʵ����" << endl;
//	cin >> x2;
//	cout << "������ڶ����������鲿��" << endl;
//	cin >> y2;
//	Complex c2(x2, y2);
//
//	Complex c3;
//
//	while (1)
//	{
//		int chioce;
//		cout << "��ѡ����Ҫʵ�ֵķ���:" << endl;
//		cout << "1.�ӷ�" << endl;
//		cout << "2.����" << endl;
//		cout << "3.�˷�" << endl;
//		cout << "4.����" << endl;
//        cout << "5.�˳�" << endl;
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
//					cout << "���˳�" << endl;
//					return;
//				}
//			default:
//				{
//					cout << "�������" << endl;
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
//	cin.get(buffer, SIZE);   //Ĭ���Ի��з�����
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
//	cin.getline(buffer, SIZE, '?');	   //���ַ�?��Ϊ��ֹ��
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
//	cin.read(buffer, 18);     //����������ȡ18�ֽ�д���ַ�����
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
//	cout << setw(8) << x << endl << y << endl;  //�������Ϊ8
//	cout << setprecision(4) << y << endl;   //���ø�������Чλ
//	cout << setiosflags(ios::scientific) << y << endl;//���ÿ�ѧ������
//	cout << resetiosflags(ios::scientific);   //ȡ����ѧ������
//	cout << setiosflags(ios::fixed) << setprecision(4) << y << endl;//���ö����ʾ��С��λ��
//	cout << setiosflags(ios::dec) << setiosflags(ios::left) << setfill('#') << setw(8) << x << endl;
//	cout << dec << x << endl;
//	cout << oct << x << endl;
//	cout << hex << x << endl;
//	cout << setiosflags(ios::showbase);  //�������ʱ���л�����־
//	cout << dec << x << endl;
//	cout << oct << x << endl;
//	cout << hex << x << endl;
//	return 0;
//}

//��һ��һ�еķ�����һ���ı��ļ����Ƶ���һ���ļ���
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
//		cout << "���ļ�ʧ��" << endl;
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


//��ָ����һ���ı��ļ�����ÿһ��ǰ������к�

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
		cout << "���ļ�ʧ��" << endl;
		return 1;
	}

	vector<string> lines;
	string line;//line�洢ÿһ���ַ���
	int linenum = 1;

	while (getline(iofile,line))//getline��ȡÿһ���ַ���
	{
		lines.push_back(line);//�洢��������
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

	cout << "���������ɹ���" << endl;

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
//	cout<< "������������" << endl;
//    cin >> m_name;
//    cout<< "������ѧ�ţ�" << endl;
//    cin >> m_id;
//    cout<< "��������ѧ�ɼ���" << endl;
//    cin >> m_math;
//    cout<< "������Ӣ��ɼ���" << endl;
//    cin >> m_english;
//    cout<< "���������ĳɼ���" << endl;
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
//        cout<< "���ļ�ʧ��" << endl;
//        exit(1);
//    }
//
//    vector<Student> students;
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout<< "�������" << i + 1 << "��ѧ������Ϣ��" << endl;
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
//    cout<< "д���ļ��ɹ�" << endl;
//}
//
//int main()
//{
//    test();
//	return 0;
//}
