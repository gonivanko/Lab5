#pragma once
#include "TVector.h"
#include "Functions.h"

/*7. �������� ���� TVector, ���� ����������� ������ � ������ ������ ��� ���������� 
������� ������� �� ���������� ������� �������.
�� ����� ����� ����� �������� ����� - �������, �� ������������� ������� � �������� R2 �� R3.
�� ��������� ��� ����� ��������� �������� ������ S = <a, b> + <c, d> + |a|,
�� a,b � R3, � c,d � R2*/

int main()
{
	cout << "Hi! This is a program that finds such value: <a,b> + <c,d> + |a|, where a, b are 3d-vectors and b, d are 2-d ones." << endl;
	cout << "Let's create these vectors." << endl;
	TVector3D a, b;
	TVector2D c, d;
	fill_vectors(a, b, c, d);
	float result = find_result(a, b, c, d);

}