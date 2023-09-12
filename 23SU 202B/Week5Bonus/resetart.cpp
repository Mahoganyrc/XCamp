//#include <iostream>
//#include <set>
//#include <map>
//
//int main () {
//    std::set<int> s;
//    std::map<int,int> m;
//    int n;
//    int x;
//    std::cin >> n;
//    for (int i = 0; i < n; i++) {
//        std::cin >> x;
//        auto it  = s.find(x);
//        if (it == s.end()) {
//            m.insert(std::make_pair(x,1));
//            s.insert(x);
//        }else {
//            auto mapit = m.find(x);
//            mapit->second++;
//        }
//    }
//
//    for (auto mapPair : m) {
//        std::cout << mapPair.first << " " << mapPair.second << std::endl;
//    }
//
//    return 0;
//}
//
