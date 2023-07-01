//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//// 1 = lower 2 = upper
//
//struct coordinate {
//    int x;
//    int y;
//};
//
//std::map<std::string, std::string> portal1To2;
//std::map<std::string, std::string> portal2To1;
//std::map<char, std::string> uncompletePortal;
//std::map<char, std::string> allPortals;
//
//int n;
//int m;
//char maze[101][101];
//bool visited[101][101];
//std::string visitedPortals;
//int shortest = 1000000000;
//
//std::string trim (std::string s) {
//    return s.erase(s.find_last_not_of(" \t\n\r\f\v") + 1).erase(0, s.find_first_not_of(" \t\n\r\f\v"));
//}
//bool portalVisited (char input) {
//    //returns true if 1x portal
//    // returns false if 2x portal
//    if (visitedPortals.find(input) != std::string::npos) {
//        return true;
//    }
//    return false;
//}
//
//coordinate getCoord (std::string inputX) {
//    coordinate temp;
//    temp.x = std::stoi(inputX.substr(0, inputX.find(" ", 0)));
//    temp.y = std::stoi(inputX.substr(inputX.find(" ", 0)+1, inputX.size()));
//    return temp;
//}
//
//coordinate teleport (std::string input, int x) {
//    coordinate temp;
//    std::string tempString;
//    if (x == 12) {
//        tempString = portal1To2.find(input)->second;
//    }else if (x == 21) {
//        tempString = portal2To1.find(input)->second;
//    }
//    temp = getCoord(tempString);
//    return temp;
//
//}
//
//void findPossible (int x, int y, int step) {
//
//    if (maze[x][y] == '1') {
//        return;
//    }
//    if (visited[x][y]) {
//        return;
//    }
//
//    if (step >= shortest) {
//        return;
//    }
//
//    if (x == n-1 && y == m-1) {
//        if (step < shortest) {
//            shortest = step;
//        }
//        return;
//    }
//
//
//    if (std::isalpha(maze[x][y])) {
//        //lower == 1
//        if (std::islower(maze[x][y])) {
//            coordinate temp = teleport(allPortals.find(maze[x][y])->second,12);
//            findPossible(temp.x, temp.y, step);
//
//        } else if (std::isupper(maze[x][y])) {
//            coordinate temp = teleport(allPortals.find(maze[x][y])->second,21);
//            findPossible(temp.x, temp.y, step);
//        }
//    } else {
//        visited[x][y] = true;
//        if (x+1 < n) {
//            findPossible(x+1, y, step+1);
//        }
//        if (x-1 >= 0) {
//            findPossible(x-1, y, step+1);
//        }
//        if (y+1 < m) {
//            findPossible(x, y+1, step+1);
//        }
//        if (y-1 >= 0) {
//            findPossible(x, y-1, step+1);
//        }
//    }
//
//
//
//
//    visited[x][y] = false;
//}
//
//
//
//int main () {
//
//    std::cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        char charInput;
//        std::string stringInput;
//        std::string userInput;
//        std::cin >> userInput;
//
//        for (int j = 0; j < m; j++) {
//            maze[i][j] = userInput.at(j);
//            charInput = userInput.at(j);
//
//            if (std::isalpha(charInput)) {
//                stringInput = std::to_string(i) + " " + std::to_string(j);
//                stringInput = trim(stringInput);
//
//                if (!portalVisited(charInput)) {
//                    visitedPortals += charInput;
//                    uncompletePortal.insert(std::make_pair(charInput, stringInput));
//                    maze[i][j] = tolower(maze[i][j]);
//                    allPortals.insert(std::make_pair(tolower(charInput), stringInput));
//
//                } else {
//                    portal1To2.insert(std::make_pair(uncompletePortal.at(charInput), stringInput));
//                    portal2To1.insert(std::make_pair(stringInput,uncompletePortal.at(charInput)));
//                    maze[i][j] = toupper(maze[i][j]);
//                    allPortals.insert(std::make_pair(toupper(charInput), stringInput));
//                }
//            }
//
//        }
//    }
//
//    findPossible(0,0,0);
//    if (shortest == 1000000000) {
//        std::cout << "No Solution." << std::endl;
//    } else {
//        std::cout << shortest << std::endl;
//    }
//
//}
//
