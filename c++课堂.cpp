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