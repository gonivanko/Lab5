#pragma once
#include <cmath>
#include <iostream>
#include<sstream>  

using namespace std;

class TVector
{
protected:
	float x, y;
public:
	TVector();
	TVector(float x1, float y1);
	virtual float getX();
	virtual float getY();
	virtual string getString() = 0;
	virtual float getLength() = 0;
	virtual void printVector() = 0;
	virtual void fill(string vector_name) = 0;
	float scalarProduct(TVector* other) {};
};

class TVector2D : public TVector
{
public:
	TVector2D();
	TVector2D(float x1, float y1);
	float getLength();
	string getString();
	void printVector();
	void fill(string vector_name);
	float scalarProduct(TVector2D& other);
};

class TVector3D : public TVector
{
	float z;
public:
	TVector3D();
	TVector3D(float x1, float y1, float z1);
	float getZ();
	float getLength();
	string getString();
	void printVector();
	void fill(string vector_name);
	float scalarProduct(TVector3D& other);
};
