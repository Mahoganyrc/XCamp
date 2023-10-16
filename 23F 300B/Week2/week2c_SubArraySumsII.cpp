//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(NULL);
//    std::cout.tie(NULL);
//
//    long long n, x;
//    std::cin >> n >> x;
//    long long temp;
//    std::vector<long long> arr;
//    for (long long i = 0; i < n; i++) {
//        std::cin >> temp;
//        arr.push_back(temp);
//    }
//
//    long long count = 0;
//    long long sum = 0;
//    std::unordered_map<long long, long long> map;
//
//    for (long long i = 0; i < n; i++) {
//        sum += arr[i];
//        if (sum == x) {
//            count++;
//        }
//        if (map.find(sum - x) != map.end()) {
//            count += map[sum - x];
//        }
//        map[sum]++;
//    }
//    std::cout << count << std::endl;
//}
