//#include <iostream>
//
//
//int maze[20][20];
//int size;
//int solutions = 0;
//const int SEEN = 2;
//const int QUEEN = 1;
//const int OUTOFBOUNDS = -1;
//const int EMPTY = 0;
//
//void markAllSeenLocations (int x, int y);
//void findAllPossibleSolutions (int i);
//void checkValidSolution ();
//
//void placeQueen (int x, int y);
//void removeQueen( int x, int y);
//void removeAllSeenLocations(int x, int y);
//void resetSeen();
//
//void findAllPossibleSolutions (int i) {
//
//
//    if (i < size) {
//        for (int j = 0; j < size; j++) {
//
//            if (maze[i][j] == EMPTY) {
//
//                placeQueen(i, j);
//
//
//                findAllPossibleSolutions(i+1);
//                removeQueen(i, j);
//
//            }
//        }
//    }
//
//}
//
//void placeQueen (int x, int y) {
//
//    markAllSeenLocations(x, y);
//    maze[x][y] = QUEEN;
//    checkValidSolution();
//}
//
//
//
//void markAllSeenLocations (int x, int y) {
//
//    for (int i = 0; i < size; i++) {
//        if (maze[x][i] == EMPTY && i != y) {
//            maze[x][i] = SEEN;
//        }
//    }
//
//    for (int i = 0; i < size; i++) {
//        if (maze[i][y] == EMPTY && i != x ) {
//            maze[i][y] = SEEN;
//        }
//    }
//
//    for (int i = 0; i < size; i++) {
//        if (maze[x+i][y+i] == EMPTY && x+i < size && y+i < size) {
//            maze[x+i][y+i] = SEEN;
//        }
//
//        if (maze[x-i][y-i] == EMPTY && x-i >= 0 && y-i >= 0) {
//            maze[x-i][y-i] = SEEN;
//        }
//
//
//    }
//
//    for (int i = 0; i < size; i++) {
//        if (maze[x-i][y+i] == EMPTY && x+i < size && y+i < size) {
//            maze[x+i][y+i] = SEEN;
//        }
//
//        if (maze[x-i][y-i] == EMPTY && x-i >= 0 && y-i >= 0) {
//            maze[x-i][y-i] = SEEN;
//        }
//
//
//    }
//
//    for (int i = 0; i < size; i++) {
//        if (maze[x-i][y+i] == EMPTY && x-i >= 0 && y+i < size) {
//            maze[x-i][y+i] = SEEN;
//        }
//
//        if (maze[x+i][y-i] == EMPTY && x+i < size && y-i >= 0) {
//            maze[x+i][y-i] = SEEN;
//        }
//
//
//    }
//
//}
//
//void removeAllSeenLocations (int x, int y) {
//
//    for (int i = 0; i < size; i++) {
//        if (maze[x][i] == SEEN && i != y) {
//            maze[x][i] = EMPTY;
//        }
//    }
//
//    for (int i = 0; i < size; i++) {
//        if (maze[i][y] == SEEN && i != x ) {
//            maze[i][y] = EMPTY;
//        }
//    }
//
//    for (int i = 0; i < size; i++) {
//        if (maze[x+i][y+i] == SEEN && x+i < size && y+i < size) {
//            maze[x+i][y+i] = EMPTY;
//        }
//
//        if (maze[x-i][y-i] == SEEN && x-i >= 0 && y-i >= 0) {
//            maze[x-i][y-i] = EMPTY;
//        }
//
//    }
//
//    for (int i = 0; i < size; i++) {
//        if (maze[x-i][y+i] == SEEN && x-1 >= 0 && y+i < size) {
//            maze[x-i][y+i] = EMPTY;
//        }
//
//        if (maze[x+i][y-i] == SEEN && x+1 < size && y-1 >= 0) {
//            maze[x+i][y-i] = EMPTY;
//        }
//
//
//
//    }
//
//
//
//
//}
//
//void removeQueen (int x, int y) {
//
//    removeAllSeenLocations(x, y);
//    maze[x][y] = EMPTY;
//
//    resetSeen();
//}
//
//void resetSeen () {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size;j++) {
//            if (maze[i][j] == SEEN) {
//                maze[i][j] = EMPTY;
//            }
//        }
//    }
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size;j++) {
//            if (maze[i][j] == QUEEN) {
//                placeQueen(i, j);
//            }
//        }
//    }
//}
//
//void checkValidSolution () {
//
//    int queenCounter = 0;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size;j++) {
//            if (maze[i][j] == QUEEN) {
//                queenCounter++;
//            }
//        }
//    }
//
//    if (queenCounter == size) {
//        //printMaze();
//        solutions++;
//    }
//    return;
//
//}
//
//
//int main () {
//    std::cin >> size;
//    for (int i = 0; i < 13; i++) {
//        for (int j = 0; j < 13; j++) {
//            if (i <= (size-1) && j <= (size-1)) {
//                maze[i][j] = EMPTY;
//            } else {
//                maze[i][j] = OUTOFBOUNDS;
//            }
//
//        }
//    }
//
//
//    findAllPossibleSolutions(0);
//
//    std::cout << solutions << std::endl;
//    return 0;
//}
