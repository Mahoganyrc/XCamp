//#include <iostream>
//#include <vector>
//
//
//int M[21];
//int N[21];
//int size;
//int result = 0;
//std::vector<int> answers;
//
//std::vector<int> partial;
//
//int calc (std::vector<int> partialX) {
//
//    int resultA = 0;
//    for (int i = 0; i < partialX.size(); i++) {
//        resultA += partialX.at(i);
//    }
//    return resultA;
//}
//
//
//void findPossible (int m, int n, std::vector<int> partial, int step, int last) {
//    if (calc(partial) > m) {
//        return;
//    }
//
//    if (calc(partial) == m && partial.size() == n) {
//        result++;
//        return;
//    }
//
//    for (int i = last; i < n; i++) {
//        if (step + 1 <= n) {
//            partial.push_back(i);
//            findPossible(m, n, partial, step + 1, i);
//            partial.pop_back();
//        }
//
//    }
//}
//
//
//int main () {
//    std::cin >> size;
//    for (int i = 0; i < size; i++) {
//
//            std::cin >> M[i];
//            std::cin >> N[i];
//
//    }
//
//    for (int i = 0; i < size; i++) {
//        findPossible(M[i],N[i],partial,0,1);
//        std::cout << result << std::endl;
//        result = 0;
//    }
//}