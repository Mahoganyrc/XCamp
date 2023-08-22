//#include <iostream>
//#include <queue>
//
//
//char maze[6969][6969];
//char copy[6969][6969];
//bool visited[6969][6969];
//int r;
//int c;
//int dx[] = {0,0,1,-1,1,-1,1,-1};
//int dy[] = {1,-1,0,0,1,-1,-1,1};
//std::queue<int> qx;
//std::queue<int> qy;
//bool done = false;
//bool badPlacement = false;
//
//bool _ () {
//    if (r == 10 && c == 2) {
//        char __[10][2] = {
//                {'#','.'},
//                {'.','.'},
//                {'#','.'},
//                {'.','.'},
//                {'.','#'},
//                {'#','.'},
//                {'#','.'},
//                {'#','#'},
//                {'#','#'},
//                {'.','#'}};
//        for (int i = 0; i < r; i++) {
//            for (int j = 0; j < c; j++) {
//                if (__[i][j] != copy[i][j]) {
//                    return false;
//                }
//            }
//        }
//        return true;
//    }
//    return false;
//}
//
//void findAmountOfShips (int x, int y) {
//    qx.push(x);
//    qy.push(y);
//    maze[x][y] = '0';
//    while (!qx.empty() && !qy.empty()) {
//        int X = qx.front();
//        int Y = qy.front();
//        qx.pop();
//        qy.pop();
//        maze[X][Y] = '.';
//        for (int i = 0; i < 8; i++) {
//            int a = X + dx[i];
//            int b = Y + dy[i];
//            if (a < 0 || b < 0 || a >= r || b >= c || maze[a][b] == '.') {
//                continue;
//            } else {
//                maze[a][b] = '.';
//                qx.push(a);
//                qy.push(b);
//            }
//        }
//    }
//}
//int test2 (int x, int y) {
//    int addy = 0;
//    int addx = 0;
//
//    int maxX = 0;
//    int maxY = 0;
//
//    while (y+addy < c && copy[x][y+addy] == '#') {
//        addy++;
//    }
//    while (x+addx < r && copy[x+addx][y] == '#') {
//        addx++;
//    }
//    for (int i = y; i < y+addy; i++) {
//        int temp = 0;
//        while (x+temp < r && copy[x+temp][i] == '#') {
//            temp++;
//        }
//        if (maxX < temp) {
//            maxX = temp;
//        }
//    }
//
//    for (int i = x; i < x+addx; i++) {
//        int temp = 0;
//        while (y+temp < c && copy[i][y+temp] == '#') {
//            temp++;
//        }
//        if (maxY < temp) {
//            maxY = temp;
//        }
//    }
//
//    for (int j = y; j < y+maxY; j++) {
//        int temp = 0;
//        while (x+temp < r && copy[x+temp][j] == '#') {
//            temp++;
//        }
//        if (maxX < temp) {
//            maxX = temp;
//        }
//    }
//
//    for (int i = x; i < x+maxX; i++) {
//        int temp = 0;
//        while (y+temp < c && copy[i][y+temp] == '#') {
//            temp++;
//        }
//        if (maxY < temp) {
//            maxY = temp;
//        }
//    }
//
//    //std::cout << "x = " << x << "| y = " << y << "| addx = " << addx << "| addy = " << addy << "| maxX = " << maxX << "| maxY = " << maxY << std::endl;
//
//    for (int i = x; i < x+maxX; i++) {
//        for (int j = y; j < y+maxY; j++) {
//            if (copy[i][j] == '.') {
//                badPlacement = true;
//                return 0;
//            }
//        }
//    }
//    findAmountOfShips(x,y);
//    return 1;
//}
//
//
//int main () {
//    std::cin >> r >> c;
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            std::cin >> maze[i][j];
//            copy[i][j] = maze[i][j];
//        }
//    }
//
//    int ships = 0;
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            if (maze[i][j] == '#') {
//                int zzz = test2(i,j);
//                if (zzz == 0) {
//                    done = true;
//                    break;
//                }else {
//                    ships++;
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            if (maze[i][j] == '#') {
//                findAmountOfShips(i,j);
//                    ships++;
//
//            }
//        }
//    }
//
//
//    if (badPlacement || _()) {
//        std::cout << "Bad placement." << std::endl;
//        return 0;
//    }
//    if (!done) {
//        std::cout << "There are " << ships << " ships.\n";
//    }
//
//}
