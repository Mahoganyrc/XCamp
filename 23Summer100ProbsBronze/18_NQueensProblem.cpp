//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int size;
//int maze[12][12];
//int count = 0;
//std::vector <int> rowFilled;
//
//
//bool check () {
//    int queenAmount = 0;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++){
//            if (maze[i][j] == -1) {
//                queenAmount++;
//            }
//        }
//
//    }
//    return queenAmount == size;
//}
//
//void placeQueen (int x, int y) {
//    if (maze[x][y] != 0) {
//        return;
//    }
//    rowFilled.push_back(y);
//    for (int i = 0; i < size; i++) {
//        maze[x][i]++;
//        maze[i][y]++;
//
//        if (x+i < size && y+i < size) {
//            maze[x+i][y+i]++;
//        }
//        if (x-i >= 0 && y+i < size) {
//            maze[x-i][y+i]++;
//        }
//        if (x-i >= 0 && y-i >= 0) {
//            maze[x-i][y-i]++;
//        }
//        if (x+i < size && y-i >= 0) {
//            maze[x+i][y-i]++;
//        }
//    }
//    maze[x][y] = -1;
//
//}
//
//void removeQueen (int x, int y) {
//    if (maze[x][y] != -1) {
//        return;
//    }
//    rowFilled.pop_back();
//    for (int i = 0; i < size; i++) {
//        maze[x][i]--;
//        maze[i][y]--;
//        if (x+i < size && y+i < size) {
//            maze[x+i][y+i]--;
//        }
//        if (x-i >= 0 && y+i < size) {
//            maze[x-i][y+i]--;
//        }
//        if (x-i >= 0 && y-i >= 0) {
//            maze[x-i][y-i]--;
//        }
//        if (x+i < size && y-i >= 0) {
//            maze[x+i][y-i]--;
//        }
//    }
//    maze[x][y] = 0;
//}
//
//void findPossible (int queen) {
//    if (check()) {
//        count++;
//        return;
//    }
//
//    if (queen < size) {
//        for (int j = 0; j < size; j++) {
//            if (maze[queen][j] == 0 && !std::binary_search(rowFilled.begin(),rowFilled.end(),j)) {
//                placeQueen(queen,j);
//                findPossible(queen+1);
//                removeQueen(queen,j);
//            }
//
//        }
//    }
//
//}
//
//int main () {
//    std::cin >> size;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            maze[i][j] = 0;
//        }
//    }
//
//    findPossible(0);
//    std::cout << count << std::endl;
//
//}