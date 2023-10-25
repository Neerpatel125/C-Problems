#include <vector>
#include <iostream>

std::vector<std::vector<int>> chunkify(std::vector<int> arr, int size) {
	std::vector<std::vector<int>> ans; // hold holders
	std::vector<int> holder; // Hold each subdivision
	for (int i = 0; i<arr.size(); i++){
		holder.push_back(arr[i]);
		if ((holder.size())%size == 0){
			ans.push_back(holder);
			holder.clear();
		}
		else if (i == arr.size() - 1){
			ans.push_back(holder);
			holder.clear();
		}
	}
	return ans; 
}

int main(){
    std::vector<int> v = {2, 3, 4, 5, 6, 7}; 
    std::vector<std::vector<int>> holder = chunkify(v, 3);
    for (std::vector<int> &v : holder ){ //This is like: for item in thing. Also, the & before the variable means it's a reference
        if (&v != &holder[0])
        std::cout << "[";
        else std::cout<<"[[";
        for ( int &x : v ){
            if (&x != &v[v.size() -1]){
               std::cout << x << ','; 
            }
            else{
                std::cout << x;
            }
        }
        if (&v != &holder[holder.size() - 1])
        std::cout <<"],";
        else std::cout<<"]]"; 
    }
    return 1;
}