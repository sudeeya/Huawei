#include <iostream>
#include <cmath>
#include "Complex.h"

Complex::Complex() : re(0), im(0) {}
Complex::Complex(float re, float im) : re(re), im(im) {}
Complex::Complex(const Complex& other) : re(other.re), im(other.im) {}

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
	float newre = re * other.re - im * other.im, newim = re * other.im + im * other.re;
	re = newre;
	im = newim;
	return *this;
}
Complex& Complex::operator/=(const Complex& other) {
	float newre, newim, denominator = other.re * other.re + other.im * other.im;
	newre = (re * other.re + im * other.im) / denominator;
	newim = (im * other.re - re * other.im) / denominator;
	re = newre;
	im = newim;
	return *this;
}

Complex& Complex::operator-() {
	re *= -1;
	im *= -1;
	return *this;
}
Complex& Complex::operator*() {
	im *= -1;
	return *this;
}

bool Complex::operator==(const Complex& other) const {
	if (re == other.re && im == other.im)
		return true;
	return false;
}
bool Complex::operator!=(const Complex& other) const {
	return !(*this == other);
}

float Complex::my_abs() const {
	return sqrt(re * re + im * im);
}
Complex Complex::my_exp() const {
	float e = exp(re);
	Complex res{ e * cos(im), e * sin(im) };
	return res;
}
Complex Complex::my_sin() const {
	Complex res{ sin(re) * cosh(im), cos(re) * sinh(im) };
	return res;
}
Complex Complex::my_cos() const {
	Complex res{ cos(re) * cosh(im), -1 * sin(re) * sinh(im) };
	return res;
}