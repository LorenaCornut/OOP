#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	///problema 1
	int sum = 0;
	FILE* fp;
	char* line = new char[100];
	size_t len;
	fopen_s(&fp, "in.txt", "r");
	if (fp == NULL)
	{
		printf("N-a mers");
		exit(EXIT_FAILURE);
	}
	///functia fgets
	while (fgets(line, 100, fp))
	{
		int nr = 0;
		for (int i = 0; line[i] != NULL && line[i] != '\n'; i++) nr = nr * 10 + line[i] - '0';
		sum += nr;
	}
	printf("%d", sum);

	return 0;
}
