//#include <iostream>
//#include <unordered_map>
//#include <vector>
//
//
//int main() {
//    int n;
//    std::cin >> n;
//    std::vector<std::pair<std::string, std::string>> cities;
//
//    for (int i = 0; i < n; i++) {
//        std::string city;
//        std::string state;
//        std::cin >> city >> state;
//        cities.emplace_back(city, state);
//    }
//
//    int output = 0;
//    std::unordered_map<std::string, int> statePairs;
//
//    for (const auto& city : cities) {
//        std::string cityCode = city.first.substr(0, 2);
//        std::string stateCode = city.second;
//
//        if (cityCode != stateCode) {
//            std::string pair = cityCode + stateCode;
//            if (statePairs.count(pair) != 0) {
//                output += statePairs[pair];
//
//            }
//
//            std::string reversePair = stateCode + cityCode;
//            statePairs[reversePair]++;
//        }
//    }
//
//    std::cout << std::endl;
//    std::cout << output << std::endl;
//
//    return 0;
//}
