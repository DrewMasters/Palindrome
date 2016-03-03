#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool palindrome_check(string t, int size){
	int i, j;

	j = size-1;

	for (i=0; i < size/2; i++){
		if (t[i]!=t[j]) return false;
		j--;
	}

	return true;
}

void palindrome_substring(string t, int size){
	
	return;
}

int main(int argc, char **argv){
	string s;
	int size;
	int *cache;

	cin >> s;

	cout << "s: " << s << endl;
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	s.erase(remove(s.begin(), s.end(), ','), s.end());
	s.erase(remove(s.begin(), s.end(), '.'), s.end());
	s.erase(remove(s.begin(), s.end(), '\''), s.end());
	s.erase(remove(s.begin(), s.end(), '\"'), s.end());
	s.erase(remove(s.begin(), s.end(), ';'), s.end());
	s.erase(remove(s.begin(), s.end(), ':'), s.end());
	s.erase(remove(s.begin(), s.end(), '\?'), s.end());
	s.erase(remove(s.begin(), s.end(), '!'), s.end());
	s.erase(remove(s.begin(), s.end(), '0'), s.end());
	s.erase(remove(s.begin(), s.end(), '1'), s.end());
	s.erase(remove(s.begin(), s.end(), '2'), s.end());
	s.erase(remove(s.begin(), s.end(), '3'), s.end());
	s.erase(remove(s.begin(), s.end(), '4'), s.end());
	s.erase(remove(s.begin(), s.end(), '5'), s.end());
	s.erase(remove(s.begin(), s.end(), '6'), s.end());
	s.erase(remove(s.begin(), s.end(), '7'), s.end());
	s.erase(remove(s.begin(), s.end(), '8'), s.end());
	s.erase(remove(s.begin(), s.end(), '9'), s.end());

	cout << "s: " << s << endl;

	size = s.size();

	if (palindrome_check(s, size)){
		printf("Size of largest substring palindrome %d\nPalindrome= %s\n", size, s.c_str()); 
		return 0;
	}
	else palindrome_substring(s,size);
	return 0;
}
