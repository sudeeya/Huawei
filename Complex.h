#ifndef Users_sudeeya_source_repos_gitHuawei 
#define Users_sudeeya_source_repos_gitHuawei

#include <iostream>

struct Complex {

	float re;
	float im;

	Complex();
	Complex(float re, float im);
	Complex(const Complex& other);
	~Complex();

	Complex& operator=(const Complex& other);

	Complex operator+(const Complex& other) const;
	Complex operator-(const Complex& other) const;
	Complex operator*(const Complex& other) const;
	Complex operator/(const Complex& other) const;

	Complex& operator+=(const Complex& other);
	Complex& operator-=(const Complex& other);
	Complex& operator*=(const Complex& other);
	Complex& operator/=(const Complex& other);

	Complex operator-();

	bool operator==(const Complex& other) const;
	bool operator!=(const Complex& other) const;

	float my_abs() const;

};

#endif
