//#include <iostream>
//#include <string>
//
//char maze[6969][6969];
//
//int m,n,k;
//
//std::string get (int i) {
//    std::string output = "";
//    for ( int j = 0; j < n; j++) {
//        for (int z = 0; z < k; z++) {
//            output+=maze[i][j];
//        }
//    }
//
//    return output;
//}
//
//int main () {
//    std::cin >> m >> n >> k;
//    char x;
//    std::string dups;
//
//    for (int i = 0; i < m; i++) {
//        for(int j = 0; j < n; j++) {
//            std::cin >> x;
//            maze[i][j] = x;
//        }
//    }
//
//
//    for (int i = 0; i < m; i++) {
//        for (int c = 0; c < k; c++) {
//            std::cout << get(i) << std::endl;
//        }
//    }
//}