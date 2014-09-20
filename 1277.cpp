#include <stdio.h>

int main () {
	int N,T;
	char nomes[5000];
	char freq[5000];
	char saida[5000];
	char c;
	int i,j,k,p,a;
	
	scanf("%d",&T);
	scanf("%c",&c);								
	
	
	while (T > 0) {
		scanf("%d",&N);
		scanf("%c",&c);
		gets(nomes);
		gets(freq);
		saida[0] = '\0';
		i = 0;
		j = 0;
		k = 0;
		p = 0;
		a = 0;
		do {
			if (freq[i] == 'P')
				p++;
			else if (freq[i] == 'A')
				a++;
			else if (freq[i] == ' ' || freq[i] == '\0') {
				if (p < a*3) {
					while (nomes[j] != ' ' && nomes[j] != '\0') {
						saida[k] = nomes[j];
						k++;
						j++;
					}
					saida[k] = nomes[j];
					k++;
					j++;
					p = 0;
					a = 0;
				}
				else {
					while (nomes[j] != ' ') {
						j++;
					}
					j++;
					p = 0;
					a = 0;
				}
			}
			i++;
		} while (freq[i-1] != '\0');
		saida[k-1] = '\0';
		printf("%s\n",saida);
		T--;
	}
}
