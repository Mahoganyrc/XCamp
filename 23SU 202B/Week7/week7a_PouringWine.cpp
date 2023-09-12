//#include <iostream>
//#include <queue>
//
//bool visited[200][200][200];
//
//
//
//int sizeA;
//int sizeB;
//int sizeC;
//
//struct CurrentWine {
//    int x;
//    int y;
//    int z;
//};
//
//
//CurrentWine pour (int inputa, int inputb, int inputc,int num) {
//    switch (num) {
//        case 0:
//            if (inputa+inputb > sizeB) {
//                return {(inputa+inputb)-sizeB,sizeB,inputc};
//            }else {
//                return {0,inputa+inputb,inputc};
//            }
//        case 1:
//            if (inputa+inputc > sizeC) {
//                return {(inputa+inputc)-sizeC,inputb,sizeC};
//            }else {
//                return {0,inputb,inputa+inputc};
//            }
//        case 2:
//            if (inputb+inputa > sizeA) {
//                return {sizeA,(inputb+inputa)-sizeA,inputc};
//            }else {
//                return {inputb+inputa,0,inputc};
//            }
//        case 3:
//            if (inputb+inputc > sizeC) {
//                return {inputa,(inputb+inputc)-sizeC,sizeC};
//            }else {
//                return {inputa,0,inputb+inputc};
//            }
//        case 4:
//            if (inputc+inputa > sizeA) {
//                return {sizeA,inputb,(inputc+inputa )-sizeA};
//            }else {
//                return {inputc+inputa,inputb,0};
//            }
//        case 5:
//            if (inputc+inputb > sizeB) {
//                return {inputa,sizeB,(inputc+inputb)-sizeB};
//            } else {
//                return {inputa,inputc+inputb,0};
//            }
//
//
//    }
//    return {inputa,inputb,inputc};
//}
//
//
//std::string bfs () {
//    std::queue<std::pair<CurrentWine,int>> q;
//    CurrentWine temp = {sizeA,0,0};
//    q.push(std::make_pair(temp,0));
//
//    int n = sizeA / 2;
//    while (!q.empty()) {
//        int a = q.front().first.x;
//        int b = q.front().first.y;
//        int c = q.front().first.z;
//        int step = q.front().second;
//        q.pop();
//
//        if ((a == n && b == n) || (b == n && c == n) || (a == n && c == n)) {
//            return std::to_string(step);
//        }
//
//        for (int i = 0; i < 6; i++) {
//            CurrentWine curr = pour(a,b,c,i);
//            if (!visited[curr.x][curr.y][curr.z]) {
//                visited[curr.x][curr.y][curr.z] = true;
//                CurrentWine push = {curr.x,curr.y,curr.z};
//                q.push(std::make_pair(push,step+1));
//            }
//
//        }
//    }
//    return "NO";
//}
//
//
//
//int main () {
//    std::cin >> sizeA >> sizeB >> sizeC;
//    std::cout << bfs();
//
//}
//
