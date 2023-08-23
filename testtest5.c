#include <stdio.h>
int main(void) {
	char a[3][5] = {"KOR", "HUS", "RES"};
	char *pa[] = {a[0], a[1], a[2]};
	printf("%s , %s , %s \n", a[0],a[1],a[2]);
	int n = sizeof(pa) / sizeof(pa[0]);
	int i;
	for( i = 0; i < n; i++) {
		printf("%c", pa[i][i]);
	}
}
