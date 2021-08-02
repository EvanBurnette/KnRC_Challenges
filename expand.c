#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Expand a-c, a-z, 3-6, 0-9 into full sequence
#define MAXLINE 1000
void expand( char s1[], char s2[] );

int main() {
	char s1[MAXLINE] = "a-c\nA-Z\n3-9\ng-z \0";
	char s2[MAXLINE];
	expand( s1, s2 );
	printf("%s\n", s2);
	return 0;
}

// void expand( char s1[], char s2[] ){
// 	char c;
// 	char seq[MAXLINE];
// 	char expanded[MAXLINE];
// 	for( int i = 0, j = 0; (c = s1[i]) != '\0'; i++, j++){
//
// 		s2[j] = c;
// 		if (c == '\0') break;
// }

void expand( char s1[], char s2[] ){
	char c;
	int i, j;
	int length = strlen(s1);
	for (i = j = 0; i<length ; i++, j++){
		if (isdigit(s1[i]) && (s1[i+1] == '-') && isdigit(s1[i+2]))
			do {
				s2[j] = s1[i]++;
				j++;
			} while(s1[i] <= s1[i+2]);
		else s2[j] = s1[i];
	}
	s2[j] = '\0';
	return;
}