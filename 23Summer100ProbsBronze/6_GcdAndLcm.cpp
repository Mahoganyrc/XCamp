//#include <iostream>
//
//int main () {
//    int x;
//    int y;
//    std::cin >> x >> y;
//    int gcd = 1;
//    int lcm = x*y;
//
//    for (int i = 0; i <= x*y; i++) {
//        if ((x % i == 0) && (y % i == 0) && i > gcd) {
//            gcd = i;
//        }
//
//        if ((i % x == 0) && (i % y == 0) && i < lcm && i != 0) {
//            lcm = i;
//        }
//    }
//
//    std::cout << std::to_string(gcd) << "\n" << std::to_string(lcm);
//}