#include <iostream>
#include <string.h>
using namespace std;

int main(){

// Formating stuff with Arrays: 
/*
char str[80] = "Sleep is great";
char *pl; pl = str; 

cout << "Directly getting 5th element: " << str[4] << endl;
cout << "Using pl to get 5th element: " << *(pl+4) << endl;
cout << "Using str to get 5th element: " << *(str + 4) << endl; 
*/

// Comparing compile times between arrays and pointers (pointers are faster) 
/*
cout << "Using Arrays: " << endl; 
char str[80] = "THIS is A test STRING";
cout << "Original string: " << str << endl; 
for (int i = 0; str[i]; i++){
	if (isupper(str[i])) str[i] = tolower(str[i]);
	else if (islower(str[i])) str[i] = toupper(str[i]);
} 
cout << "Inverted-case string: " << str << endl << endl; 
*/
/*
cout << "Using Pointers: " << endl; 
char st[80] = "THIS is A test STRING";
cout << "Original string: " << st << endl; 
for (int i = 0; *(st + i); i++){
	if (isupper(*(st + i))) *(st + i) = tolower(*(st + i));
	else if (islower(*(st + i))) *(st + i )= toupper(*(st + i));
} 
cout << "Inverted-case string: " << st << endl << endl; 
*/ 

// Indexing a pointer
/*
char *ptr; 
ptr = "Pointers are powerful tools in C++!"; 
cout << ptr << endl; 
*/

// Arrays of Pointers: Exercise about making a dictionary using character pointer arrays
/*
char *(words[2][5]); 
words [0][0] = "Candy"; words [1][0] = "Any of a variety of confections made with sugar, syrup, etc., often combined with chocolate, fruit, nuts, etc."; 
words [0][1] = "Staple "; words[1][1] = "A short piece of wire bent so as to bind together papers, sections of a book, or the like, by driving the ends through the sheets and clinching them on the other side.";
words [0][2] = "Wood"; words [1][2] = "The hard, fibrous substance composing most of the stem and branches of a tree or shrub, and lying beneath the bark; the xylem."; 
words[0][3] = "Zebra"; words[1][3] = "Any of several horselike African mammals of the genus Equus, each species having a characteristic pattern of black or dark-brown stripes on a whitish background: all zebra species are threatened or endangered.";
words [0][4] = "Dart"; words [1][4] = "A small, slender missile that is pointed at one end and usually feathered at the other and is propelled by hand, as in the game of darts, or by a blowgun when used as a weapon.";

char *uword; 
cout << "Please enter a word you would like defined (first letter must be capitlaized): "; 
cin >> uword; 
cout << "\n"; 
for (int i = 0; i <= 5; i++){
	if (strcmp(uword, (words[0][i])) == 0){
		cout << (words[1][i]) << endl;
		break;
	} 
	else if (i == 5){
		cout << "The word is not in the index!"; 
		break;
	}
}
*/ 

// Multiple Indirection
/*
float p, *r, **q, ***z;
p = 3.14;
r = &p; 
q = &r;
z = &q;
cout <<"Using z: " << ***z << "\nUsing q: "<<  **q << "\nUsing r: " << *r << "\nUsing p: " << p; 
*/ 

// Passing Pointers and Arrays to Functions (comment out the main code and the return 0 to run this part)
/* Main message from this is that changing the values in that function will change values of num1 and num2 because it uses the addresses. 
int Mult (int *a, int *b){
	return (*a)*(*b);
}
int main(){
	int num1, num2, *n1, *n2; 
	num1 = 3; num2 = 5; n1 = &num1; n2 = &num2;
	cout << Mult(n1, n2) << endl << Mult(&num1, &num2) << endl; 
	cout << Multn(num1, num2) << endl << Multn(*n1, *n2) << endl; 

return 0; 
}
*/ 
// Similar to above, because arrays are pointers, changing the values inside the function will change nums
/*
int Mult1 (int n[3]){
	return n[0] * n[1] *n[2]; 
}
int Mult2 (int n[] ){
	return n[0] * n[1] *n[2]; 
}
int Mult3 (int *n){ // All of these functions are the same thing, arrays can be passed as pointers 
	return n[0] * n[1] *n[2]; 
}
int main(){
	int nums[3] = {1,2,3};
	cout << Mult1(nums) << endl << Mult2(nums) << endl << Mult3(nums); 
}
*/ 

// Function to invert characters of a string with poitners
/*
void Convert(char *p){
	for (int i = 0; p[i]; i++){
		if(isupper(p[i])) p[i] = tolower(p[i]); 
		else if (islower(p[i])) p[i] = toupper (p[i]);
	}
}
int main(){
	char str[80] = "This is a Test";
	cout << "Original: " << str << endl;
	Convert (str);
	cout << "Converted: " << str << endl; 
return 0; 
}
*/

// Returning a poitner exameple: int *func() 
return 0;
}

