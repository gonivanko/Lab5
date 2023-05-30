#include "Functions.h"

void fill_vectors(TVector3D& a, TVector3D& b, TVector2D& c, TVector2D& d)
{
	a.fill("a");
	b.fill("b");
	c.fill("c");
	d.fill("d");
}

float find_result(TVector3D& a, TVector3D& b, TVector2D& c, TVector2D& d)
{
	cout << "<a, b> = " << a.scalarProduct(b) << endl;
	cout << "<c, d> = " << c.scalarProduct(d) << endl;
	cout << "|a| = " << a.getLength() << endl;
	float result = a.scalarProduct(b) + c.scalarProduct(d) + a.getLength();
	cout << "So the result is = " << result << endl;
	return result;
}