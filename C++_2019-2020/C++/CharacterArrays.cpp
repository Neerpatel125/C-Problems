/*
	Header file: string.h
	Other functions of string arrays:
		-> strcpy(s2,s1); copies the content of the first array into the second array
		-> strcat(s1,s2); appends s2 to the end of s1
		-> strcmp(s1,s2); Cpmpates two strings and returns 0 if they are equal; if s1 > s2 lexicographically (dictionary order; ex: a < b), then a positive number returned; if s1 < s2, negative number returned
		-> strlen(s); returns the length of the string pointed by sY
	
*/
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
	cout << "What is the color of the sky during the day? (all lower cased)\n"; 
	char correct[5] = "blue"; // str will not output spaces
	char user[5];
	cin >> user;
	
	if (strcmp(correct,user) == 0)
		{
			cout << "Good job!";
		}
	else if (strcmp(correct, user) < 0)
		{
			cout << "Hint! The answer is lexicographically later than that.";
		}
	else
		{
			cout << "Hint! The answer is lexicographically earlier than that.";
		}


 return 0;
}

