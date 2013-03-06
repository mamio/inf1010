#include <iostream>
#include <vector>

using namespace std;

class A
{
public:
	virtual void f1() const { cout << "A::f1()" << endl; }
	void f2() const { cout << "A::f2()" << endl; }
	void f3() const { cout << "A::f3()" << endl; }
};

class B : public A
{
public:
	void f1() const { cout << "B::f1()" << endl; }
	virtual void f2() const { cout << "B::f2()" << endl; }
};

class C : public B
{
public:
	void f1() const { cout << "C::f1()" << endl; }
	void f2() const { cout << "C::f2()" << endl; }
	virtual void f3() const { cout << "C::f3()" << endl; }
};

int main()
{
	vector<A*> vec;
	vec.push_back(new A);
	vec.push_back(new B);
	vec.push_back(new C);
	for (size_t i = 0; i < vec.size(); i++) {
		vec[i]->f1();
		vec[i]->f2();
		vec[i]->f3();
		cout << "------------------" << endl;
	}

	vector<B*> vec2;
	vec2.push_back(new B);
	vec2.push_back(new C);
	for (size_t i = 0; i < vec2.size(); i++) {
		vec2[i]->f1();
		vec2[i]->f2();
		vec2[i]->f3();
		cout << "------------------" << endl;
	}
	system("pause");
}
