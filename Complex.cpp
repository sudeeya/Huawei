#include <iostream>
#include <cmath>
#include "Complex.h"

Complex::Complex() : re(0), im(0) {}
Complex::Complex(float re, float im) : re(re), im(im) {}
Complex::Complex(const Complex& other) : re(other.re), im(other.im) {}
Complex::~Complex() {}

Complex& Complex::operator=(const Complex& other) {
	if (this == &other)
		return *this;
	re = other.re;
	im = other.im;
	return *this;
}

Complex Complex::operator+(const Complex& other) const {
	Complex res{ re + other.re, im + other.im };
	return res;
}

Complex Complex::operator-(const Complex& other) const {
	Complex res{ re - other.re, im - other.im };
	return res;
}

Complex Complex::operator*(const Complex& other) const {
	Complex res{ re * other.re - im * other.im, re * other.im + im * other.re };
	return res;
}

Complex Complex::operator/(const Complex& other) const {
	float denominator = other.re * other.re + other.im * other.im;
	Complex res{ (re * other.re + im * other.im) / denominator, (im * other.re - re * other.im) / denominator };
	return res;
}

Complex Complex::operator*(const float other) const {
	Complex res{ re * other, im * other };
	return res;
}

Complex& Complex::operator+=(const Complex& other) {
	re += other.re;
	im += other.im;
	return *this;
}

Complex& Complex::operator-=(const Complex& other) {
	re -= other.re;
	im -= other.im;
	return *this;
}

Complex& Complex::operator*=(const Complex& other) {
	float new_re = re * other.re - im * other.im, new_im = re * other.im + im * other.re;
	re = new_re;
	im = new_im;
	return *this;
}

Complex& Complex::operator/=(const Complex& other) {
	float new_re, new_im, denominator = other.re * other.re + other.im * other.im;
	new_re = (re * other.re + im * other.im) / denominator;
	new_im = (im * other.re - re * other.im) / denominator;
	re = new_re;
	im = new_im;
	return *this;
}

Complex Complex::operator-() {
	Complex res{ -re, -im };
	return res;
}

bool Complex::operator==(const Complex& other) const {
	if (re == other.re && im == other.im)
		return true;
	return false;
}

bool Complex::operator!=(const Complex& other) const {
	return !(*this == other);
}

float Complex::complex_abs() const {
	return sqrt(re * re + im * im);
}

Complex operator*(const float lhs, const Complex& rhs) {
	Complex res{ rhs.re * lhs, rhs.im * lhs };
	return res;
}
