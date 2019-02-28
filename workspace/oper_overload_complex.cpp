#include <iostream>
using namespace std;
/*
class Complex
{
  public:
  Complex() { real_ = 0; imag_ = 0; };
  Complex(double r, double i) { real_ = r; imag_ = i; }
  Complex(const Complex& copy)
  {
	  cout << "Copy constructor is called" << endl;
	  this->real_ = copy.real_;
	  this->imag_ = copy.imag_;
  }

  Complex& operator=(const Complex& assign)
  {
	  cout << "assignment operator called" << endl;
	  this->real_ = assign.real_;
	  this->imag_ = assign.imag_;
	  return *this;
  }

  double getReal() const { return real_; }
  double getImag() const { return imag_; }
  //member function
  Complex operator+(const Complex& b) const
  {
	  double re = this->real_ + b.real_;
	  double im = this->imag_ + b.imag_;
	  return Complex(re,im);
  }

  //member function over-loading
  Complex operator+(int val) const
  {
	  double re = this->real_ + val;
	  double im = this->imag_;
	  return Complex(re,im);
  }

  bool operator==(const Complex& b) const
  {
	  if(this->real_ == b.real_ && this->imag_ == b.imag_)
	  {
		  return true;
	  }
	  else
	  {
		  return false;
	  }
  }

  private:
  double real_;
  double imag_;
};*/

//gloabl function
/*Complex operator+(const Complex& a, const Complex& b)
{
	double re = a.getReal() + b.getReal();
	double im = a.getImag() + b.getImag();
    return Complex(re,im);
}*/
/*
Complex operator+(int a, const Complex& b)
{
	double re = a + b.getReal();
	double im = b.getImag();
    return Complex(re,im);
}

ostream& operator<<(ostream& out, const Complex &b)
{
	out << b.getReal() << "+" << b.getImag() << "j" << endl;
	return out;
}
int main()
{
  Complex c1(2,3);
  Complex c2(4,5);

  Complex c3 = c1 + c2; //c1.operator +(c2);
  Complex c4 = c1 + 5; // c1.operator +(c1);

  cout << c3.getReal() << "+" << c3.getImag() << "j" << endl;
  cout << c4.getReal() << "+" << c4.getImag() << "j" << endl;

  if(c3 == c4)
  {
	  cout << "Complex numbers are equal" << endl;
  }
  else
  {
	  cout << "Complex numbers are not equal" << endl;
  }

  Complex c5 = 6 + c4;
  cout << c5.getReal() << "+" << c5.getImag() << "j" << endl;

  cout << c5;

  Complex c6(c1); //copy constructor called even if Complex c6 = c1
  cout << c6.getReal() << "+" << c6.getImag() << "j" << endl;

  Complex c7;
  c7 = c1; // copy constructor not called, assignment operation is called
  cout << c6.getReal() << "+" << c6.getImag() << "j" << endl;

  return 0;
}*/
