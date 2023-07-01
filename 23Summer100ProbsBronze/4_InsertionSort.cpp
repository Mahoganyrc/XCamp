//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//std::vector<int> nums;
//
//void swap(int i) {
//    if (i == 0) {
//        return;
//    }
//    if (nums[i] < nums[i-1]) {
//        std::swap(nums[i],nums[i-1]);
//        swap(i-1);
//    }
//
//
//}
//int main () {
//    int size;
//    int x;
//    std::cin >> size;
//
//    for (int i = 0; i < size; i++) {
//        std::cin >> x;
//        nums.push_back(x);
//    }
//
//    for (int i = 0; i < size; i++) {
//        swap(i);
//    }
//
//    for (int i = 0; i < size; i++) {
//        std::cout << nums.at(i)  << " ";
//    }
//
//}