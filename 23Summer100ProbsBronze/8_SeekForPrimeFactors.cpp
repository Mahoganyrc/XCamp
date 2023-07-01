//#include <iostream>
//#include <vector>
//
//
//std::vector<int> sieve;
//int highest = 2;
//
//int test (int input) {
//    int last = 1;
//    int count = 0;
//    for (int i = 2; i <= input; i++) {
//
//        while (input % i == 0) {
//            input /= i;
//
//            if (last != i) {
//                count++;
//            }
////            std::cout << "counter UPdate = " << i << "input u = " << input << "\n";
//
//            last = i;
//        }
//
//        if (input == 1) {
//            return count;
//        }
//    }
//
//    return count;
//}
//
//
//int seek (int input) {
//    int count = 0;
//    std::vector<int> factors;
//    factors.push_back(0);
//
//
//    for (int i = 0; i < sieve.size(); i++) {
//        for (int j = 0; j < sieve.size(); j++) {
//
//            if (input == 1) {
//                return count;
//            }
//
//            if (sieve.at(j) == sieve.at(i)) {
//                while (input % sieve.at(i) == 0) {
//                    input /= sieve.at(i);
//
//                    if (factors.back() != sieve.at(i)) {
//                        count++;
//                    }
//                    factors.push_back(sieve.at(i));
//                }
//            }
//
//        }
//    }
//    return count;
//}
//
//void adjust (int input) {
//
//    if (input <= highest) {
//        return;
//    }
//
//    for (int i = highest; i < input; i++) {
//        sieve.push_back(i);
//    }
//
//    for (int i = 0; i < sieve.size(); i++) {
//        for (int j = 0; j < sieve.size(); j++) {
//            if (sieve.at(j) % sieve.at(i) == 0 && i!=j) {
//                sieve.erase(sieve.begin()+j);
//            }
//        }
//    }
//    highest = input;
//}
//
//int main () {
//    int size;
//    int x;
//    std::cin >> size;
//    for (int i = 0; i < size; i++) {
//        std::cin >> x;
//        //adjust(x);
//        std::cout << std::to_string(test(x)) << "\n";
//    }
//
//
//}
//
