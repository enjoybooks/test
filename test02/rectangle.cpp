#include <iostream>
#include <string>
using namespace std;


class Rectangle {
public:
	Rectangle(float length, float width);

	float area() const
	{
		return this->m_length * this->m_width;
	}

	void display() const
	{
		cout << "长：" << this->m_length << endl;
		cout << "宽：" << this->m_width << endl;
		cout << "面积：" << this->area() << endl;
	}

	
	float m_length;
	float m_width;
};
Rectangle::Rectangle(float length, float width)
{
	this->m_length = length;
	this->m_width = width;
}

static Rectangle operator>(const Rectangle& a, const Rectangle& b)
{
	if (a.area() > b.area())
		return a;
	else
	{
		return b;
	}
}

int main() {
	int l1, l2, w1, w2;
	cout << "第一个矩形的长：";
	cin >> l1;
	cout << endl;
	cout << "第一个矩形的宽：";
	cin >> w1;
	cout << endl;
	cout << "第二个矩形的长：";
	cin >> l2;
	cout << endl;
	cout << "第二个矩形的宽：";
	cin >> w2;
	cout << endl;
	Rectangle a(l1, w1);
	Rectangle b(l2, w2);
	Rectangle c(a > b);
	c.display();
}