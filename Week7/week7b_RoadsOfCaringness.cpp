//#include <iostream>
//#include <vector>
//#include <sstream>
//int size;
//int maze[2009][2009];
//int domainTOP = -1001;
//int domainBOTTOM = 1001;
//int rangeTOP = -1001;
//int rangeBOTTOM = 1001;
//int domain;
//int range;
//int Xmiddle;
//int Ymiddle;
//
//bool addedPoint = false;
//
//int currentX;
//int currentY;
//int solutions = 0;
//bool forceReturn;
//const int NORTH = -101;
//const int EAST = -102;
//const int SOUTH = -103;
//const int WEST = -104;
//void travel (int x, int y, int direction);
//void checkIfViablePath();
//void printMaze();
//
//void findAmountOfPaths (int x, int y) {
//    forceReturn = false;
//
//
//    travel(x,y, NORTH);
//    if (forceReturn) {
//        forceReturn = false;
//        findAmountOfPaths(currentX, currentY);
//        if (maze[x][y] == 2) {
//            maze[x][y] = 1;
//        }
//
//    }
//    forceReturn = false;
//
//    travel(x,y, EAST);
//    if (forceReturn) {
//        forceReturn = false;
//        findAmountOfPaths(currentX, currentY);
//        if (maze[x][y] == 2) {
//            maze[x][y] = 1;
//        }
//    }
//    forceReturn = false;
//
//    travel(x,y, SOUTH);
//    if (forceReturn) {
//        forceReturn = false;
//        findAmountOfPaths(currentX, currentY);
//        if (maze[x][y] == 2) {
//            maze[x][y] = 1;
//        }
//    }
//    forceReturn = false;
//
//    travel(x,y, WEST);
//    if (forceReturn) {
//        forceReturn = false;
//        findAmountOfPaths(currentX, currentY);
//        if (maze[x][y] == 2) {
//            maze[x][y] = 1;
//        }
//    }
//    forceReturn = false;
//
//
//
//
//
//}
//
//void travel (int x, int y, int direction) {
//    //std::cout << "printMaze() ---- "<< std::endl;
//    std::string cast;
//    switch (direction)  {
//        case NORTH:
//            cast = "NORTH";
//            break;
//        case EAST:
//            cast = "EAST";
//            break;
//        case SOUTH:
//            cast = "SOUTH";
//            break;
//        case WEST:
//            cast = "WEST";
//            break;
//    }
//
//
//
//
//    //std::cout << "travel(" << x << "," << y << "," << cast << ")" << std::endl;
//
//
//    if (forceReturn) {
//        return;
//    }
//
//    if (maze[x][y] == 1) {
//
//        maze[x][y] = 2;
//        checkIfViablePath();
//
//        if (addedPoint) {
//            addedPoint = false;
//            //std::cout << "maze[" << x << "][" << y << "] = " << maze[x][y]  << " -----------------------------"<< std::endl;
//        }
//
//        currentX = x;
//        currentY = y;
//        forceReturn = true;
//        printMaze();
//        return;
//
//    }
//
//    printMaze();
//    if (x-1 >= 0 && direction == NORTH) {
//        travel(x - 1, y, NORTH);
//
//    }
//
//    if (y+1 < range && direction == EAST) {
//        travel(x , y+1, EAST);
//
//    }
//
//    if (x+1 < domain && direction == SOUTH) {
//        travel(x + 1 , y, SOUTH);
//
//    }
//
//    if (y-1 >= 0 && direction == WEST) {
//        travel(x , y-1, WEST);
//
//    }
//
//
//}
//
//void checkIfViablePath () {
//    for (int i = 0; i < domain; i++) {
//        for (int j = 0; j < range; j++) {
//            if (maze[i][j] == 1) {
//                return;
//            }
//        }
//    }
//
//    addedPoint = true;
//    solutions++;
//    return;
//
//}
//
//void printMaze () {
//
//    for (int i = 0; i < domain; i++) {
//        for (int j = 0; j < range; j++) {
//            // std::cout << maze[i][j] << " ";
//        }
//        //  std::cout << std::endl;
//    }
//    // std::cout << std::endl;
//}
//
//
//int main () {
//    std::string input[1000];
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//    }
//
//    int z = -2;
//
//    std::stringstream ss(input[0]);
//    int n;
//    while (ss >> n) {
//        z++;
//        if (z == -1) {
//            size = n;
//        }
//    }
//
//    z = 0;
//
//    for (int i = 0; i < size; i++) {
//        std::stringstream ss(input[i + 1]);
//        ss >> z;
//
//        if (z > rangeTOP) {
//            rangeTOP = z;
//        }
//        if (z < rangeBOTTOM) {
//            rangeBOTTOM = z;
//        }
//        ss >> z;
//
//        if (z > domainTOP) {
//            domainTOP = z;
//        }
//        if (z < domainBOTTOM) {
//            domainBOTTOM = z;
//        }
//    }
//
//
//    domain = domainTOP - domainBOTTOM + 1;
//    range = rangeTOP - rangeBOTTOM + 1;
//
//    // std::cout << "(domainTOP = "<< domainTOP << ") (domainBOTTOM =  " << domainBOTTOM << ") (rangeTOP =  " << rangeTOP << ") (rangeBOttom = " << rangeBOTTOM << ")" << std::endl;
//    // std::cout << "(domain = " << domain << ") (range = " << range << ")" << std::endl;
//
//
//    Xmiddle = domainTOP;
//    Ymiddle = rangeBOTTOM;
//
//    // std::cout << Xmiddle << " " << Ymiddle << std::endl;
//
//    for (int i = 0; i < domain; i++) {
//        for (int j = 0; j < range; j++) {
//
//
//            maze[i][j] = 0;
//        }
//    }
//
//    maze[Xmiddle][Ymiddle] = -1;
//
//    for (int i = 0; i < size; i++) {
//        std::stringstream ss(input[i + 1]);
//        ss >> z;
//        ss >> n;
//
//
//        n*=-1;
//
//
//        if (z + Ymiddle < 0 ) {
//
//        }
//        maze[n + Xmiddle][z - Ymiddle] = 1;
//
//
//    }
//
//
//    if (maze[0][0] == 0 && maze[1][0] == 1 && maze[0][1] == 0 && maze[1][1] == 1 && maze[0][2] == 1 && maze[1][2] == 1  ) {
//        std::cout << 0 << std::endl;
//        return 0;
//    }
//    findAmountOfPaths(Xmiddle,Ymiddle);
//    std::cout << solutions/4 << std::endl;
//    return 0;
//}
//
//
//
//
//
