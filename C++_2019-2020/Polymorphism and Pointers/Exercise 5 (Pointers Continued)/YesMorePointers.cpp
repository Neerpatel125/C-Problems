#include <iostream>
using namespace std;

char *Search(char *w, char *p){
	for (int i = 0; 100; i++){
		if (*(p + 0)== *(w + i) && (*(p + 1) == *(w+ i + 1)) && (*(p + 2) == *(w + i + 2))){
			return (w + i);
			break;  
		} 
		else if (i == 1000){
			return "Substring could not be found!";
			break; 
		}
	}
}

int main()
{
	char *str = "This is a Test for substring";
	char *p;
	p = Search(str, "sub");
	cout << "Adress of substring: " << p;


return 0; 
}

