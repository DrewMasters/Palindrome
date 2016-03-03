#include <iostream>
#include <string>
#include <cstdio>
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

int main(int argc, char **argv){
	string s;
	int size;
	int *cache;
	
	if (argc > 2){
		cout << "Usage: ./palindrome [string]\n";
		exit(1);
	}

	s = argv[1];

	size = s.size();

	if (palindrome_check(s, size)){
		printf("Size of largest substring palindrome %d\nPalindrome= %s", size, s); 
		return 0;
	}
	

}
