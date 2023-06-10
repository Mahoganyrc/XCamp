//#include <iostream>
//
//
//
//void tripleFibo (int final, int x, int y, int z) {
//
//    if (final == 4) {
//        std::cout << x+y+z << std::endl;
//        return;
//    }
//
//    if (final < 4 && final >= 1) {
//        std::cout << 1 << std::endl;
//        return;
//    }
//
//    tripleFibo(final-1, y, z, x+y+z);
//
//}
//
//int main () {
//    int final;
//    std::cin >> final;
//    tripleFibo(final, 1, 1, 1);
//}