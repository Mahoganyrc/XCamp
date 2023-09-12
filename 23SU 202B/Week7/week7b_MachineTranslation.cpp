//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <queue>
//
//int m;
//int n;
//std::vector<int> words;
//std::queue<int> removeWords;
//std::unordered_set<int> cache;
//int main () {
//    int output = 0;
//    std::cin >> m >> n;
//    int temp;
//    for (int i = 0; i < n; i++) {
//        std::cin >> temp;
//        words.emplace_back(temp);
//    }
//    for (int i = 0; i < n; i++) {
//        auto it = cache.find(words[i]);
//        if (it == cache.end()) {
//            cache.insert(words[i]);
//            removeWords.push(words[i]);
//            output++;
//            if (cache.size() > m) {
//                cache.erase(removeWords.front());
//                removeWords.pop();
//            }
//        }
//    }
//
//    std::cout << output << std::endl;
//
//
//
//}