//#include <iostream>
//#include <queue>
//#include <map>
//
//std::map<int,int> map;
//int timeK = 0;
//int final;
//int n;
//int k;
//bool b = true;
//
//int getValue (int i) {
//    auto pos = map.find(i);
//    return pos->second;
//}
//
//void decrease (int i) {
//    auto pos = map.find(i);
//    pos->second--;
//    timeK++;
//    if (i == k && pos->second == 0) {
//        final = timeK;
//        b = false;
//    }
//}
//int main () {
//    int x;
//
//    std::cin >> n >> k;
//
//    std::queue<int> q;
//
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> x;
//        map.emplace(i,x);
//        q.push(i);
//    }
//    while (b) {
//        for (int i = 0; i < n && b; i++) {
//
//            x = q.front();
//            q.pop();
//            if (getValue(x) > 0 ) {
//                decrease(x);
//                if (getValue(x) != 0) {
//                    q.push(x);
//                }
//            }
//        }
//    }
//
//    std::cout << timeK << std::endl;
//
//}