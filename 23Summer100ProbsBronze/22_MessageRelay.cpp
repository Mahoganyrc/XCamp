//#include <iostream>
//
//int size;
//int data[2000];
//bool visited[2000];
//int x = 0;
//
//bool findPossible(int cow) {
//    if (data[cow] == 0) {
//        return true;
//    }
//
//    if (visited[cow]) {
//        return false;
//    }
//
//    visited[cow] = true;
//    bool result = findPossible(data[cow]);
//    visited[cow] = false;
//    return result;
//}
//
//int main() {
//    std::cin >> size;
//
//    for (int i = 1; i <= size; i++) {
//        std::cin >> data[i];
//    }
//
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= size; j++) {
//            visited[j] = false;
//        }
//        if (findPossible(i)) {
//            //std::cout << "location " << i << " = " << data[i]  << " | true" << std::endl;
//            x++;
//        }else {
//            //std::cout << "location " << i << " = " << data[i]  << " | false" << std::endl;
//        }
//    }
//
//    std::cout << x << std::endl;
//
//    return 0;
//}