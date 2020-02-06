//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// Math functions library
// http://www.asciitable.com/ for the ascii table
// https://www.geeksforgeeks.org/enumeration-enum-c/ for little things to
// make sure it still worked or how it worked in c++
//

#include "MathLib.h"

int absVal(int i){
    if (i < 0){
        return -i;
    }
    return i;
}

long absVal(long l){
    if (l < 0){
        return -l;
    }
    return l;
}

double absVal(double d){
    if (d < 0){
        return -d;
    }
    return d;
}

long ceiling(double d){
    long l = d;
    if (d > 0 and (d - l) != 0){
        return l = d + 1;
    }
    return l;
}

long floor(double d){
    long l = d;
    if (d < 0 and (d -l) != 0){
        return l = d - 1;
    }
    return l;
}

long round(double d, RoundingRule r){
    long l = 0;
    double half = .5;
    switch (r){
        case ROUND_DOWN:
            l = floor(d);
            break;
        case ROUND_UP:
            l = ceiling(d);
            break;
        case ROUND_TO_ZERO:
            if (d < 0){
                l = ceiling(d);
            }else
                l = floor(d);
            break;
        case ROUND_AWAY_ZERO:
            if (d > 0){
                l = ceiling(d);
            }else
                l = floor(d);
            break;
        case ROUND_HALF_DOWN:
            if (absVal(d - floor(d)) <= half){
                l = floor(d);
            }else
                l = ceiling(d);
            break;
        case ROUND_HALF_UP:
            if (absVal(d - ceiling(d)) >= half){
                l = ceiling(d);
            }else
                l = floor(d);
            break;
        case ROUND_HALF_TO_ZERO:
            if (d < 0){
                l = round(d, ROUND_HALF_UP);
            }else if (d > 0){
                l = round(d, ROUND_HALF_DOWN);
            }
            break;
        case ROUND_HALF_AWAY_ZERO:
            if (d < 0){
                l = round(d, ROUND_HALF_DOWN);
            }else if (d > 0){
                l = round(d, ROUND_HALF_UP);
            }
            break;
        case ROUND_HALF_TO_EVEN:
            if (floor(d) % 2 == 0){
                l = floor(d);
            }else
                l = ceiling(d);
            break;
        case ROUND_HALF_TO_ODD:
            if (floor(d) % 2 == 1){
                l = floor(d);
            }else
                l = ceiling(d);
            break;
    }
    return l;
}

double pow(double d, long l){
    double p = d;
    long e = absVal(l);
    while (e > 1){
        p = p * d;
        e--;
    }
    if (l < 0)
        p = 1/p;
    if (d < 0 and (l % 2) == 1)
        p = -absVal(p);
    return p;
}

string toString(int num, unsigned int radix, bool b) {
    int numbers = 48;
    int upperCase = 65;
    int lowerCase = 97;
    string converted = "";
    if (radix > 36) {
        return "Radix too large.";
    }
    int quotient = absVal(num);
    int remainder = 0;
    char ascii = '!';
    do{
        remainder = quotient % radix;
        quotient = quotient / radix;
        if (radix > 10 and remainder > 10 ){
            if (b) {
                ascii = lowerCase + (remainder - 10);
            }else
                ascii = upperCase + (remainder - 10);
        }else {
            ascii = numbers + remainder;
        }
        converted = ascii + converted;
    }while(quotient > 0);
    if (num < 0){
        converted = '-' + converted;
    }
    return converted;
}

int gcd(int num1, int num2){
    if (num1 == 0 or num2 == 0){
        return 0;
    }
    num1 = absVal(num1);
    num2 = absVal(num2);
    int remainder = 1;
    int gcf = 1;
    int i = 2;
    while (i <= num1 and i <= num2){
        int factor1 = 0;
        int factor2 = 1;

        remainder = num1 % i;
        if (remainder == 0)
            factor1 = i;

        remainder = num2 % i;
        if (remainder == 0)
            factor2 = i;

        if (factor1 == factor2)
            gcf = i;
        i++;
    }
    return gcf;
}

//int main(){}
