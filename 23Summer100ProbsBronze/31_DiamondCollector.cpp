//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int n;
//int k;
//std::vector<int> sizes;
//std::vector<int> answers;
//
//int main () {
//    std::cin >> n >> k;
//    int x;
//    for (int i = 0; i < n; i++) {
//        std::cin >> x;
//        sizes.push_back(x);
//    }
//    std::sort(sizes.begin(),sizes.end());
//
//    for (int i = 0; i < sizes.size(); i++) {
//        int count = 0;
//        for (int j = i; j < sizes.size(); j++) {
//            if (std::abs(sizes.at(i)-sizes.at(j)) > k) {
//                break;
//            }
//            count++;
//        }
//        answers.push_back(count);
//    }
//
//    answers.push_back(0);
//    std::sort(answers.begin(),answers.end());
//    std::cout << answers.at(answers.size()-1) << std::endl;
//
//
//}