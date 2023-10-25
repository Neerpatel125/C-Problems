#include <iostream>
#include <vector>
#include <cmath>
#include <string>

float median(std::vector<int> v){
    if (v.size()%2!=0){
        float index = v.size()/2;
        return v[ceil(index)];
    }
    else{
        float index = v.size()/2;
        return (v[index] + v[index-1])/2.0;
    }
}

std::vector<float> getQuartiles(std::vector<int> arr, std::string method) { // Returns quartiles of the data, given a list of integers
	std::vector<float> out; 
	float q0,q1,q2,q3,q4;
	bool sorted = false;
	while (!sorted){
	    for (int i = 0; i<arr.size()-1;i++){
	        if (arr[i] > arr[i+1]){
	            arr[i] = arr[i] xor arr[i+1];
	            arr[i+1] = arr[i] xor arr[i+1];
	            arr[i] = arr[i] xor arr[i+1];
	        }
	    }
	    sorted = true;
	    for (int i=0; i<arr.size()-1;i++){
	        if (arr[i] > arr[i+1]){
	            sorted = false; 
	            break;
	        }
	    }
	}
	//arr is now sorted from least to greatest
	q0 = arr[0];
	q4 = arr[arr.size()-1];
	q2 = median(arr);
	//Find q1 and q3 depending on the method
	if (method == "T" || method == "MM"){ // Tukey or Moore & McCabe methods
	    std::vector<int> lower;
	    std::vector<int> upper; 
	    if (arr.size()%2==0){
	        for (int i=0;i<arr.size()/2;i++){
	            lower.push_back(arr[i]);
	        }
	        q1 = median(lower);
	        for (int i=arr.size()/2;i<arr.size();i++){
	            upper.push_back(arr[i]);
	        }
	        q3 = median(upper);
	        return out = {q0,q1,q2,q3,q4};
	    }
	    else{
	        for (int i=0;i<arr.size()/2;i++){
	            lower.push_back(arr[i]);
	        }
	        if (method == "T") lower.push_back(q2);
	        q1 = median(lower); 
	        for (int i=(arr.size()/2)+1;i<arr.size();i++){
	            upper.push_back(arr[i]);
	        }
	        if (method == "T") upper.insert(upper.begin(),q2);
	        q3 = median(upper);
	        return out = {q0,q1,q2,q3,q4};
	    } 
	}
	else if (method == "MS"){ // Mendenhall & Sincich method
		int indexQ1 = round((arr.size() + 1) / 4.0);
		float calc = 3 * (arr.size() + 1) / 4.0;
		std::string parse = std::to_string(calc);
		int indexQ3; 
		if (parse[parse.find(".")+1] == '5'){
			indexQ3 = floor(std::stof(parse));
		}
		else{
			indexQ3 = round(calc);
		}
		q1 = (float) arr[indexQ1-1];
		q3 = (float) arr[indexQ3-1]; 
		return out = {q0, q1, q2, q3, q4}; 
	}
}

int main() {
    std::vector<int> v = {4, 1, 7, 8, 3, 6, 5, 2};
    std::vector<float> v2 = getQuartiles(v,"T");
    for (auto i : v2){
        std::cout<<i<<" "; 
    }
    return 1;
}