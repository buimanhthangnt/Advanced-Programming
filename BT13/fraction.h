
class Fraction
{
public:
	const int n;
	const int d;
	Fraction(int nu, int de): n(nu), d(de) {}
	void print();
	Fraction operator+ (const Fraction& other);
	Fraction operator- (const Fraction& other);
	Fraction operator* (const Fraction& other);
	Fraction operator/ (const Fraction& other);
};