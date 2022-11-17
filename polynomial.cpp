#include <iostream>
#include <math.h>

using std::cout, std::cin, std::string, std::endl;
//__________________________________________________________________________________

class polynomial
{
	private:
		double a;
		double b;
		double c;
		double x1;
		double x2;


	public:
//__________________________________________________________________________________

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
	
//__________________________________________________________________________________
	bool checkEquation()
	{
		if ((pow(b,2.0)-4.0*a*c)>=0)
		{
			cout<<"Theres or there are roots for this coefficients"<<endl;
			return 1;
		}
		else
		{
			cout<<"Theres no root for such coefficients"<<endl;
			return 0;
		}

	};
	
	void rootsFinder()
	{
		if (checkEquation()==true)
		{
			x1=(-b-sqrt((pow(b,2.0)-4.0*a*c)))/(2*a);
			x2=(-b+sqrt((pow(b,2.0)-4.0*a*c)))/(2*a);

			cout<<"Root number one x1 equals = "<<x1<<endl;
			cout<<"Root number two x2 equals = "<<x2<<endl;
		}
		else
			cout<<"Cannot compute the roots"<<endl;
	}

//__________________________________________________________________________________

//Constructor for class polynomial

	polynomial(double A, double B, double C)
	{
		a=A;
		b=B;
		c=C;
	};
		
};

//__________________________________________________________________________________

int main()
{	
	double coefa {};
	double coefb {};
	double coefc {};
	polynomial equation1=polynomial(coefa,coefb,coefc);
	cout <<"Welcome to second-order polynomial roots finder"<<endl;
	cout<<"Enter first coefficient for x^2 -> a "<<endl;
	cin>>coefa;
	equation1.seta(coefa);
	cout<<"Enter second coefficient for x -> b "<<endl;
	cin>>coefb;
	equation1.setb(coefb);
	cout<<"Enter free coefficient c "<<endl;
	cin>>coefc;
	equation1.setc(coefc);
	
	cout<<"The equation is y = "<< equation1.geta() <<" * x ^2 + "<<equation1.getb()<< " * x + " <<equation1.getc()<<endl;
//	equation1.checkEquation();
	equation1.rootsFinder();
}
