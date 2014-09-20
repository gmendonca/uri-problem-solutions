#include <stdio.h>
#include <string.h>

using namespace std;

int main () {
	char base[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char c;
	int i;
	
	while( scanf("%c",&c)!=EOF) {
	
		for (i=0; i<48; i++) {
			if (c == base[i]) {
				printf("%c",base[i-1]);
				break;
			}
			else if (c == ' ') {
				printf(" ");
				break;
			}
			else if (c == '\n') {
				printf("\n");
				break;
			}
		}
	}
	
}
