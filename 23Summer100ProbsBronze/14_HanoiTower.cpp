//#include <iostream>
//#include <stack>
//
//
//int size;
//class Tower{
//public:
//    int moveCount;
//    std::stack<int> *memoryLocation[3];
//    std::stack<int> towerA;
//    std::stack<int> towerB;
//    std::stack<int> towerC;
//
//    Tower() {
//        moveCount = 0;
//        memoryLocation[0] = &towerA;
//        memoryLocation[1] = &towerB;
//        memoryLocation[2] = &towerC;
//    }
//    void move(int fromTower, int toTower) {
//        int x = memoryLocation[fromTower]->top();
//        memoryLocation[fromTower]->pop();
//        memoryLocation[toTower]->push(x);
//        moveCount++;
//        std::cout << fromTower+1 << "->" << toTower+1 << std::endl;
//    }
//
//    int getMoveCount() {
//        return moveCount;
//    }
//};
//
//void towerOfHanoi (Tower& tower, int step, int fromTower, int toTower, int usingTower) {
//
//    if (step == 1) {
//        tower.move(fromTower,toTower);
//        return;
//    }
//
//    towerOfHanoi(tower,step-1,fromTower,usingTower,toTower);
//    tower.move(fromTower,toTower);
//    towerOfHanoi(tower,step-1,usingTower,toTower,fromTower);
//}
//
//
//int main () {
//    std::cin >> size;
//    Tower tower;
//
//    for (int i = 1; i <=size; i++) {
//        tower.towerA.push(i);
//    }
//
//    towerOfHanoi(tower,size,0,2,1);
//    std::cout << "tot=" << tower.getMoveCount() << std::endl;
//}
