//#include <iostream>
//
//int size;
//int data[1000];
//bool visited[1000];
//bool force = false;
//
//bool findPossible (int x) {
//    //std::cout << "Entering " << data[x] << " from " << x << std::endl;
//    if (data[x] == 0 || force) {
//        force = true;
//        return true;
//    }
//
//    if (visited[x]) {
//        return false;
//    }
//    visited[x] = true;
//    findPossible(data[x]);
//    visited[x] = false;
//    return false;
//
//}
//int main () {
//    std::cin >> size;
//    int x;
//    for (int i = 0; i < size; i++) {
//        std::cin >> data[i];
//    }
//
//    x = 0;
//    for (int i = 0; i < size; i++) {
//        if (findPossible(i)) {
//            force = false;
//            x++;
//        }
//    }
//
//    std::cout << x << std::endl;
//
//}
