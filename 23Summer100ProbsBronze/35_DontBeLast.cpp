//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//
//
//int main () {
//    int size;
//    std::string key;
//    int value;
//    std::map<std::string,int> producedMilk;
//    std::vector<int> v;
//    int m = 99999999;
//
//    producedMilk["Annabelle"] = 0;
//    producedMilk["Bessie"] = 0;
//    producedMilk["Daisy"] = 0;
//    producedMilk["Elsie"] = 0;
//    producedMilk["Gertie"] = 0;
//    producedMilk["Henrietta"] = 0;
//    producedMilk["Maggie"] = 0;
//
//
//
//    std::cin >> size;
//
//    for (int i = 0; i < size; i++) {
//        std::cin >> key >> value;
//        producedMilk[key]+=value;
//    }
//    std::cout << std::endl;
//
//    for (const auto& elem : producedMilk) {
//        v.push_back(elem.second);
//        if (elem.second < m) {
//            m = elem.second;
//        }
//    }
//
//    std::sort(v.begin(),v.end());
//
//    int x = v.at(0);
//    while (!v.empty() && v.front() == x) {
//        v.erase(v.begin());
//    }
//    if (v.empty()) {
//        std::cout << "Tie" << std::endl;
//        return 0;
//    }
//
//    x = v.at(0);
//    std::string output;
//    bool b;
//
//
//    for (const auto& elem : producedMilk) {
//        if(elem.second == x && !b) {
//            b = true;
//            output = elem.first;
//        }else if (elem.second == x && b){
//            b = false;
//        }
//
//    }
//
//    if (!b) {
//        output = "Tie";
//    }
//
//    std::cout << output << std::endl;
//
//
//
//}