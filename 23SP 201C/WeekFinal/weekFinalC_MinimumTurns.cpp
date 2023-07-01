//#include <sstream>
//#include <iostream>
//
//int sizeX;
//int sizeY;
//int maze[101][101];
//
//int stepCount = 696969696;
//
//int startX;
//int startY;
//int endX;
//int endY;
//
//
//const int VISITED = 2;
//const int UP = -1;
//const int DOWN = -2;
//const int LEFT = -3;
//const int RIGHT = -4;
//const int START = 3;
//const int END = 4;
//
//void checkTurns (int x, int y, int step, int direction) {
//
//
//    if (x == endX && y == endY) {
//        if (step < stepCount) {
//            stepCount = step;
//        }
//        return;
//    }
//    if (maze[x][y] == VISITED) {
//        return;
//    }
//    if (maze[x][y] == 1) {
//        return;
//    }
//
//
//
//    if (maze[x][y] == 0) {
//        maze[x][y] = VISITED;
//    }
//
//
//
//
//
//    if ( x - 1 >= 0 && direction == UP) {
//        checkTurns(x - 1, y, step, UP);
//    }else if ( x - 1 >= 0 && direction != UP) {
//        checkTurns(x - 1, y, step + 1, UP);
//    }
//
//    if ( x + 1 < sizeX && direction == DOWN) {
//        checkTurns(x + 1, y, step, DOWN);
//    }else if ( x + 1 < sizeX && direction != DOWN) {
//        checkTurns(x + 1, y, step + 1, DOWN);
//    }
//
//    if ( y - 1 >= 0 && direction == LEFT) {
//        checkTurns(x, y - 1, step, LEFT);
//    }else if ( y - 1 >= 0 && direction != LEFT) {
//        checkTurns(x, y - 1, step + 1, LEFT);
//    }
//
//    if ( y + 1 < sizeY && direction == RIGHT) {
//        checkTurns(x, y + 1, step, RIGHT);
//    }else if ( y + 1 < sizeY && direction != RIGHT) {
//        checkTurns(x, y + 1, step + 1, RIGHT);
//    }
//        maze[x][y] = 0;
//
//}
//
//
//int main () {
//    int z = -3;
//    std::string input[1000];
//
//    for (int i = 0; std::getline(std::cin, input[i]) && !input[i].empty(); i++) {
//    }
//
//    int n;
//    std::stringstream ss(input[0]);
//    while (ss >> n) {
//        z++;
//        if (z == -2) {
//            sizeX = n;
//        } else if (z == -1) {
//            sizeY = n;
//        }
//    }
//
//    z = 0;
//    for (int i = 0; i < sizeX; i++) {
//        std::stringstream ss(input[i+1]);
//        for (int j = 0; j < sizeY; j++) {
//            ss >> maze[i][j];
//        }
//    }
//
//    std::stringstream sss(input[sizeX+1]);
//    sss >> startX;
//    sss >> startY;
//    sss >> endX;
//    sss >> endY;
//
//    startX--;
//    startY--;
//    endX--;
//    endY--;
//    maze[startX][startY] = START;
//    maze[endX][endY] = END;
//
//
//    if (startX == endX && startY == endY) {
//        std::cout << 0 << std::endl;
//        return 0;
//    }
//
//    checkTurns(startX, startY, -1, 0);
//
//    std::cout << stepCount << std::endl;
//
//    return 0;
//
//
//}