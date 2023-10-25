#include <map>
#include <vector>
#include <iostream>
#include <string>

bool isPrime(int n){ // Checks if a number is prime
    if (n == 1){
        return false;
    }
	for (int i = 2;i<n;i++){
		if (n % i == 0){
			return false;
		}
	}
	return true; 
}

std::string truncatable(int num){ //Removes a number from the left/right and checks to see if it's still prime from either or both sides. No 0 allowed
	// Convert to a string so I can itertate over it:
	std::string n = std::to_string(num);
	// Iterate from the left:
	std::string chars;
	int charsInt; 
	bool left = true; 
	for (int i=0;i<n.length();i++){	
		std::string nString(1,n[i]); // initialize a string of a single character
		chars = n;
		const std::string cChars = chars.erase(0,i); // std::stoi() requires a constant string. str.erase(start, how many to remove)
	    if (cChars.size()>0) charsInt = std::stoi(cChars); // prevent bad argument error of empty string being passed
		else break; 
		if (nString == "0" || !isPrime(charsInt)){ //DOUBLE QUOTES VS. SINGLE QUOTES MATTER, use " with strings and ' with chars
			left = false; 
			break; 
		}
	}
	// Iterate from the right (similar stuff as above:
	chars = n; // going to remove the last element each time
	bool right = true; 
	for (int i=0;i<n.size();i++){
		std::string nString(1,n[i]); 
		chars.pop_back(); // removes the last element
		const std::string cChars = chars;
		if (cChars.size()>0) charsInt = std::stoi(cChars);
		else break; 
		if (nString == "0" || !isPrime(charsInt)){
			right = false;
			break; 
		}
	}
	//Output: 
	if (left && right) return "both";
	else if (left) return "left";
	else if (right) return "right";
	else return "none"; 	
}

int main(){
    std::cout<<truncatable(131);
    //std::cout<<!isPrime(1); 
    return 1;
}





