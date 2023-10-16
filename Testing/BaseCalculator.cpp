////#include <iostream>
////#include <string>
////#include <cmath>
//////#include <bits/stdc++.h>
////
////// Function to convert a number from one base to decimal
////int toDecimal(const std::string& num, int base) {
////    int decimal = 0;
////    int len = num.length();
////
////    for (int i = 0; i < len; ++i) {
////        char digit = num[i];
////        int value = (digit >= '0' && digit <= '9') ? (digit - '0') : (digit - 'A' + 10);
////        decimal += value * std::pow(base, len - 1 - i);
////    }
////
////    return decimal;
////}
////
////// Function to convert a decimal number to a given base
////std::string fromDecimal(int decimal, int base) {
////    std::string result = "";
////
////    while (decimal > 0) {
////        int remainder = decimal % base;
////        char digit = (remainder < 10) ? ('0' + remainder) : ('A' + remainder - 10);
////        result = digit + result;
////        decimal /= base;
////    }
////
////    return result;
////}
////
////int main() {
////    std::string input;
////    int fromBase, toBase;
////
////    // Input the number, source base, and target base
////    std::cout << "Enter a number: ";
////    std::cin >> input;
////    std::cout << "Enter the source base: ";
////    std::cin >> fromBase;
////    std::cout << "Enter the target base: ";
////    std::cin >> toBase;
////
////    // Convert to decimal first, then to the target base
////    int decimal = toDecimal(input, fromBase);
////    std::string result = fromDecimal(decimal, toBase);
////
////    // Output the result
////    std::cout << "Converted number: " << result << std::endl;
////
////    return 0;
////}
//////134
////// 127
//////132
////// 125
//#include <iostream>
//void calculate(int n, int p) {
//    int answer = 1;
//    p--;
//    std::string str = std::to_string(n);
//    std::reverse(str.begin(),str.end());
//
//    int loc = str[p] - '0';
//    //std::cout << "LOc:" << str[p] << std::endl;
//    for (int i = 0; i < str.length(); i++) {
//        int multi = str[i] - '0';
//        if (i < p) {
//            answer*=std::abs(multi-loc);
//
//            std::cout << std::abs(multi-loc);
//        }else if ( i == p){
//            answer*=loc;
//            std::cout << loc;
//        }else {
//            answer*=std::abs(multi+loc);
//            if (std::abs(multi+loc) > 10) {
//                std::cout << std::abs(multi+loc) % 10;
//            }else {
//                std::cout << std::abs(multi+loc);
//            }
//
//        }
//    }
//
//    //return answer;
//}
//
//int main () {
//    int n;
//    int p;
//
//    for (int i = 1; i <= 5; i++) {
//        std::cin >> n >> p;
//        std::cout << std::endl;
//        calculate(n,p);
//    }
//    //    std::cout << calculate(296351,5)-296351 << std::endl;
//}
//
//
//
//
//
