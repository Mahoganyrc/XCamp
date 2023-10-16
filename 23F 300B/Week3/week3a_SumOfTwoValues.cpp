//#include <iostream>
//#include <vector>
//#include <algorithm>
//int main () {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(NULL);
//    std::cout.tie(NULL);
//
//    std::vector<std::pair<int,int>> v;
//    int n;
//    int x;
//    std::cin >> n >> x;
//
//    for (int i = 0; i < n; i++) {
//        int temp;
//        std::cin >> temp;
//        v.emplace_back(temp,i);
//    }
//
//    std::sort(v.begin(),v.end());
//    n--;
//    int k = 0;
//    while (k < n) {
//        if (v[k].first+v[n].first < x) {
//            k++;
//        }else if (v[k].first+v[n].first > x) {
//            n--;
//        }else if (v[k].first+v[n].first == x) {
//            std::cout << v[k].second+1 << " " << v[n].second+1 << std::endl;
//            return 0;
//        }
//    }
//    std::cout << "IMPOSSIBLE" << std::endl;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
