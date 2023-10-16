//#include <iostream>
//#include <map>
//#include <algorithm>
//
//std::map<int,int> map;
//int n,a,b;
//int main ()  {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(NULL);
//    std::cout.tie(NULL);
//    int max = 0;
//    int last = 0;
//
//    std::cin >> n;
//    while (n--) {
//        std::cin >> a >> b;
//        map[a]++;
//        map[b]--;
//    }
//
//    for (std::pair<const int, int> people : map) {
//        if (people.second+last > max) {
//            max = people.second;
//        }
//        last = people.second;
//    }
//    std::cout << max << std::endl;
//}
