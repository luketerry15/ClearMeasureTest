#include <stdio.h>


void printNum(int val){
	printf("%d\n", val);
}

void printWord(char* src){
	printf("%s\n", src);
}

/*Takes 2 input values, and 2 words
  For every number from 100:
  1) if k is divisible by input value 1 then print word 1
  2) if k is divisible by input value 2 then print word 2
  3) if k is divisible by both value 1 and 2, then print both words */
void run(int val1, char* word1, int val2, char* word2){
	if (val1 > 100 || val2 > 100){ // testing both values are less than 100
		printf("Sorry, please use a value less than 100\n");
		return;
	}
	if (word1 == nullptr || word2 == nullptr){ // testing both words aren't null pointers
		printf("Sorry, you can't use a null string\n");
		return;
	}
	
	for (int k = 1; k <= 100; k += 1){
		if (k% val1 == 0 && k % val2 == 0){
			printf("%s, %s\n", word1, word2);
		}
		else if (k % val1 == 0){
			printWord(word1);
		}
		else if (k % val2 == 0){
			printWord(word2);
		}
		else{
			printNum(k);
		}
	}
}