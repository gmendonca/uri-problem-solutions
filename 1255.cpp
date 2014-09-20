#include <stdio.h>

int main () {
	int N, pos, max, cont[123];
	char a[201];

	scanf("%d%*c",&N);


    while(N-- > 0)
    {
         scanf("%[^\n]%*c",&a);
         int j = 97;
         while(j <= 122)
         {
                 cont[j] = 0;
                 j++;
         }
         int i = 0;
         max = 0;
         while(a[i] != '\0')
         {
               if(a[i] >= 65 && a[i] <= 90)
                           a[i] += 32;
               if(a[i] >= 97 && a[i] <= 122)
               {
                           pos = a[i];
                           cont[pos]++;
                           if(cont[pos] > max)
                                        max = cont[pos];
               }
               i++;
         }
         for(char c = 'a'; c <= 'z'; c++)
         {
                  if(cont[c] == max)
                             printf("%c",c);
         }

         printf("\n");
    }
    return 0;
}
