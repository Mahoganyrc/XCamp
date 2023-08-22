//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//struct Drank{
//    int p;
//    int m;
//    int t;
//};
//
//struct Sick{
//    int p;
//    int t;
//};
//
//struct Person {
//    std::vector<Drank> personDrank;
//    int personSick = -1;
//};
//
//enum health {
//    sick = true, safe = false
//};
//
//int n;
//int m;
//int d;
//int s;
//
//std::vector<Drank> vDrank;
//std::vector<Sick> vSick;
//std::vector<Person> vPerson;
//health possible[51];
//health allSick[51];
//health allSafe[51];
//
//const bool SAFE = false;
//const bool SICK = true;
//
//int main () {
//
//    std::cin >> n >> m >> d >> s;
//    for (int i = 0; i < n+1; i++) {
//        Person person;
//        vPerson.push_back(person);
//    }
//    for (int i = 0; i <= m; i++) {
//        allSick[i] = sick;
//        allSafe[i] = safe;
//        possible[i] = sick;
//    }
//
//    for (int i = 0; i < d; i++) {
//        Drank temp{};
//        std::cin >> temp.p >> temp.m >> temp.t;
//        vPerson[temp.p].personDrank.push_back(temp);
//        vDrank.push_back(temp);
//    }
//
//    for (int i = 0; i < s; i++) {
//        Sick temp{};
//
//        std::cin >> temp.p >> temp.t;
//        //std::cout << temp.p << " " << temp.t;
//        vPerson[temp.p].personSick = temp.t;
//        //std::cout << "d";
//        vSick.push_back(temp);
//
//    }
//
//// checks if the person got sick and deems all which he didnt drink safe
//    for (int i = 1; i <= n; i++) {
//        Person current = vPerson[i];
//        if (current.personSick != -1) {
////            std::cout << "newperson\n";
////            health temp[51];
////            std::copy(std::begin(temp),std::end(temp),std::begin(allSick));
//            bool milk[51];
//            for (int i = 0; i < 51; i++) {
//                milk[i] = false;
//            }
//            for (int j = 0; j < current.personDrank.size(); j++) {
////               temp[current.personDrank[j].m] = sick;
//                milk[current.personDrank[j].m] = true;
//               // std::cout << "milk: " << current.personDrank[j].m << " is bad\n";
//            }
//
//            for (int z = 1; z <= m; z++) {
//                //std::cout << "x: " << temp[z] << " | y:" << fuck[z] << "\n";
//                // temp[z] == safe ||
//                if ( !milk[z]) {
//                    possible[z] = safe;
//                    //std::cout << "THIS MILK IS SAFE";
//                }
//            }
//        }
//    }
//
//    //checks if sick before drinking it
//    for (int i = 1; i <= n; i++) {
//        Person current = vPerson[i];
//        int milk[51];
//        // 0 = not taken, 1 = taken after, 2 = taken before
//        if (current.personSick != -1) {
//            for (int xx = 0; xx < 51; xx++) {
//                milk[xx] = 0;
//            }
//
//            for (int j = 0; j < current.personDrank.size(); j++) {
//                if (current.personDrank[j].t >= current.personSick && milk[current.personDrank[j].m] == 0) {
//                    milk[current.personDrank[j].m] = 1;
//                }else if (current.personDrank[j].t < current.personSick ){
//                    milk[current.personDrank[j].m] = 2;
//                }
//            }
//
//            for (int cc = 1; cc <= m; cc++) {
//                if (milk[cc] == 1) {
//                    possible[cc] = safe;
//                }
//            }
//
//        }
//
//    }
//
//
//
//
//    int doses;
//    int history = 0;
//    for (int i = 1; i <= m; i++) {
//        //std::cout << "Milk type: " << i << " is: ";
//        doses = 0;
//        if (possible[i] == safe) {
//            //std::cout << "safe " << std::endl;
//        }else {
//           // std::cout << "sick " << std::endl;
//            for (int j = 1; j <= n; j++) {
//                Person curr = vPerson[j];
//                for (int k = 0; k < curr.personDrank.size(); k++) {
//                    if (curr.personDrank[k].m == i) {
//                        doses++;
//                        break;
//                    }
//                }
//            }
//            history = std::max(doses,history);
//        }
//    }
//
//    std::cout << history << std::endl;
//
//
////    std::cout << "\n";
////    for (int i = 1; i <= n; i++) {
////        Person x = vPerson[i];
////        for (int j = 0; j < x.personDrank.size(); j++) {
////            std::cout << "Person: " <<x.personDrank[j].p << " | Milk type = " << x.personDrank[j].m << " at time: " << x.personDrank[j].t << std::endl;
////        }
////        if (x.personSick!= -1) {
////            std::cout << "Person: " << i << " got sick at time: " << x.personSick << std::endl;
////        }
////    }
//
//}
//
