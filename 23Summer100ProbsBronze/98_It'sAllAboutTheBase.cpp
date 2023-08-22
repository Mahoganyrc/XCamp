//#include <iostream>
//
//int base10 (int num, int base) {
//    int x = 0;
//    x+= num % 10;
//    x+= (num % 100 - num % 10)/10 * base;
//    x+= (num % 1000 - (num % 100 - num % 10))/100*(base*base);
//    return x;
//}
//
//void solve (int x, int y) {
//    int base1 = 10;
//    int base2 = 10;
//    while (base10(x,base1) != base10(y,base2) ) {
//
//        if (base10(x,base1) > base10(y,base2)) {
//            base2++;
//        }
//        if (base10(x,base1) < base10(y,base2)) {
//            base1++;
//        }
//    }
//    std::cout << base1 << " " << base2 << std::endl;
//
//}
//
//
//int main () {
//    int amount;
//    std::cin >> amount;
//
//    for (int i = 0; i < amount; i++) {
//        int x;
//        int y;
//        std::cin >> x >> y;
//        solve(x,y);
//    }
//
//
//}
//
//
