//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// iostream for demo only, guards placed
//

#ifndef A1_CS368_MATHLIB_H
#define A1_CS368_MATHLIB_H

#include <iostream>

using namespace std;

int absVal(int);
long absVal(long);
double absVal(double);
/*
 * Takes a int, long, or double and returns the absolute value of the number
 * respectively
 */

long ceiling(double);
 /* Takes the double and rounds up
 */

long floor(double);
 /* Takes the double and rounds down
 */

 enum RoundingRule{ROUND_DOWN, ROUND_UP, ROUND_TO_ZERO,ROUND_AWAY_ZERO,
     ROUND_HALF_UP, ROUND_HALF_DOWN,ROUND_HALF_TO_ZERO, ROUND_HALF_AWAY_ZERO,
     ROUND_HALF_TO_EVEN, ROUND_HALF_TO_ODD};

long round(double, RoundingRule);
 /* take the double and depending on the rule rounds accordingly.
 * RULES: ROUND_DOWN: rounds down always, ROUND_UP: rounds up always,
 * ROUND_TO_ZERO: rounds towards zero always,ROUND_AWAY_ZERO: rounds away
 * from zero always,    *Half Rounds go for the closest just affect the ties
 * ROUND_HALF_UP: rounds .5 up, ROUND_HALF_DOWN: rounds .5 down,
 * ROUND_HALF_TO_ZERO: rounds .5 towards  zero, ROUND_HALF_AWAY_ZERO: rounds
 * .5 away from zero, ROUND_HALF_TO_EVEN: rounds .5 toward closest even,
 * ROUND_HALF_TO_ODD: rounds .5 to closest odd.
 */

double pow(double, long);
 /* Raises the double value to the long exponent.
 */

std::string toString(int num, unsigned int radix, bool);
 /* This function builds a std::string representation of the int (first)
 * parameter using the unsigned int (second) parameter as the radix (i.e.
 * numerical base). The string representation of the in twill use the digits
 * from 0 - 9 followed by a - z as needed. Negative numbers are prefixed
 * with’-’. If the radix is greater than 36, return a string containing"Radix
 * too large.". The bool parameter indicates if the returned number contains
 * lower case (true) or upper case(false) letters.
 */

int gcd(int, int);
 /* Returns the greatest common denominator of the two parameters.
 */

#endif //A1_CS368_MATHLIB_H
