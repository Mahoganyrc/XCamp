//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//
//int sizeN;
//int sizeM;
//char maze[6969][6969];
//std::map<std::pair<char,char>,int> answers;
//
//const char NORTH = 'N';
//const char EAST = 'E';
//const char SOUTH = 'S';
//const char WEST = 'W';
//
//const char NORTHEAST = 'A';
//const char SOUTHEAST = 'B';
//const char SOUTHWEST = 'C';
//const char NORTHWEST = 'D';
//
//const char p = ' ';
//
//
//void findPossible (int x, int y, char m, char o, int step, char direction) {
//
//
//    if (x < 0 || y < 0 || x >= sizeN || y >= sizeM ) {
//        return;
//    }
//
//    if (maze[x][y] != o && step == 3) {
//        return;
//    }
//
//    if (m == o || m == 'M' || o == 'O') {
//        return;
//    }
//
//
//    if (step == 3 && o != ' ') {
//
//        if (!answers.count(std::make_pair(m,o))) {
//            answers.insert(std::make_pair(std::make_pair(m,o),1));
//            //std::cout << "maze[" << x << "][" << y << "] | " << m << " " << o << " | step: " << step << " | amount: " << std::endl;
//
//        }else {
//            std::map<std::pair<char,char>,int>::const_iterator pos = answers.find(std::make_pair(m,o));
//            int xd = pos->second;
//            answers.erase(std::make_pair(m,o));
//            answers.insert(std::make_pair(std::make_pair(m,o),xd+1));
//            //std::cout << "maze[" << x << "][" << y << "] | " << m << " " << o << " | step: " << step << " | amount: " << x+1 << std::endl;
//
//        }
//        return;
//    }
//
//    if (step == 2) {
//        o = maze[x][y];
//    }
//
//    if (step == 1) {
//        m = maze[x][y];
//        findPossible(x-1,y+0,m,o,step+1,NORTH);
//        findPossible(x-1,y+1,m,o,step+1,NORTHEAST);
//        findPossible(x+0,y+1,m,o,step+1,EAST);
//        findPossible(x+1,y+1,m,o,step+1,SOUTHEAST);
//        findPossible(x+1,y+0,m,o,step+1,SOUTH);
//        findPossible(x+1,y-1,m,o,step+1,SOUTHWEST);
//        findPossible(x+0,y-1,m,o,step+1,WEST);
//        findPossible(x-1,y-1,m,o,step+1,NORTHWEST);
//        return;
//    }
//
//    switch (direction) {
//        case NORTH:
//            findPossible(x-1,y+0,m,o,step+1,NORTH);
//            break;
//        case NORTHEAST:
//            findPossible(x-1,y+1,m,o,step+1,NORTHEAST);
//            break;
//        case EAST:
//            findPossible(x+0,y+1,m,o,step+1,EAST);
//            break;
//        case SOUTHEAST:
//            findPossible(x+1,y+1,m,o,step+1,SOUTHEAST);
//            break;
//        case SOUTH:
//            findPossible(x+1,y+0,m,o,step+1,SOUTH);
//            break;
//        case SOUTHWEST:
//            findPossible(x+1,y-1,m,o,step+1,SOUTHWEST);
//            break;
//        case WEST:
//            findPossible(x+0,y-1,m,o,step+1,WEST);
//            break;
//        case NORTHWEST:
//            findPossible(x-1,y-1,m,o,step+1,NORTHWEST);
//            break;
//    }
//
//}
//
//
//int main () {
//    std::cin >> sizeN >> sizeM;
//    char input;
//    for (int i = 0; i < sizeN; i++) {
//        for (int j = 0; j < sizeM; j++) {
//            std::cin >> input;
//            maze[i][j] = input;
//        }
//    }
//
//    for (int i = 0; i < sizeN; i++) {
//        for (int j = 0; j < sizeM; j++) {
//            findPossible(i,j,maze[i][j],p,1,p);
//        }
//    }
//
//    std::vector<int> output;
//    output.push_back(0);
//
//    for (const auto& pair : answers) {
//        output.push_back(pair.second);
//    }
//
//    std::sort(output.begin(),output.end());
//    std::cout << output.at(output.size()-1) << std::endl;
//
//
//
//
//}