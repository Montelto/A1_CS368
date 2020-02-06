//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// Demos Math library created
//

#include "MathLib.h"

int main(){
    int i = -1;
    i = absVal(i);
    cout << "absVal(int) was -1 is now " << i << endl;

    long l = 540007000700070007;
    l = absVal(l);
    cout << "absVal(long) was 540007000700070007 is now " << l << endl;

    double d = -31.64;
    d = absVal(d);
    cout << "absVal(long) -31.64 is now " << d << endl << endl;

    l = ceiling(d);
    cout << "ceiling(double) 31.64 is now " << l << endl;

    d = -6.5;
    l = floor(d);
    cout << "floor(double) -6.5 is now " << l << endl;

    l = round(d, ROUND_HALF_UP);
    cout << "round(double, RoundingRule) with rounding half up -6.5 is now "
    << l << endl << endl;

    d = 1.5;
    d = pow(d, 2);
    cout << "pow(double, long) 1.5^2 is " << d << " and should be 2.25" << endl;

    i = -31;
    string ascii = toString(i, 16, true);
    cout << "toString(int, radix(hex), bool) -31 is " << ascii << " and should "
                                                               "be -1f" << endl;

    int num2 = 93;
    i = gcd(i, num2);
    cout << "gcd(-31, 93) is " << i << " and should be 31" << endl;
}