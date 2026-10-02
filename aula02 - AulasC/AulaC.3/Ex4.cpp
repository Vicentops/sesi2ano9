#include <stdio.h>

int main() {
	int i = 0;
	
for (i = 0; i < 100001; i += 1000) {
    printf("%d\n", i);
}
	
	return 0;
}