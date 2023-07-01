//#include <iostream>
//#include <sstream>
//#include <vector>
//char maze[101][101];
//int sizeX;
//int sizeY;
//int pathAmount;
//
//void amountOfPaths (int x,int y, char currentLetter) {
//
//    if (currentLetter == 'R') {
//        currentLetter = 'B';
//    } else {
//        currentLetter = 'R';
//    }
//
//    if (x == (sizeX - 1) && y == (sizeY - 1)) {
//        pathAmount++;
//    }
//
//    for (int i = x+1; i < sizeX; i++) {
//        for (int ii = y+1; ii < sizeY; ii++) {
//            if (maze[i][ii] == (currentLetter)) {
//                amountOfPaths(i,ii,currentLetter);
//            }
//        }
//    }
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
//        for (int ii = 0; ii < sizeY; ii++) {
//            maze[i][ii] = input[i+1].at(ii);
//        }
//    }
//
//    amountOfPaths(0,0,maze[0][0]);
//    std::cout << pathAmount << std::endl;
//
//    return 0;
//}