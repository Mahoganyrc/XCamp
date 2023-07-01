//#include <iostream>
//#include <vector>
//
//
//
//int factorial(int n) {
//    int fact = 1;
//    for(int i = 2; i <= n; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//
//void kth_permutation(int n, int k, std::vector<int>& perm) {
//    std::vector<int> nums(n);
//    for(int i = 0; i < n; i++) {
//        nums[i] = i + 1;
//    }
//    k--;
//    for(int i = 0; i < n; i++) {
//        int n_fact = factorial(n - i - 1);
//        int index = k / n_fact;
//        perm[i] = nums[index];
//        nums.erase(nums.begin() + index);
//        k %= n_fact;
//    }
//}
//
//int main() {
//    int n, k;
//    std::cin >> n >> k;
//
//    std::vector<int> perm(n);
//    kth_permutation(n, k, perm);
//    for(int i = 0; i < n; i++) {
//        std::cout << perm[i] << " ";
//    }
//    std::cout << std::endl;
//    return 0;
//}
