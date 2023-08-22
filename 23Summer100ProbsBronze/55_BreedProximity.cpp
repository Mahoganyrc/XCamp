//#include <iostream>
//#include <map>
//#include <string>
//
//int n;
//int k;
//int x;
//
//int main () {
//    std::cin >> n >> k;
//
//
//    int visited[50001];
//    std::map<int,int> check;
//    int results[1000001];
//
//    int output = -1;
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> x;
//        auto pos = check.find(x);
//        if (pos != check.end()) {
//
//            if (i-pos->second <= k) {
//                if (!visited[pos->second]) {
//                    results[x]++;
//                    visited[pos->second] = true;
//                }
//                if (!visited[i]) {
//                    results[x]++;
//                    visited[i] = true;
//                }
//                if (x > output) {
//                    output = x;
//                }
//            }
//
//        }
//
//        check[x] = i;
//    }
//
//    std::cout << output << std::endl;
//
//}