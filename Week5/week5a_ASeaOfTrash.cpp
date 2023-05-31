//#include <iostream>
//#include <sstream>
//#include <vector>
//#include <unordered_set>
//int maze[101][101];
//int sizeX;
//int sizeY;
//std::vector<int> trashSizes;
//
//
//void findBiggestTrash(int x,int y) {
//
//    if (maze[x][y] == 0 || maze[x][y] == 2) {
//        return;
//    }
//
//    maze[x][y] = 2;
//
//    if (x+1 < sizeX) {
//        findBiggestTrash(x + 1, y);
//    }
//    if (x-1 >= 0) {
//        findBiggestTrash(x - 1, y);
//    }
//    if (y+1 < sizeY) {
//        findBiggestTrash(x, y + 1);
//    }
//    if (y-1 >= 0) {
//        findBiggestTrash(x, y - 1);
//    }
//
//}
//
//void getBiggestTrash() {
//    int amount = 0;
//
//    for (int i = 0; i < sizeX; i++) {
//        for (int j = 0; j < sizeY;j++) {
//            if (maze[i][j] == 2) {
//                maze[i][j] == 0;
//                amount++;
//            }
//        }
//    }
//    int minus = 0;
//    for (int i = 0; i < trashSizes.size(); i++) {
//        minus+=trashSizes[i];
//    }
//
//    amount = amount-minus;
//    trashSizes.push_back(amount);
//}
//
//int main () {
//
//    std::string input[1000];
//    int z = 0;
//    trashSizes.push_back(0);
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//        z++;
//    }
//    for (int ii = 1; ii < z;ii++) {
//        std::string dug = input[ii];
//        input[ii] = "";
//        for (auto itr : dug)
//        {
//            input[ii] += itr;
//            input[ii] += ' ';
//        }
//
//
//    }
//
//    std::stringstream ss(input[0]);
//
//    z =0;
//    int n;
//    while (ss >> n) {
//        if (z == 0) {
//            sizeX = n;
//        }
//        if (z == 1) {
//            sizeY = n;
//        }
//        z++;
//    }
//
//
//    for (int i = 0; i < sizeX; i++) {
//        std::stringstream ss(input[i + 1]);
//        for (int j = 0; j < sizeY; j++) {
//            ss >> maze[i][j];
//        }
//    }
//
//    for (int i = 0; i < sizeX; i++) {
//        for (int j = 0; j < sizeY; j++) {
//            if (maze[i][j] == 1) {
//
//                findBiggestTrash(i, j);
//                getBiggestTrash();
//            }
//        }
//    }
//
//    int biggest = 0;
//
//    for (int i = 0; i < trashSizes.size(); i++) {
//
//        if (trashSizes[i] > biggest) {
//            biggest = trashSizes[i];
//
//        }
//    }
//
//    std::cout << biggest << std::endl;
//
//
//
//
//
//    return 0;
//}