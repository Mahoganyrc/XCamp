//#include <iostream>
//#include <set>
//
//int main () {
//    int n;
//    int k = 1;
//    bool found;
//
//    std::string input;
//    std::set<std::string> visited;
//    std::string cureent;
//
//    std::cin >> n >> input;
//
//
//
//    while (k <= n) {
//        found = true;
//        for (int i = 0; i <= n - k; i++) {
//            cureent = input.substr(i, k);
//            if (visited.count(cureent)) {
//                found = false;
//                break;
//            }
//            visited.insert(cureent);
//        }
//        if (found) {
//            std::cout << k << std::endl;
//            break;
//        }
//        k++;
//        visited.clear();
//    }
//
//}
