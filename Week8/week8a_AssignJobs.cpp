//#include <iostream>
//#include <sstream>
//#include <vector>
//
//int size;
//int lowestCost = 1000000000;
//int maze[21][21];
//int editedMaze[21][21];
//
//
//const int EMPTY = 0;
//const int SEEN = 2;
//const int CHOSEN = 1;
//
//
//
//void setRC(int x, int y, bool isUndo);
//void undo (int x, int y);
//void refreshMaze();
//
//
//
//void assignJobs (int x, int y, int counter, int cost) {
//
//    if (cost > lowestCost) {
//        return;
//    }
//
//    if (counter == size) {
//        if (cost < lowestCost) {
//            lowestCost = cost;
//        }
//        return;
//    }
//
//
//    if (counter < size) {
//        for (int i = 0; i < size; i++) {
//            if (maze[x][i] == EMPTY) {
//                setRC(x, i,false);
//                //printMaze();
//                assignJobs(x + 1, y, counter + 1, cost + editedMaze[x][i]);
//                undo(x, i);
//            }
//        }
//
//    }
//}
//
//void refreshMaze () {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            if (maze [i][j] == CHOSEN) {
//                setRC(i,j,true);
//            }
//        }
//    }
//}
//
//void setRC (int x, int y, bool isUndo) {
//
//    for (int i = 0; i < size; i++) {
//        if (maze[x][i] == EMPTY) {
//            maze[x][i] = SEEN;
//        }
//
//        if (maze[i][y] == EMPTY) {
//            maze[i][y] = SEEN;
//        }
//
//    }
//
//    maze[x][y] = CHOSEN;
//
//    if (isUndo) {
//        return;
//    }
//}
//
//void undo (int x, int y) {
//
//    for (int i = 0; i < size; i++) {
//
//            maze[x][i] = EMPTY;
//            maze[i][y] = EMPTY;
//
//    }
//    maze[x][y] = EMPTY;
//    refreshMaze();
//}
//
//
//
//
//int main () {
//
//    std::string input[1000];
//
//    int z = 0;
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//    }
//
//    std::stringstream ss(input[0]);
//
//    z = -1;
//    int n;
//    while (ss >> n) {
//        if (z == -1) {
//            size = n;
//
//        }
//        z++;
//    }
//
//
//    for (int i = 0; i < size; i++) {
//        std::stringstream ss(input[i + 1]);
//        for (int j = 0; j < size; j++) {
//            ss >> editedMaze[i][j];
//            maze[i][j] = EMPTY;
//        }
//    }
//
//    assignJobs(0,0,0,0);
//    std::cout << lowestCost << std::endl;
//    return 0;
//}