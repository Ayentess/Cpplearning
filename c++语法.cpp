//#include<iostream>
//using namespace std;
//
//const double PI = 3.1415926;
//
//class Circle
//{
//public://����Ȩ��
//	int m_r;//����
//
//	//��Ϊ
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	Circle c1;
//	c1.m_r = 10;
//
//	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
//
//	system("pause");
//
//	return 0;
//
//}

//#include<iostream>
//using namespace std;
//
//const double PI = 3.1415926;
//
//class Student
//{
//public://����Ȩ��
//	string name;//����
//	string none;
//
//	void showStudent()
//	{
//		cout << "����" << name << "ѧ��" << none << endl;
//	}
//
//};
//
//int main()
//{
//	Student s1, s2;
//
//	cin >> s1.name;
//	cin >> s1.none;
//
//	cin >> s2.name;
//	cin >> s2.none;
//	
//	s1.showStudent();
//	s2.showStudent();
//
//
//	system("pause");
//
//	return 0;
//
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	string getname()
//	{
//		return m_name;
//	}
//
//	void setage(int age)
//	{
//		m_age = age;
//	}
//	int getage()
//	{
//		return m_age;
//	}
//
//	void setlove(string love)
//	{
//		m_love = love;
//	}
//
//private:
//	string m_name;
//
//	int m_age;
//
//	string m_love;
//};
//
//int main()
//{
//
//	Person p;
//
//	string inputname;
//	cin >> inputname;
//	p.setname(inputname);
//	cout << "������" << p.getname() << endl;
//
//	p.setage(18);
//	cout << "���䣺" << p.getage() << endl;
//
//	p.setlove("preitess");
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Cube
//{
//public:
//	void setlenth(int l)
//	{
//		m_L = l;
//	}
//	int getlenth()
//	{
//		return m_L;
//	}
//
//	void setwide(int w)
//	{
//		m_W = w;
//	}
//	int getwide()
//	{
//		return m_W;
//	}
//
//	void sethigh(int h)
//	{
//		m_H = h;
//	}
//	int gethigh()
//	{
//		return m_H;
//	}
//
//	int calclateS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_H * m_W;
//	}
//
//	int calclateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	bool isSamebyClass(Cube& c)
//	{
//		if (m_L == c.getlenth() && m_H == c.gethigh() && m_W == c.getwide())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//};
//
//bool isSame(Cube &c1, Cube &c2)
//{
//	if (c1.getlenth() == c2.getlenth() && c1.gethigh() == c2.gethigh() && c1.getwide() == c2.getwide())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	Cube c1, c2;
//	c1.setlenth(10);
//	c1.setwide(10);
//	c1.sethigh(10);
//
//	c2.setlenth(10);
//	c2.setwide(10);
//	c2.sethigh(10);
//
//	bool res;
//	if (res=isSame(c1,c2))
//	{
//		cout << "c1�����" << c1.calclateS() << endl;
//		cout << "c2�����" << c2.calclateS() << endl;
//
//		cout << "c1�����" << c1.calclateV() << endl;
//		cout << "c2�����" << c2.calclateV() << endl;
//	}
//
//	res = c1.isSamebyClass(c2);
//	if (res)
//	{
//		cout << "c1�����" << c1.calclateS() << endl;
//		cout << "c2�����" << c2.calclateS() << endl;
//
//		cout << "c1�����" << c1.calclateV() << endl;
//		cout << "c2�����" << c2.calclateV() << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//
//	int m_Y;
//};
//
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;
//	Point m_Center;
//};
//
//
//
//void isinCircle(Circle& c, Point& p)
//{
//	int distance = (p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) +
//		(p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());
//
//	int rDistance = c.getR() * c.getR();
//
//	if (distance == rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (distance < rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//
//int main()
//{
//	Circle c;
//	c.setR(5);
//	Point center;
//	center.setX(3);
//	center.setY(4);
//	c.setCenter(center);
//
//	Point p;
//	p.setX(3);
//	p.setY(4);
//
//	isinCircle(c, p);
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Phone
//{
//public:
//	Phone(string pname):m_Pname(pname)
//    {
//		
//    }
//
//
//	string m_Pname;
//};
//
//class Person
//{
//public:
//	Person(string name, int age, string phone) :m_name(name), m_age(age), m_phone(phone)
//	{
//
//	}
//
//	void showPerson()
//	{
//        cout << "������" << m_name << "���䣺" << m_age << "�ֻ��ͺţ�" << m_phone.m_Pname << endl;
//	}
//
//
//	string m_name;
//	int m_age;
//	Phone m_phone;
//};
//
//int main()
//{
//	Person p("����", 18, "��Ϊ");
//	p.showPerson();
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//
//	person operator+(const person& p) 
//	{
//		person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//
//	int m_A;
//	int m_B;
//};
//
//int main()
//{
//	person p1;
//    p1.m_A = 10;
//    p1.m_B = 10;
//    person p2;
//    p2.m_A = 20;
//    p2.m_B = 30;
//
//    person p3 = p1 + p2;//�൱�� p2.operaor+(p1)
//
//    cout << "p3.m_A:" << p3.m_A << endl;
//    cout << "p3.m_B:" << p3.m_B << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//        m_A = a;
//        m_B = b;
//	}
//
//private:
//	int m_A;
//    int m_B;
//};
//
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << "m_A:" << p.m_A <<endl<< "m_B:" << p.m_B << endl;
//	return cout;
//}//�ص㣬���ض���ʽ���
//
//int main()
//{
//	Person p(10, 20);
//	cout << p <<endl;
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//    Person operator+(const Person& p)
//    {
//        Person temp;
//        temp.m_A = this->m_A + p.m_A;
//        temp.m_B = this->m_B + p.m_B;
//    }
//
//	int m_A;
//    int m_B;
//};
//
//int main()
//{
//	Person p1;
//    p1.m_A = 10;
//    p1.m_B = 10;
//    Person p2;
//    p2.m_A = 20;
//    p2.m_B = 30;
//
//    Person p3 = p1 + p2;//�൱�� p2.operator+(p1)
//
//    cout << "p3.m_A:" << p3.m_A << endl;
//    cout << "p3.m_B:" << p3.m_B << endl;
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//    friend ostream& operator<<(ostream& count, Person& p);
//public:
//    Person(int a, int b)
//    {
//        m_A = a;
//        m_B = b;
//    }
//private:
//    int m_A;
//    int m_B;
//};
//
//ostream& operator<<(ostream& cout, Person& p)
//{
//    cout << "m_A:" << p.m_A << endl << "m_B:" << p.m_B << endl;
//}
//
//int main()
//{
//    Person p(10,20);
//    cout<<p<<endl;
//
//	system("puase");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class MyInt
//{
//	friend ostream& operator<<(ostream& cout, MyInt myInt);
//public:
//    MyInt()
//    {
//        m_Num = 0;
//    }
//	MyInt &operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//
//	MyInt operator++(int)
//	{
//		MyInt temp = *this;
//		m_Num++;
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream&cout,MyInt myInt)
//{
//	cout<<myInt.m_Num<<endl;
//	return cout;
//}
//
//void test01()
//{
//    MyInt a;
//	cout<< a << endl;
//	cout << ++a << endl;
//    cout << a++ << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person operator+(const Person&p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//
//	int m_A;
//    int m_B;
//};
//
//int main()
//{
//	Person p;
//    p.m_A = 10;
//    p.m_B = 20;
//    Person p2;
//    p2.m_A = 20;
//    p2.m_B = 30;
//    Person p3 = p + p2;
//	cout << "p3.m_A:" << p3.m_B << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void setA(int a)
//	{
//		m_A = a;
//	}
//
//	void setB(int b)
//	{
//		m_B = b;
//	}
//
//	int showA()
//	{
//        return m_A;
//	}
//
//    int showB()
//    {
//        return m_B;
//    }
//
//	Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//
//	Person operator-(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A - p.m_A;
//		temp.m_B = this->m_B - p.m_B;
//		return temp;
//	}
//
//private:
//	int m_A;
//	int m_B;
//};
//
//int main()
//{
//	Person p1;
//    p1.setA(10);
//	p1.setB(20);
//    Person p2;
//    p2.setA(20);
//    p2.setB(30);
//
//	Person p3 = p1 + p2;
//	cout << p3.showA() <<endl<< p3.showB()<<endl;
//
//	Person p4 = p1 - p2;
//	cout << p4.showA() << endl << p4.showB() << endl;
//
//	system("pause");
//	return 0;
//}
// 
//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person operator-(const Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A - p.m_A;
//		temp.m_B = this->m_B - p.m_B;
//		return temp;
//	}
//
//	int m_A;
//	int m_B;
//};
//
//int main()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 20;
//	Person p2;
//	p2.m_A = 20;
//	p2.m_B = 30;
//	Person p3 = p - p2;
//	cout << "p3.m_A:" << p3.m_B << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, const Person p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//        m_B = b;
//	}
//
//private:
//	  int m_A;
//    int m_B;
//};
//
//ostream& operator<<(ostream& cout, const Person p)
//{
//	cout << "p.m_A:" << p.m_A << endl;
//	cout << "p.m_B:" << p.m_B << endl;
//    return cout;
//}
//
//int main()
//{
//	Person p(10, 20);
//	cout << p << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//    friend ostream& operator<<(ostream& cout, Person& p);
//public:
//    void setAB(int a, int b)
//    {
//        m_A = a;
//        m_B = b;
//    }
//
//private:
//	int m_A;
//	int m_B;
//};
//
//ostream& operator<<(ostream& cout, Person& p)
//{
//    cout << "p.m_A:" << p.m_A << endl;
//    cout << "p.m_B:" << p.m_B << endl;
//    return cout;
//}
//
//int main()
//{
//    Person p;
//    p.setAB(10, 20);
//    cout << p << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, const Person& p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//        m_B = b;
//	}
//private:
//	int m_A;
//    int m_B;
//};
//
//ostream& operator<<(ostream& cout, const Person &p)
//{
//	cout << "p.m_A:" << p.m_A << endl;
//    cout << "p.m_B:" << p.m_B << endl;
//	return cout;
//}
//
//int main()
//{
//	Person p(10, 20);
//    cout << p << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class myint
//{
//	friend ostream& operator<<(ostream& cout, myint num);
//public:
//	myint(int num)//���캯������ʼ����Ա����
//	{
//        m_A = num;
//	}
//
//	myint operator++()
//	{
//		m_A++;
//		return *this;
//	}
//
//	myint& operator++(int)
//	{
//		myint temp = *this;
//		m_A++;
//		return temp;
//	}
//
//private:
//	int m_A;
//};
//
//ostream& operator<<(ostream& cout, myint Num)
//{
//    cout << Num.m_A << endl;
//	return cout;
//}
//
//int main()
//{
//	myint a(10);
//    cout << ++a << endl;
//    cout << a++ << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class IntNum
//{
//	friend ostream& operator<<(ostream& cout, IntNum intNum);
//public:
//	IntNum(int num)
//	{
//		m_Num = num;
//	}
//
//	IntNum operator++()
//	{
//		m_Num++;
//        return *this;
//	}
//
//	IntNum& operator++(int)
//	{
//		IntNum temp = *this;
//		m_Num++;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, IntNum intNum)
//{
//    cout << intNum.m_Num << endl;
//	return cout;
//}
//
//void test01()
//{
//	IntNum a(10);
//	cout << ++a << endl;
//	cout << a << endl;
//}
//
//void test02()
//{
//	IntNum a(10);
//	cout << a++ << endl;
//	cout << a << endl;
//}
//int main()
//{
//	test01();
//    test02();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class IntNum
//{
//	friend ostream& operator<<(ostream& cout,IntNum Num);
//public:
//	IntNum(int num)
//	{
//        m_Num = num;
//	}
//
//	IntNum& operator++()
//	{
//        m_Num++;
//        return *this;
//	}
//
//    IntNum operator++(int)
//	{
//        IntNum temp = *this;
//        m_Num++;
//        return temp;
//	}
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout,IntNum Num)
//{
//    cout << "Num.m_Num" << Num.m_Num << endl;
//    return cout;
//}
//
//void test01()
//{
//	IntNum a(10);
//	cout << ++a << endl;
//	cout << a << endl;
//}
//
//void test02()
//{
//	IntNum a(10);
//	cout << a++ << endl;
//	cout << a << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Phone
//{
//public:
//    Phone(int a)
//    {
//        M_A = new int(a);
//    }
//
//    Phone& operator=(Phone& p)
//    {
//        if (M_A != NULL)
//        {
//            delete M_A;
//            M_A = NULL;
//        }
//        M_A = new int(*p.M_A);
//        return *this;
//    }
//
//    ~Phone()
//    {
//        if (M_A != NULL)
//        {
//            delete M_A;
//            M_A = NULL;
//        }
//    }
//
//    int *M_A;
//};
//
//int main()
//{
//    Phone p1(10);
//    Phone p2(20);
//    p2 = p1;
//    cout << *p2.M_A << endl;
//	system("pause");
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Phone
//{
//public:
//    Phone(int a, int b)
//    {
//        m_A = new int(a);
//        m_B = new int(b);
//    }
//
//    Phone& operator=(Phone& p)
//    {
//        if (m_A != NULL)
//        {
//            delete m_A;
//            m_A = NULL;
//        }
//        if (m_B != NULL)
//        {
//            delete m_B;
//            m_B = NULL;
//        }
//
//        m_A = new int(*p.m_A);
//        m_B = new int(*p.m_B);
//
//        return *this;
//    }
//
//    int *m_A;
//    int *m_B;
//};
//
//int main()
//{
//    Phone p1(10, 20);
//    Phone p2(20, 30);
//    p2 = p1;
//    cout << *p2.m_A << endl;
//    cout << *p2.m_B << endl;
//	system("pause");
//    return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class person
//{
//public:
//	person(string name, string phone)
//	{
//        m_name = name;
//        m_phone = phone;
//	}
//
//	bool operator==(person& p)
//	{
//		if (this->m_name == p.m_name && this->m_phone == p.m_phone)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	bool operator!=(person& p)
//	{
//		if (this->m_name == p.m_name && this->m_phone == p.m_phone)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//
//private:
//	string m_name;
//	string m_phone;
//};
//
//int main()
//{
//	person p1("zhangsan", "ipad");
//	person p2("lisi", "huawei");
//
//	if (p1 == p2)
//	{
//        cout << "p1 �� p2 ��ͬ" << endl;
//	}
//	else
//	{
//        cout << "p1 �� p2 ��ͬ" << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, string color)
//	{
//		this->m_PhoneName = name;
//		this->m_PhoneColor = color;
//	}
//
//	bool operator==(Person& p)
//	{
//		if (this->m_PhoneName == p.m_PhoneName && this->m_PhoneColor == p.m_PhoneColor)
//		{
//            return true;
//		}
//		else
//		{
//            return false;
//		}
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_PhoneName == p.m_PhoneName && this->m_PhoneColor == p.m_PhoneColor)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//
//	string m_PhoneName;
//    string m_PhoneColor;
//};
//
//int main()
//{
//	Person p1("��Ϊ", "��èɫ");
//	Person p2("��Ϊ", "��ɫ");
//    if (p1 == p2)
//	{
//		cout << "p1 �� p2 ��ͬ" << endl;
//	}
//	else
//	{
//		cout << "p1 �� p2 ��ͬ" << endl;
//	}
//	system("pause");
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//
//};
//
////Javaҳ��
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	//Javaҳ��
//	cout << "Java������Ƶҳ�����£� " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//
//	//Pythonҳ��
//	cout << "Python������Ƶҳ�����£� " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//
//	//C++ҳ��
//	cout << "C++������Ƶҳ�����£� " << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//class AbstraactCalculator
//{
//public:
//    virtual double GetResult()
//    {
//        return 0;
//    }
//
//    double m_NumA;
//    double m_NumB;
//};
//
//class AddCalculator : public AbstraactCalculator
//{
//public:
//    double GetResult()
//    {
//        return m_NumA + m_NumB;
//    }
//};
//
//class SubCalculator : public AbstraactCalculator
//{
//public:
//    double GetResult()
//    {
//        return m_NumA - m_NumB;
//    }
//};
//
//class MulCalculator : public AbstraactCalculator
//{
//public:
//    double GetResult()
//    {
//        return m_NumA * m_NumB;
//    }
//};
//
//class DivCalculator : public AbstraactCalculator
//{
//public:
//    double GetResult()
//    {
//        return m_NumA / m_NumB;
//    }
//};
//
//void test01()
//{
//    AbstraactCalculator* calc = new AddCalculator;
//    calc->m_NumA = 10;
//    calc->m_NumB = 20;
//    cout << calc->GetResult() << endl;
//    delete calc;
//
//    calc = new SubCalculator;
//    calc->m_NumA = 10;
//    calc->m_NumB = 20;
//    cout << calc->GetResult() << endl;
//    delete calc;
//
//    calc = new MulCalculator;
//    calc->m_NumA = 10;
//    calc->m_NumB = 20;
//    cout << calc->GetResult() << endl;
//    delete calc;
//
//}
//
//int main()
//{
//
//    test01();
//    system("pause");
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//class AbstractBase
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//    //���뱭��
//	virtual void PourInCup() = 0;
//    //��ӵ���
//    virtual void AddCondiments() = 0;
//
//	void Make()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		AddCondiments();
//	}
//};
//
//class coffe :public AbstractBase
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//        cout << "��ˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//        cout << "�忧��" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//        cout << "���뱭��" << endl;
//	}
//	//��ӵ���
//	virtual void AddCondiments()
//	{
//        cout << "����" << endl;
//	}
//};
//
//class Milk :public AbstractBase
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "��ţ��" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//��ӵ���
//	virtual void AddCondiments()
//	{
//		cout << "����" << endl;
//	}
//};
//
//void DoWork(AbstractBase* abs)
//{
//	abs->Make();
//    delete abs;
//}
//
//void test01()
//{
//	DoWork(new coffe);
//	cout << "-------------------" << endl;
//    DoWork(new Milk);
//}
//
//int main()
//{
//	test01();
//	system("pause"); 
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//    person(int age)
//    {
//        m_Age = new int(age);
//    }
//
//    int getAge()
//    {
//        return *m_Age;
//    }
//
//    person& operator=(person &p)
//    {
//        if (m_Age != NULL)
//        {
//            delete m_Age;
//            m_Age = NULL;
//        }
//
//        m_Age = new int(*p.m_Age);
//
//        return *this;
//    }
//
//    ~person()
//    {
//        if (m_Age != NULL)
//        {
//            delete m_Age;
//            m_Age = NULL;
//        }
//    }
//
//private:
//    int *m_Age;
//};
//
//int main()
//{
//    person p1(18);
//    person p2(20);
//    person p3(30);
//    p3 = p2 = p1;
//    cout << p3.getAge() << endl;
//    system("pause");
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	void head()
//	{
//		cout << "head" << endl;
//	}
//
//    void foot()
//	{
//		cout << "foot" << endl;
//	}
//private:
//
//};
//
//class Cpp :public Base
//{
//public:
//	void body()
//	{
//		cout<<"C++"<<endl;
//		cout << "------------------" << endl;
//	}
//
//
//};
//
//class Java :public Base
//{
//public:
//	void body()
//	{
//		cout << "Java" << endl;
//		cout << "------------------" << endl;
//	}
//};
//
//class Python :public Base
//{
//public:
//	void body()
//	{
//		cout << "Python" << endl;
//		cout << "------------------" << endl;
//	}
//};
//
//void test01()
//{
//	Cpp cpp;
//    cpp.head();
//    cpp.body();
//    cpp.foot();
//    Java java;
//    java.head();
//    java.body();
//    java.foot();
//    Python python;
//    python.head();
//    python.body();
//    python.foot();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
////��̬ʵ��
////�����������
////��̬�ŵ㣺������֯�ṹ�������ɶ���ǿ������ǰ�ںͺ��ڵ���չ�Լ�ά��
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////�ӷ�������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////����������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷�������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void Calc(AbstractCalculator& calc)
//{
//	calc.getResult();
//}
//
//void test02()
//{
//	AddCalculator add;
//	add.m_Num1 = 10;
//	add.m_Num2 = 20;
//    Calc(add);
//    cout << add.getResult() << endl;
//
//	SubCalculator sub;
//	sub.m_Num1 = 10;
//	sub.m_Num2 = 20;
//	Calc(sub);
//	cout << sub.getResult() << endl;
//
//    MulCalculator mul;
//    mul.m_Num1 = 10;
//	mul.m_Num2 = 20;
//    Calc(mul);
//    cout << mul.getResult() << endl;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class AbstractBase
//{
//public:
//	virtual void boild() = 0;
//
//	virtual void brew() = 0;
//
//	virtual void pourInCup() = 0;
//
//	virtual void Add() = 0;
//
//	void Make()
//	{
//		boild();
//		brew();
//		pourInCup();
//		Add();
//	}
//};
//
//class Tea :public AbstractBase
//{
//	virtual void boild()
//	{
//        cout << "��ˮ" << endl;
//	}
//
//	virtual void brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	virtual void pourInCup()
//	{
//        cout << "���뱭��" << endl;
//	}
//
//	virtual void Add()
//	{
//        cout << "������" << endl;
//	}
//};
//
//class Coffe :public AbstractBase
//{
//	virtual void boild()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	virtual void brew()
//	{
//		cout << "�忧��" << endl;
//	}
//
//	virtual void pourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	virtual void Add()
//	{
//		cout << "��ţ�̺���" << endl;
//	}
//};
//
//void Dowork(AbstractBase& abs)
//{
//	abs.Make();
//}
//
//void test01()
//{
//	Tea tea;
//	Dowork(tea);
//	cout << "-------------------" << endl;
//	Coffe coffe;
//    Dowork(coffe);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Computer
//{
//public:
//    virtual void Cpu() = 0;
//
//    virtual void Gpu() = 0;
//
//    virtual void Mermoy() = 0;
//
//    void Make()
//    {
//        Cpu();
//        Gpu();
//        Mermoy();
//    }
//};
//
//class Intelcomputer:public Computer
//{
//    virtual void Cpu()
//    {
//        cout << "Intel cpu��ʼ����" << endl;
//    }
//
//    virtual void Gpu()
//    {
//        cout << "Intel gpu��ʼ����" << endl;
//    }
//
//    virtual void Mermoy()
//    {
//        cout << "Intel memery��ʼ����" << endl;
//    }
//};
//
//class Lenovocomputer:public Computer
//{
//    virtual void Cpu()
//    {
//        cout << "Lenovo cpu��ʼ����" << endl;
//    }
//
//    virtual void Gpu()
//    {
//        cout << "Lenovo gpu��ʼ����" << endl;
//    }
//
//    virtual void Mermoy()
//    {
//        cout << "Lenovo memery��ʼ����" << endl;
//    }
//};
//
//void Make(Computer& computer)
//{
//    computer.Make();
//}
//
//void test01()
//{
//    Intelcomputer intel;
//    Make(intel);
//    cout << "-------------------" << endl;
//    Lenovocomputer lenovo;
//    Make(lenovo);
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}

