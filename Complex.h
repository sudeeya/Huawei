#ifndef HUAWEI_COMPLEX_H 
#define HUAWEI_COMPLEX_H

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

	Complex operator*(const float other) const;

	Complex& operator+=(const Complex& other);
	Complex& operator-=(const Complex& other);
	Complex& operator*=(const Complex& other);
	Complex& operator/=(const Complex& other);

	Complex operator-();

	bool operator==(const Complex& other) const;
	bool operator!=(const Complex& other) const;

	float complex_abs() const;

};

Complex operator*(const float lhs, const Complex& rhs);

#endif
