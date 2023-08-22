//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int n;
//int k;
//int main () {
//    int x;
//    std::vector<int> v;
//    std::vector<int> counts;
//
//    std::cin >> n >> k;
//    for (int i = 0; i < n; i++) {
//        std::cin >> x;
//        v.push_back(x);
//    }
//
//
//
//    for (int i = 0; i < n; i++) {
//        x = v[i];
//        int j = 0;
//        if (i != n-1) {
//            j = i+1;
//        }else {
//            v[j] = k+1;
//        }
//        int count = 1;
//        while (j < n && x+v[j] <= k) {
//            //std::cout << "x = " << x << " | v[j] = " << v[j] << " | count = " << count;
//            x+=v[j];
//            j++;
//            count++;
//        }
//        //std::cout << std::endl;
//        counts.push_back(count);
//    }
//
//    std::sort(counts.begin(),counts.end());
//    std::cout << counts.back() << std::endl;
//
//
//}