//#include <iostream>
//#include <cstdio>
//
//int sizeA;
//int sizeB;
//int sizeC;
//
//int main () {
//    freopen("mixmilk.in", "r", stdin);
//    freopen("mixmilk.out", "w", stdout);
//    int a;
//    int b;
//    int c;
//
//    std::cin >> sizeA >> a;
//    std::cin >> sizeB >> b;
//    std::cin >> sizeC >> c;
//
//
//    for (int i = 1; i <= 100; i++ ) {
//        if (i % 3 == 1) {
//            if (a+b <= sizeB) {
//                b = a+b;
//                a = 0;
//            }else {
//                a = (a+b)-sizeB;
//                b = sizeB;
//            }
//
//        }else if (i % 3 == 2) {
//            if (b+c <= sizeC) {
//                c = b+c;
//                b = 0;
//            }else {
//                b = (b+c)-sizeC;
//                c = sizeC;
//            }
//
//        }else if (i % 3 == 0) {
//            if (a+c <= sizeA) {
//                a = a+c;
//                c = 0;
//            }else {
//                c = (a+c)-sizeA;
//                a = sizeA;
//            }
//        }
//        //std::cout << "Number: " << i << " | " << a << " | " << b << " | " << c << std::endl;
//
//    }
//
//
//    std::cout << a << std::endl;
//    std::cout << b << std::endl;
//    std::cout << c << std::endl;
//
//
//}