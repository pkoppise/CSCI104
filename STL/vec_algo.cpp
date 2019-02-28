// Palindrome: "A man a plan a canal Panama"
// Using vector, this code shows the given input is a palindrome
// It starts with an incomplete input, 
// to demonstrate some other operations of vector. 

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

// print out all element separated by spaces
template <class T>
void showAll(T& v) {
	copy(v.begin(),v.end(),
		ostream_iterator<string>(cout," "));
	cout << endl;
}

// find the s1 and put s2 before s1
/*
template <class T>
void insertMyWay(T& v, string s1, string s2) {
	T::iterator pos;
	for(pos = v.begin(); pos != v.end(); ++pos) {
		if(*pos == s1) {
			v.insert(pos,s2);
			break;
		}
	}	
}*/

// reverse characters of a string input
void reverseCharacters(string& s) {
		reverse(s.begin(),s.end());
}

int main()
{
	const int SIZE = 7;

	// create an empty vector
	vector<string> word;  

	// reserve memory for 7 elements
	word.reserve(SIZE);

	// append
	word.push_back("a");
	word.push_back("man");
	word.push_back("plan");
	word.push_back("canal");
	word.push_back("Panama");

	// display all elements
	showAll(word);

	// insert a string - we iterate the vector by ourselves
	//insertMyWay(word,"plan","a");
	//showAll(word);

	// insert a string - using STL algorithm find()
	word.insert(find(word.begin(),word.end(),"canal"),"a");
	showAll(word);

	// reverse the element - using STL algorithm reverse()
	reverse(word.begin(),word.end());
	showAll(word);

	// pass each element(string) of vector
	// then, reverseCharacters() will reverse the characters
	for_each(word.begin(),word.end(),reverseCharacters);
	showAll(word);
	return 0;
}