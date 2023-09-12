//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <string>
//
//std::vector<std::string> dictionary;
//std::unordered_map<std::string,bool> visited;
//int dictionarySize;
//std::string start;
//std::string end;
//int leastSteps = 2147483647;
//
//bool _(std::string input, std::string last) {
//    int diff = std::abs(static_cast<int>(input.length()) - static_cast<int>(last.length()));
//    if (diff == 1) {
//        int amount = 0;
//        for (int i = 0; i < std::min(input.length(), last.length()); i++) {
//            if (input[i] != last[i]) {
//
//                if (last.length() < input.length()) {
//                    last.insert(i,1,input[i]);
//                }
//                if (last.length() > input.length()) {
//                    input.insert(i,1,last[i]);
//                }
//                amount++;
//            }
//            if (amount > 1) {
//                return false;
//            }
//        }
//        return true;
//    } else if (diff == 0) {
//        int amount = 0;
//        for (int i = 0; i < input.length(); i++) {
//            if (input[i] != last[i]) {
//                amount++;
//            }
//            if (amount > 1) {
//                return false;
//            }
//        }
//        return amount == 1;
//    }
//    return false;
//}
//
//
//
//void dfs (std::string input,int step) {
//    if (input == end) {
//        if (step < leastSteps) {
//            leastSteps = step;
//        }
//        return;
//    }
//
//    for (int i = 0; i < dictionarySize; i++) {
//        if (_(input,dictionary[i]) && !visited[dictionary[i]]) {
//            visited[dictionary[i]] = true;
//            dfs(dictionary[i],step+1);
//            visited[dictionary[i]] = false;
//        }
//    }
//}
//
//int main () {
//        std::string temp;
//        std::cin >> start >> end >> dictionarySize;
//
//        for (int i = 0; i < dictionarySize; i++) {
//            std::cin >> temp;
//            dictionary.push_back(temp);
//            visited[temp] = false;
//        }
//
//        dfs(start,0);
//        if (leastSteps != 2147483647) {
//            std::cout << leastSteps << std::endl;
//        }else {
//            std::cout << "-1" << std::endl;
//        }
//}