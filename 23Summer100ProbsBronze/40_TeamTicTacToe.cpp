//#include <iostream>
//#include <set>
//std::set<char> sorter[8];
//
//char board[3][3];
//
//bool visitedS[6969];
//bool visitedT[6969][6969];
//
//int team = 0;
//int single = 0;
//
//
//int main () {
//    for (int i = 0; i <3; i++) {
//        for (int j = 0; j < 3; j++) {
//            std::cin >> board[i][j];
//        }
//    }
//
//    for (int i = 0; i < 3; i++) {
//        sorter[0].insert(board[i][0]);
//        sorter[1].insert(board[i][1]);
//        sorter[2].insert(board[i][2]);
//        sorter[3].insert(board[0][i]);
//        sorter[4].insert(board[1][i]);
//        sorter[5].insert(board[2][i]);
//        sorter[6].insert(board[i][i]);
//        sorter[7].insert(board[2-i][i]);
//    }
//
//    for (int i = 0; i < 8; i++) {
//        if (sorter[i].size() == 1) {
//
//            for (const auto& element : sorter[i]) {
//                if (!visitedS[element]) {
//                    single++;
//                    visitedS[element] = true;
//                }
//
//            }
//
//        }
//        if (sorter[i].size() == 2) {
//            std::string temp = "";
//            for (const auto& element : sorter[i]) {
//               temp+=element;
//            }
//            if (!visitedT[temp[0]][temp[1]]) {
//                team++;
//                visitedT[temp[0]][temp[1]] = true;
//            }
//
//        }
//    }
//
//    std::cout << single << std::endl;
//    std::cout << team << std::endl;
//
//
//}