#include<iostream>
using namespace std;

class AAA
{
public:
	virtual void Func1() { cout << "Func1" << endl; }
	virtual void Func2() { cout << "Func2" << endl; }
};

class BBB :public AAA
{
public:
	virtual void Func1() { cout << "BBB::Func1" << endl; }
	void Func3() { cout << "Func3" << endl; }
};

int main()
{
	AAA* aptr = new AAA();
	aptr->Func1();

	BBB* bptr = new BBB();
	bptr->Func1();	//AAA::Func1();의 정보가 존재하지 않는다.

	aptr = NULL;
	bptr = NULL;
	return 0;
}