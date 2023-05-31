////#include <vector>
////#include <iostream>
////#include <sstream>
////
////int maze[105][105];
////int sizeX;
////int sizeY;
////
////
////int highestPoint = 0;
////int highestX;
////int highestY;
////int lowestPoint= 9999999999;
////
////
////std::vector<int> pathLengths;
////
////void findLongestPath(int x, int y, int pathCount ) {
////
////    //std::cout << "entering maze[" << x << "][" << y << "] = " << maze[x][y] << " | current COunt = " << pathCount << std::endl;
////
////
////
////    if (maze[x][y] == lowestPoint) {
////        pathLengths.push_back(pathCount);
////        return;
////    }
////
////
////    if (x - 1 >= 0 && maze[x][y] > maze[x-1][y]) {
////        findLongestPath(x - 1, y, pathCount+1);
////    }
////    if (y + 1 < sizeY && maze[x][y] > maze[x][y+1]) {
////        findLongestPath(x, y + 1, pathCount+1);
////    }
////    if (x + 1 < sizeX && maze[x][y] > maze[x+1][y]) {
////        findLongestPath(x + 1, y, pathCount+1);
////    }
////    if (y - 1 >= 0 && maze[x][y] > maze[x][y-1]) {
////        findLongestPath(x, y - 1, pathCount+1);
////    }
////
////
////}
////
////
////int main () {
////
////    std::string input[1000];
////    int z = 0;
////
////    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
////        z++;
////    }
////
////    std::stringstream ss(input[0]);
////
////    z =0;
////    int n;
////    while (ss >> n) {
////        if (z == 0) {
////            sizeX = n;
////        }
////        if (z == 1) {
////            sizeY = n;
////        }
////        z++;
////    }
////
////
////    for (int i = 0; i < sizeX; i++) {
////        std::stringstream ss(input[i + 1]);
////        for (int j = 0; j < sizeY; j++) {
////            ss >> maze[i][j];
////        }
////    }
////
////    for (int i = 0; i <sizeX; i++) {
////        for (int ii = 0; ii < sizeY; ii++) {
////
////            if (maze[i][ii] > highestPoint) {
////                highestPoint = maze[i][ii];
////                highestX = i;
////                highestY = ii;
////            }
////            if (maze[i][ii] < lowestPoint) {
////                lowestPoint = maze[i][ii];
////            }
////        }
////
////    }
////
////
////
////    findLongestPath(highestX,highestY,1);
////
////    int biggest = 0;
////    for (int i = 0; i < pathLengths.size(); i++) {
////        //std::cout << pathLengths[i] << std::endl;
////        if (pathLengths[i] > biggest) {
////            biggest = pathLengths[i];
////
////        }
////    }
////    //std::cout << std::endl;
////    std::cout << biggest << std::endl;
////    std::cout << std::endl;
////    std::cout << "Nerd Information: " << std::endl;
////    std::cout << "Highest Point: " << highestPoint << std::endl;
////    std::cout << "Lowest Point: " << lowestPoint << std::endl;
////    std::cout << "Highest X: " << highestX << std::endl;
////    std::cout << "Highest Y: " << highestY << std::endl;
////
////
////    for (int i = 0; i <sizeX; i++) {
////        for (int ii = 0; ii < sizeY; ii++) {
////            std::cout << maze[i][ii] << " ";
////            }
////            std::cout << std::endl;
////        }
////
////
////
////    return 0;
////}
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int MAXN = 105; // Maximum size of the ski area
//int n, m; // Rows and columns of the ski area
//int h[MAXN][MAXN]; // Heights of the spots in the ski area
//int memo[MAXN][MAXN]; // Memoization array for DFS
//
//int dfs(int i, int j) {
//    if (memo[i][j] != -1) {
//        return memo[i][j]; // If the result is already computed, return it
//    }
//    memo[i][j] = 1; // Initialize the memoization value to 1 (minimum path length)
//    if (i > 0 && h[i-1][j] < h[i][j]) {
//        memo[i][j] = max(memo[i][j], 1 + dfs(i-1, j)); // Check neighbor above
//    }
//    if (j > 0 && h[i][j-1] < h[i][j]) {
//        memo[i][j] = max(memo[i][j], 1 + dfs(i, j-1)); // Check neighbor to the left
//    }
//    if (i < n-1 && h[i+1][j] < h[i][j]) {
//        memo[i][j] = max(memo[i][j], 1 + dfs(i+1, j)); // Check neighbor below
//    }
//    if (j < m-1 && h[i][j+1] < h[i][j]) {
//        memo[i][j] = max(memo[i][j], 1 + dfs(i, j+1)); // Check neighbor to the right
//    }
//    return memo[i][j];
//}
//
//int main() {
//    // Read input
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> h[i][j];
//        }
//    }
//    // Initialize memoization array
//    memset(memo, -1, sizeof(memo));
//    // Find the maximum path length by DFS
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (memo[i][j] == -1) {
//                ans = max(ans, dfs(i, j));
//            }
//        }
//    }
//    // Output result
//    cout << ans << endl;
//    return 0;
//}
