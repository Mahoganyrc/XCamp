//#include <iostream>
//#include <vector>
//
//int n;
//std::vector<int> partial;
//bool visited[1000];
//int count = 0;
//
//bool check () {
//
//    for (int i = 0; i < partial.size(); i++) {
//
//        if (i == 0) {
//            if (i+1 >= partial.size()) {
//                return true;
//            }
//            if (partial.at(i) + 1 == partial.at(i + 1) || partial.at(i) - 1 == partial.at(i + 1)) {
//                return false;
//            }
//
//        } else if (i != 0 && i != partial.size() - 1) {
//            if (partial.at(i) + 1 == partial.at(i + 1) || partial.at(i) - 1 == partial.at(i + 1) ||
//                partial.at(i) + 1 == partial.at(i - 1) || partial.at(i) - 1 == partial.at(i - 1)) {
//                return false;
//            }
//
//        } else if (i == partial.size() - 1) {
//            if (partial.at(i) + 1 == partial.at(i - 1) || partial.at(i) - 1 == partial.at(i - 1)) {
//                return false;
//            }
//
//        }
//    }
//    return true;
//}
//
//void findPossible (int step) {
//    if (step == n) {
//        if (check()) {
//            count++;
//        }
//        return;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (!visited[i]) {
//            partial.push_back(i+1);
//            visited[i] = true;
//            findPossible(step+1);
//            partial.pop_back();
//            visited[i] = false;
//        }
//    }
//
//}
//
//int main () {
//    std::cin >> n;
//    findPossible(0);
//    std::cout << count << std::endl;
//}