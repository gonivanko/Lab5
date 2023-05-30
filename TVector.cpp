#include "TVector.h"

TVector::TVector() 
{
	x = 0; y = 0; 
}

TVector::TVector(float x1, float y1)
{
	x = x1; y = y1;
}

float TVector::getX() 
{ 
	return x; 
}

float TVector::getY()
{
	return y;
}

TVector2D::TVector2D()
{
	x = 0; y = 0; 
}

TVector2D::TVector2D(float x1, float y1) 
{ 
	x = x1; y = y1;
}

float TVector2D::getLength()
{
	return sqrt(x * x + y * y);
}

string TVector2D::getString()
{
	string s;
	stringstream ss;

	ss << "(" << x << ", " << y << ")";

	s = ss.str();
	return s;
}

void TVector2D::printVector()
{
	cout << "(" << x << ", " << y << ")" << endl; 
}

void TVector2D::fill(string vector_name)
{
	cout << "Vector " << vector_name << ":" << endl;
	cout << "Enter x y coordinates in format 10 20: ";
	cin >> x; cin >> y;
	cin.ignore();
	cout << "===================================================" << endl;
}

float TVector2D::scalarProduct(TVector2D& other)
{
	return this->x * other.x + this->y * other.y;
}

TVector3D::TVector3D()
{ 
	x = 0; y = 0; z = 0; 
}

TVector3D::TVector3D(float x1, float y1, float z1)
{
	x = x1; y = y1; z = z1; 
}

float TVector3D::getZ()
{
	return z;
}

string TVector3D::getString()
{
	string s;
	stringstream ss;
	ss << "(" << x << ", " << y << ")";

	s = ss.str();
	return s;
}

void TVector3D::printVector()
{ 
	cout << "(" << x << ", " << y << ", " << z << ")" << endl; 
}

void TVector3D::fill(string vector_name)
{
	cout << "Vector " << vector_name << ":" << endl;
	cout << "Enter x y z coordinates in format 1 2 3 : ";

	cin >> x; cin >> y; cin >> z;
	cin.ignore();
	cout << "===================================================" << endl;
}

float TVector3D::scalarProduct(TVector3D& other)
{
	return this->x * other.getX() + this->y * other.getY() + this->z * other.z;
}

float TVector3D::getLength()
{
	return sqrt(x * x + y * y + z * z);
}
