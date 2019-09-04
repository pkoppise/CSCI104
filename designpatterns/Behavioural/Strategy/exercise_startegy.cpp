#include <iostream>
#include <vector>
#include <complex>
#include <tuple>
#include <limits>
using namespace std;

struct DiscriminantStrategy
{
    virtual double calculate_discriminant(double a, double b, double c) = 0;
    virtual ~DiscriminantStrategy() {}
};

struct OrdinaryDiscriminantStrategy : DiscriminantStrategy
{
    double calculate_discriminant(double a, double b, double c) override
    {
    	return (b*b - 4*a*c);
    }
};

struct RealDiscriminantStrategy : DiscriminantStrategy
{
	double calculate_discriminant(double a, double b, double c) override
	{
		double temp = b*b - 4*a*c;
		if(temp >= 0)
		{
			return temp;
		}
		else
		{
			return numeric_limits<double>::quiet_NaN();
		}
	}
};

class QuadraticEquationSolver
{
    DiscriminantStrategy& strategy;
public:
    QuadraticEquationSolver(DiscriminantStrategy &strategy) : strategy(strategy) {}

    tuple<complex<double>, complex<double>> solve(double a, double b, double c)
    {
    	complex<double> disc = strategy.calculate_discriminant(a,b,c);
        auto root_disc = sqrt(disc);
        return {
            (-b+root_disc) / (2*a),
            (-b-root_disc) / (2*a) };
    }
};

/*
int main()
{
	OrdinaryDiscriminantStrategy ods;
	QuadraticEquationSolver solver(ods);
	tuple<complex<double>, complex<double>> results = solver.solve(3,8,5);
}*/
