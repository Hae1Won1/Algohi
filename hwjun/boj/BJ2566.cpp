#include <iostream>
//#include <vector>

int main() {
	int row = 0, column = 0, tmp;
	int arr[9][9] = { 0 };

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cin >> arr[i][j];
		}
	}

	tmp = arr[0][0];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (tmp < arr[i][j]) {
				tmp = arr[i][j];
				row = i;
				column = j;
			}
		}
	}
	std::cout << tmp << std::endl;
	std::cout << row + 1 << " " << column + 1 << std::endl;
	return 0;
}

/*
#include <vector>의 max를 이용하여 최대값을 먼저 구한 후
for문으로 돌려 같은 값이 나올경우  break로 빠져나오고
해당 위치를 출력하는 것도 가능할듯
*/

/*#include <stdio.h>

int main()
{
	int row = 0, column = 0, tmp;
	int arr[9][9] = { 0 };

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	tmp = arr[0][0];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (tmp < arr[i][j]) {
				tmp = arr[i][j];
				row = i;
				column = j;
			}
		}
	}
	printf("%d\n", tmp);
	printf("%d %d\n", row + 1, column + 1);
	return 0;
}

*/
