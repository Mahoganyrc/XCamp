//#include <iostream>
//
//int k;
//int n;
//
//int ranks[6969][6969];
//int visited[6969][6969];
//
//bool check (int cow1, int cow2) {
//    int pos1;
//    int pos2;
//    bool x = false;
//    bool y = false;
//    if (visited[cow1][cow2] || cow1 == cow2) {
//        return false;
//    }
//
//
//    for (int i = 0; i < k; i++) {
//        //std::cout << "Starting k = " << i << std::endl;
//        for (int j = 0; j < n; j++) {
//
//            if (x && y) {
//                return false;
//            }
//            if (ranks[i][j] == cow1) {
//                pos1 = j;
//            }else if (ranks[i][j] == cow2) {
//                pos2 = j;
//            }
//            //std::cout << "Starting j = " << j << " Pos = " << pos1 << " " << pos2 << std::endl;
//
//        }
//
//        if (pos1 > pos2) {
//            x = true;
//        }else if (pos1 < pos2) {
//            y = true;
//        }
//        if (x && y) {
//            return false;
//        }
//    }
//
//    visited[cow1][cow2] = true;
//    visited[cow2][cow1] = true;
//    return true;
//
//}
//int main () {
//    int temp;
//    std::cin >> k >> n;
//
//    for (int i = 0; i < k; i++) {
//        for (int j = 0; j < n; j++) {
//            std::cin >> temp;
//            ranks[i][j] = temp;
//        }
//    }
//
//    temp = 0;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (check(i,j)) {
//                //std::cout << i << " " << j << std::endl;
//                temp++;
//            }
//        }
//    }
//
//    std::cout << temp << std::endl;
//
//}