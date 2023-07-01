//#include <iostream>
//#include <vector>
//
//int main () {
//    std::vector<int> nums;
//    int n;
//    int x;
//    std::cin >> n;
//
//   for (int i = 0; i < n; i++) {
//       std::cin >> x;
//       nums.push_back(x);
//   }
//
//    for (int i = 0; i < nums.size(); i++) {
//       for (int j = i+1; j < nums.size(); j++) {
//           if (nums.at(i) > nums.at(j)) {
//               int temp = nums.at(i);
//               nums.at(i) = nums.at(j);
//               nums.at(j) = temp;
//           }
//       }
//   }
//
//    std::cout << std::endl;
//    for (int i = 0; i < (nums.size()/2); i++) {
//        std::cout << nums.at(nums.size()-1) << std::endl;
//        std::cout << nums.at(0) << std::endl;
//        nums.pop_back();
//        nums.erase(nums.begin());
//
//        if (nums.size() % 2 != 0 && i == (nums.size()/2)-1) {
//            std::cout << nums.at(nums.size()/2) << std::endl;
//        }
//
//    }
//    std::cout << std::endl;
//
//}