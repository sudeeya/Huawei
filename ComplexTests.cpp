#include "Complex.h"
#include <iostream>
#include <cstdlib>

const float eps = 1e-6;

bool test1();
bool test2();
bool test3();
bool test4();
bool test5();
bool test6();
bool test7();
bool test8();
bool test9();
bool test10();
bool test11();
bool test12();
bool tests();

int main() {
	if (tests() == false) {
		std::cout << "Test failed" << std::endl;
		exit(1);
	}
	std::cout << "Everything is great" << std::endl;
	return 0;
}

bool test1() {
	Complex lhs{ 2.5, 6.5 }, rhs{ 7.3, -2.7 }, ans{ 9.8, 3.8 }, res;
	res = lhs + rhs;
	if (abs(res.re - ans.re) < eps && abs(res.im - ans.im) < eps)
		return true;
	return false;	
}

bool test2() {
    Complex lhs{ 2.5, 6.5 }, rhs{ 7.3, -2.7 }, ans{ -4.8, 9.2 }, res;
    res = lhs - rhs;
    if (abs(res.re - ans.re) < eps && abs(res.im - ans.im) < eps)
    	return true;
	return false;
}

bool test3() {
    Complex lhs{ 2.5, 6.5 }, rhs{ 7.3, -2.7 }, ans{ 35.8, 40.7 }, res;
    res = lhs * rhs;
    if (abs(res.re - ans.re) < eps && abs(res.im - ans.im) < eps)
        return true;
    return false;
}

bool test4() {
    Complex lhs{ 5, 7 }, rhs{ 1, 1 }, ans{ 6, 1 }, res;
    res = lhs / rhs;
    if (abs(res.re - ans.re) < eps  && abs(res.im - ans.im) < eps)
        return true;
    return false;
}

bool test5() {
    Complex lhs{ 2.5, 6.5 }, rhs{ 7.3, -2.7 }, ans{ 9.8, 3.8 };
    lhs += rhs;
    if (abs(lhs.re - ans.re) < eps && abs(lhs.im - ans.im) < eps)
        return true;
    return false;
}

bool test6() {
    Complex lhs{ 2.5, 6.5 }, rhs{ 7.3, -2.7 }, ans{ -4.8, 9.2 };
    lhs -= rhs;
    if (abs(lhs.re - ans.re) < eps && abs(lhs.im - ans.im) < eps)
        return true;
    return false;
}

bool test7() {
    Complex lhs{ 2.5, 6.5 }, rhs{ 7.3, -2.7 }, ans{ 35.8, 40.7 };
    lhs *= rhs;
    if (abs(lhs.re - ans.re) < eps && abs(lhs.im - ans.im) < eps)
        return true;
    return false;
}

bool test8() {
    Complex lhs{ 5, 7 }, rhs{ 1, 1 }, ans{ 6, 1 };
    lhs /= rhs;
    if (abs(lhs.re - ans.re) < eps && abs(lhs.im - ans.im) < eps)
        return true;
    return false;
}

bool test9() {
    Complex lhs, rhs{ 5, 7 }, ans{ -5, -7 };
    lhs = -rhs;
    if (abs(lhs.re - ans.re) < eps && abs(lhs.im - ans.im) < eps)
        return true;
    return false;
}

bool test10() {
    Complex lhs{ 5, 7 }, rhs{ 1, 1 };
    bool res = (lhs == rhs);
    if (res == false)
        return true;
    return false;
}

bool test11() {
    Complex lhs{ 5, 7 }, rhs{ 1, 1 };
    bool res = (lhs != rhs);
    if (res == true)
        return true;
    return false;
}

bool test12() {
	Complex num{ 3, 4 };
	float ans = 5, res;
	res = num.complex_abs();
	if (abs(res - ans) < eps)
		return true;
	return false;
}

bool tests() {
	if (test1() && test2() && test3() && test4() && test5() && test6() &&
		test7() && test8() && test9() && test10() && test11() && test12())
		return true;
	return false; 
}
