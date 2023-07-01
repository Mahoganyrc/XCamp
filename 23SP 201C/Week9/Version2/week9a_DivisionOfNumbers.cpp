//#include <iostream>
//#include <algorithm>
//#include <sstream>
//#include <vector>
//
//int n;
//int k;
//int result = 0;
//std::vector<int> partial;
//
//
//int calc () {
//    int resultA = 0;
//    for (int i = 0; i < partial.size(); i++) {
//        resultA += partial.at(i);
//    }
//    return resultA;
//}
//
//
//
//void findPossible (int step, int last) {
//    if (calc() > n) {
//        return;
//    }
//
//
//    if (step == k) {
//        if (calc() == n) {
//            result++;
//        }
//
//        return;
//    }
//
//    for (int i = last; i < n; i++) {
//        if (step + (n - i + 1) < k || calc() + (k - step) * i > n) {
//            break;
//        }
//
//        if (step+1 <= k ) {
//            partial.push_back(i);
//            findPossible(step+1, i);
//            partial.pop_back();
//        }
//    }
//
//
//}
//
//int main () {
//    std::ios_base::sync_with_stdio(false);
//    std::cin.tie(NULL);
//    std::cin >> n >> k;
//    findPossible(0,1);
//    std::cout << result << std::endl;
//}
//
////
////#include <iostream>
////using namespace std;
////
////long long ans = 0;
////
////void sim(int n, int k, int pre = 1e9 + 7) { //N size, K cuts, size of pre cut
////    if (n == 0 && k == 0) ans++;
////    else if (n && k) {
////        for (int i = 1; i <= min(n, pre); i++) {
////            sim(n - i, k - 1, i);
////        }
////    }
////}
////
////
////int main() {
//////    ios_base::sync_with_stdio(false);
//////    cin.tie(nullptr); cout.tie(nullptr);
////
////    int n, k; cin >> n >> k;
////    sim(n, k);
////    cout << ans << "\n";
////
////    return 0;
////}