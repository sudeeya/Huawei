#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

struct Complex {

	float re;
	float im;

	Complex();
	Complex(float re, float im);
	Complex(const Complex& other);

	Complex& operator=(const Complex& other);
	Complex operator+(const Complex& other) const;
	Complex operator-(const Complex& other) const;
	Complex operator*(const Complex& other) const;
	Complex operator/(const Complex& other) const;

	Complex& operator+=(const Complex& other);
	Complex& operator-=(const Complex& other);
	Complex& operator*=(const Complex& other);
	Complex& operator/=(const Complex& other);

	Complex& operator-();
	Complex& operator*();

	bool operator==(const Complex& other) const;
	bool operator!=(const Complex& other) const;

	float my_abs() const;
	Complex my_exp() const;
	Complex my_sin() const;
	Complex my_cos() const;

};

#endif