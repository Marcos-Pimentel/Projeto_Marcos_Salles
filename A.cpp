#include <iostream>
using namespace std;
class A{
private:
	int A1;
	float A2;

public:
	int getA1(){return A1;}
	float getA2(){return A2;}
	void setA1(int a){A1 = a;}
	void setA2(int a){A2 = a;}
	void MA1(){cout << "MA1" << endl;}
	void MA2(){cout << "MA2" << endl;}
	void MA3(){cout << "Alteração a classe A partir do clone" << endl;}
};