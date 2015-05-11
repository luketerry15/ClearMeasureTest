#include <stdio.h>

void printNum(int val){
	printf("%d\n", val);
}

void printWord(char* src){
	printf("%s\n", src);
}

void printBothWords(char* src1, char* src2){
	printf("%s, %s\n", src1, src2);
}

/*Takes 2 input values, 2 words and one terminate value
  For every number from 1 to the terminate value:
  1) if k is divisible by input value 1 then print word 1
  2) if k is divisible by input value 2 then print word 2
  3) if k is divisible by both value 1 and 2, then print both words */
void run(int val1, char* word1, int val2, char* word2, int terminate){
	for (int k = 1; k <= terminate; k += 1){
		if (k% val1 == 0 && k % val2 == 0){
			printBothWords(word1, word2);
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