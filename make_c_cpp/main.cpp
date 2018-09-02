#include <stdio.h>

extern "C" {
#include "func.h"
}

int main()
{
	printf("template program\n");

	int ans = funcAdd(10, 20);
	printf("ans = %d\n", ans);
	return 0;
}

