//#include <iostream>
//#include <vector>
//
//int n;
//int k;
//std::vector<int> partial;
//
//int reached = 0;
//int fact = 1;
//bool visited[1000];
//
//int calc () {
//    int resultA = 0;
//    for (int i = 0; i < partial.size(); i++) {
//        resultA += partial.at(i);
//    }
//    return resultA;
//}
//
//void findPossible (int step) {
//    if (step > n) {
//        return;
//    }
//    if (calc() > fact) {
//        return;
//    }
//
//    if (step == n) {
//        reached++;
//        if (reached == k) {
//            for (int i = 0; i < partial.size(); i++) {
//                std::cout << partial.at(i) << " ";
//            }
//            std::cout << std::endl;
//        }
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
//
//int main () {
//    std::cin >> n >> k;
//
//    for (int i = 1; i < n+1; i++) {
//        fact += i;
//    }
//
//    findPossible(0);
//
//
//}