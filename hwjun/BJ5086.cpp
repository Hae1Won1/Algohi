#include <iostream>

// c++에서는 std::string을 사용하여 문자열을 처리하는 것이 더 편리하다.
int main() {
	int a = 1, b = 1;
	int row = 0;
	//char str[100][10];
	std::string str[10];

	while (1) {
		std::cin >> a >> b;
		if (a == 0 && b == 0) break;

		if (b % a == 0) {
			//strcpy(str[row++], "factor"); , strcpy를 쓸 이유가 없음
			str[row++] = "factor";
		}
		else if (a % b == 0) {
			//strcpy(str[row++], "multiple");
			str[row++] = "multiple";
		}
		else {
			//strcpy(str[row++], "neither");
			str[row++] = "neither";
		}
	}
	for (int i = 0; i < row; i++) {
		std::cout << str[i]<<'\n';
	}
	return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	int a = 1, b = 1;
	int row = 0;
	char str[100][10];

	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;

		if (b % a == 0) {
			strcpy(str[row++], "factor");
		}
		else if (a % b == 0) {
			strcpy(str[row++], "multiple");
		}
		else {
			strcpy(str[row++], "neither");
		}
	}
	for (int i = 0; i < row; i++) {
		printf("%s\n", str[i]);
	}

	return 0;
}*/
