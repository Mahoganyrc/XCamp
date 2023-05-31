//#include <iostream>
//#include <random>
//#include <ctime>
//#include <cstdlib>
//
//const int START = 69;
//const int END = 420;
//const int EMPTY = 0;
//const int LONG = 5;
//const int SHORT = 6;
//const int TURN_NE = -1;
//const int TURN_SE = -2;
//const int TURN_SW = -3;
//const int TURN_NW = -4;
//
//const int left = 101;
//const int right = 102;
//const int up = 103;
//const int down = 104;
//
//bool possible = false;
//bool Xpossible = false;
//
//int maze[4][10];
//bool visited[4][10];
//bool visited2[4][10];
//
//void checkPossible (int x, int y, int direction) {
//
//    if (visited[x][y] == true) {
//        return;
//    }
//
//    if (x < 0 || x > 3 || y < 0 || y > 9) {
//        return;
//    }
//
//    if (maze[x][y] == END || possible == true) {
//        possible = true;
//        return;
//    }
//
//    if (maze[x][y] == EMPTY) {
//        return;
//    }
//
//    std::cout << "maze[" << x << "][" << y << "] = " << maze[x][y] << std::endl;
//    visited[x][y] = true;
//    if (maze[x][y] == START) {
//        checkPossible(x-1, y, up);
//        checkPossible(x+1,y,down);
//        checkPossible(x,y-1, left);
//        checkPossible(x,y+1, right);
//    }
//
//
//    if (maze[x][y] < 0) {
//        if (direction == left) {
//            checkPossible(x-1, y, up);
//            checkPossible(x+1,y,down);
//        }
//        if (direction == right) {
//            checkPossible(x-1, y, up);
//            checkPossible(x+1,y,down);
//        }
//        if (direction == up) {
//            checkPossible(x,y-1, left);
//            checkPossible(x,y+1, right);
//        }
//        if (direction == down) {
//            checkPossible(x,y-1, left);
//            checkPossible(x,y+1, right);
//        }
//
//    }
//
//    if (maze[x][y] == LONG || maze[x][y] == SHORT) {
//
//        if (direction == left) {
//            checkPossible(x,y-1, left);
//        }
//        if (direction == right) {
//            checkPossible(x,y+1, right);
//        }
//        if (direction == up) {
//            checkPossible(x-1,y, up);
//        }
//        if (direction == down) {
//            checkPossible(x+1,y, down);
//        }
//
//    }
//
//    visited[x][y] = false;
//
//}
//
//void reroll () {
//    int rand();
//    srand(time(NULL));
//
//
//
//    int dice_roll;
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 10; j++) {
//            visited[i][j] = false;
//            // int dice_roll = distribution(generator);
//            dice_roll = rand() % 7;
//            if (dice_roll >= 1 && dice_roll <= 4) {
//                dice_roll*=-1;
//            }
//            maze[i][j] = dice_roll;
//        }
//
//    }
//    maze[0][0] = START;
//    maze[3][9] = END;
//}
//
//void checkCorrect (int x, int y, int direction) {
//
//    if (visited2[x][y] == true) {
//        return;
//    }
//
//    if (x < 0 || x > 3 || y < 0 || y > 9) {
//        return;
//    }
//
//    if (maze[x][y] == END || Xpossible == true) {
//        Xpossible = true;
//        return;
//    }
//
//    if (maze[x][y] == EMPTY) {
//        return;
//    }
//
//    std::cout << "maze[" << x << "][" << y << "] = " << maze[x][y] << std::endl;
//    visited2[x][y] = true;
//
//    if (maze[x][y] == START) {
//        checkPossible(x-1, y, up);
//        checkPossible(x+1,y,down);
//        checkPossible(x,y-1, left);
//        checkPossible(x,y+1, right);
//    }
//
//
//    if (maze[x][y] < 0) {
//
//        switch (maze[x][y]) {
//            case -1:
//                if (direction == down) {
//                    checkPossible (x,y+1, right);
//                }else if ( direction == left) {
//                    checkPossible (x-1,y, up);
//                }
//                break;
//            case -2:
//                if (direction == up) {
//                    checkPossible (x,y+1, right);
//                }else if ( direction == left) {
//                    checkPossible (x+1,y, down);
//                }
//                break;
//            case -3:
//                if (direction == up) {
//                    checkPossible (x,y-1, left);
//                }else if ( direction == right) {
//                    checkPossible (x+1,y, down);
//                }
//                break;
//            case -4:
//                if (direction == down) {
//                    checkPossible (x,y-1, left);
//                }else if ( direction == right) {
//                    checkPossible (x-1,y, up);
//                }
//                break;
//        }
//    }
//
//    if (maze[x][y] == LONG || maze[x][y] == SHORT) {
//
//        if (direction == left) {
//            checkPossible(x,y-1, left);
//        }
//        if (direction == right) {
//            checkPossible(x,y+1, right);
//        }
//        if (direction == up) {
//            checkPossible(x-1,y, up);
//        }
//        if (direction == down) {
//            checkPossible(x+1,y, down);
//        }
//
//    }
//
//    visited2[x][y] = false;
//
//}
//
//
//int main () {
//
////    std::default_random_engine generator;
////    std::uniform_int_distribution<int> distribution(0,6);
//
//
//
//
////    for (int i = 0; i < 4; i++) {
////        for (int j = 0; j < 10; j++) {
////
////            std::cout << maze[i][j] << " ";
////        }
////        std::cout << std::endl;
////    }
//
//    reroll();
//    checkPossible(0,0,0);
//
//    while (possible == false) {
//        reroll();
//        checkPossible(0,0,0);
//    }
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 10; j++) {
//
//            std::cout << maze[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    return 0;
//
//}