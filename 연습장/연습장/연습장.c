#include <windows.h>
#include <stdio.h>



int main (void) {
	int n = 8;
	int l = 0;
	int e[8] = { 1, 2, 3, 4, 5, 6, 7 };
	for (int i = 1; i < n; i += 2) {
		if (e[i] > e[i + 1]) {
			
			l = e[i];
			e[i] = e[i + 1];
			e[i + 1] = l;

		}
		else if (e[i] > e[i - 1]) {
			l = e[i];
			e[i] = e[i - 1];
			e[i - 1] = l;
		}
	}
	printf("%d  ", e[0]);
	printf("%d  ", e[1]);
	printf("%d  ", e[2]);
	printf("%d  ", e[3]);
	printf("%d  ", e[4]);
	printf("%d  ", e[5]);
	printf("%d  ", e[6]);
	printf("%d  ", e[7]);
	printf("%d  ", e[0]);
	

}