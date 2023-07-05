//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//int main () {
//    std::vector<int> possible;
//    int a;
//    int b;
//    int n;
//
//    std::cin >> a >> b >> n;
//
//    for (int i = 0; i < n; i++) {
//        int money;
//        int cities;
//
//        int x;
//        std::cin >> money >> cities;
//
//        bool hasA = false;
//        bool hasB = false;
//
//        for (int j = 0; j < cities; j++) {
//            std::cin >> x;
//
//            if (x == a) {
//                hasA = true;
//            }
//            if (x == b && hasA) {
//                possible.push_back(money);
//            }
//        }
//    }
//
//    std::sort(possible.begin(),possible.end());
//    if (!possible.empty()) {
//        std::cout << possible.at(0) << std::endl;
//    }else {
//        std::cout << "-1" << std::endl;
//    }
//
//}
//
//
