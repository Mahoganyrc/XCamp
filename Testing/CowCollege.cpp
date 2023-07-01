//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//std::vector<long long> cowPrices;
//
//
//
//int main () {
//    long long highest = -1;
//    long long index = 0;
//    long long n;
//    std::cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        long long x;
//        std::cin >> x;
//        cowPrices.push_back(x);
//    }
//
//    std::sort(cowPrices.begin(),cowPrices.end());
//
//
//    for (int i = 0; i < cowPrices.size(); i++) {
//        if (cowPrices[i]*(n-i) <= highest) {
//            //std::cout << "new highest = " << highest << "i = " << i <<  std::endl;
//            continue;
//        }
//
//        if (cowPrices[i]*(n-i) > highest) {
//            highest = cowPrices[i]*(n-i);
//            index = i;
//            //std::cout << "new highestX = " << highest << " i = " << index <<  std::endl;
//
//
//        }
//    }
////    for (int i = 0; i < cowPrices.size(); i++) {
////        std::cout << cowPrices[i] << " ";
////    }
////    std::cout << "" << std::endl;
////    std::cout << index << std::endl;
//    std::cout << highest << " " << cowPrices[index];
//
//}