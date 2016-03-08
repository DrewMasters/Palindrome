#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char **argv){
	int i, length;
	srand(time(NULL));

	length = atoi(argv[1]);

	for (i=0; i<length; i++){
		cout << (char)(rand()%26+97);
	}
}
