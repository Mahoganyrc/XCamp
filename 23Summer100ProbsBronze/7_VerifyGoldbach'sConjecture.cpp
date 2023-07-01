//#include <iostream>
//#include <cmath>
//#include <vector>
//std::vector<int> sieve;
//int main () {
//    int size;
//    bool stop = false;
//    std::cin >> size;
//    for (int i = 2; i < size+1; i++) {
//        sieve.push_back(i);
//    }
//
//    for (int i = 0; i < sieve.size(); i++) {
//        for (int j = 0; j < sieve.size(); j++) {
//            if (sieve.at(j) % sieve.at(i) == 0 && i != j) {
//                sieve.erase(sieve.begin()+j);
//            }
//        }
//    }
//
//    for (int i = 0; i< sieve.size(); i++) {
//       // std::cout << sieve.at(i) << std::endl;
//    }
//
//    for (int i = 0; i < sieve.size(); i++) {
//        for (int j = 0; j < sieve.size(); j++) {
//            if (sieve.at(j) + sieve.at(i) == size) {
//                std::cout << std::to_string(size) << "=" << std::min(sieve.at(j),sieve.at(i)) << "+" <<std::max(sieve.at(j),sieve.at(i));
//                stop = true;
//            }
//            if (stop) {
//                break;
//            }
//        }
//    }
//}
