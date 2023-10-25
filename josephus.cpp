#include <iostream>
#include <vector>
#include <cmath>

int killed(std::vector<int> people, int kill, int killedAt){
    if (people.size() == 1){
        return people[0];
    }
    int deadPerson = killedAt;
    for(int i=1;i<kill;i++){
        deadPerson++; 
    }
    if (deadPerson >= people.size()) deadPerson = deadPerson % people.size(); 
    people.erase(people.begin() + deadPerson); 
    return killed(people, kill, deadPerson); 
}

int josephus(int n, int i) { // Kill every i-th person given a total number of people, which person is the last and allowed to live?
	std::vector<int> people;
	for(int inc=1;inc<=n;inc++) people.push_back(inc);
	return killed(people, i, 0); 
}

int main(){
    std::cout<<josephus(20,1); 
    return 1;
}