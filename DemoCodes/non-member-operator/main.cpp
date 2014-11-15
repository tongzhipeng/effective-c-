#include <iostream>
using namespace std;

class Rational
{
public:
	Rational(int a = 0) :m_a(a)
	{
	}

	~Rational()
	{
	}

	void print()
	{
		cout << m_a << endl;
	}
private:
	int m_a;
	const int m_b = 3;

	friend const Rational operator* (const Rational& lhs, const Rational& rhs);
};

const Rational operator* (const Rational& lhs, const Rational& rhs)
{
	Rational ret;
	ret.m_a =  lhs.m_a * rhs.m_a;
	return ret;
}

int main()
{
	Rational a(3), b(2);
	Rational c = a*b;
	c.print();

	system("pause");
	return 0;
}