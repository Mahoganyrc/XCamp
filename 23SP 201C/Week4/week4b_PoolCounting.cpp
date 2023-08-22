//#include <iostream>
//#include <sstream>
//#include <vector>
//#include <unordered_set>
//int maze[101][101];
//int sizeX;
//int sizeY;
//int poolCount;
//std::vector<int> poolCounts;
//
//void findAmountOfPools(int x,int y, int poolSize) {
//
//    if (maze[x][y] == 0) {
//        return;
//    }
//    maze[x][y] = 0;
//
//
//    if (x+1 < sizeX) {
//        findAmountOfPools(x + 1, y,poolSize+1);
//    }
//    if (x-1 >= 0) {
//        findAmountOfPools(x - 1, y,poolSize+1);
//    }
//    if (y+1 < sizeY) {
//        findAmountOfPools(x, y + 1,poolSize+1);
//    }
//    if (y-1 >= 0) {
//        findAmountOfPools(x, y - 1,poolSize+1);
//    }
//
//    if (x+1 < sizeX && y+1 < sizeY) {
//        findAmountOfPools(x + 1, y+1,poolSize+1);
//    }
//    if (x-1 >= 0 && y-1 >= 0) {
//        findAmountOfPools(x - 1, y-1,poolSize+1);
//    }
//    if (x+1 < sizeX && y-1 >= 0) {
//        findAmountOfPools(x+1, y - 1,poolSize+1);
//    }
//    if (x - 1 >=0 && y + 1 <sizeY) {
//        findAmountOfPools(x - 1, y + 1,poolSize+1);
//    }
//
//
//
//}
//
//int main () {
//    std::string input[1000];
//    int z = 0;
//
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
//                poolCount++;
//                findAmountOfPools(i, j,1);
//                poolCounts.push_back(poolCount);
//
//            }
//        }
//    }
//    std::unordered_set<int> distinctElements;
//    for (int num : poolCounts) {
//        distinctElements.insert(num);
//    }
//
//    std::cout << distinctElements.size() << std::endl;
//
//    return 0;
//}