#pragma once
#include "TVector.h"
#include "Functions.h"

/*7. Створити клас TVector, який представляє вектор і містить методи для обчислення 
довжини вектора та скалярного добутку векторів.
На основі цього класу створити класи - нащадки, які представляють вектори з просторів R2 та R3.
За допомогою цих класів обчислити значення виразу S = <a, b> + <c, d> + |a|,
де a,b є R3, а c,d є R2*/

int main()
{
	cout << "Hi! This is a program that finds such value: <a,b> + <c,d> + |a|, where a, b are 3d-vectors and b, d are 2-d ones." << endl;
	cout << "Let's create these vectors." << endl;
	TVector3D a, b;
	TVector2D c, d;
	fill_vectors(a, b, c, d);
	float result = find_result(a, b, c, d);

}