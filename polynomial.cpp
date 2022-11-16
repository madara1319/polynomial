#include <iostream>
#include <math.h>

using std::cout, std::cin, std::string, std::endl;

class polynomial
{
	private:
		double a;
		double b;
		double c;


	public:
	void seta(double A)
	{
		a=A;
	};
	void setb(double B)
	{
		b=B;
	};
	void setc(double C)
	{
		c=C;
	};
	double geta()
	{
		return a;
	};
	double getb()
	{
		return b;
	};
	double getc()
	{
		return c;
	};
	

	void checkEquation()
	{
		if ((pow(b,2.0)-4.0*a*c)>=0)
			cout<<"Theres or there are roots for this coefficients";
		else
			cout<<"Theres no root for such coefficients";

	};
};


int main()
{
	polynomial equation1=polynomial();

	equation1.seta(3);
	equation1.setb(6);
	equation1.setc(2);
	cout<<"Equation looks like y = "<< equation1.geta() <<" * x ^2 + "<<equation1.getb()<< " * x + " <<equation1.getc()<<endl;
	equation1.checkEquation();
}
