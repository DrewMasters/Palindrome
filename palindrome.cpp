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

/*
 * Following two functions come from http://www.geeksforgeeks.org/dynamic-programming-set-12-longest-palindromic-subsequence/
 */ 
int max (int x, int y) {return (x>y)?x:y;}
void palindrome_substring(string t, int size){
	int i, j, offset;
	int table[size][size];

	for (i=0; i<size; i++) {
		for(j=0; j<size; j++) {
			table[i][j]=0;
		}
	}

	for (i=0; i<size; i++) table[i][i]=1;

	for (offset=2; offset<=size; offset++){
		for (i=0; i<size-offset+1; i++){
			j=i+offset-1;
			if(t[i]==t[j] && offset == 2) table[i][j] =2;
			else if (t[i] == t[j]) table[i][j] = table[i+1][j-1] + 2;
			else table[i][j] = max(table[i][j-1], table[i+1][j]);
		}
	}
	
	cout << "Max subsequence length: " << table[0][size-1] << endl;

	cout << endl << " ";
	for (i=0; i<size; i++) cout << i << " ";
	cout << endl;
	for (i=0; i<size; i++){
		cout << i << " ";
		for (j=0; j<size; j++){
			cout << table[i][j] << " ";
		}
		cout << endl;
	}

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
