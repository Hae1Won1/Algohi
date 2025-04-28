#include <iostream>
#include <algorithm>

//풀이 똑같음..
int main()
{
	int num, k = 1, n = 0;
	int arr[10000] = { 0 };

	std::cin >> num >> k;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			arr[n++] = i;
		}
		if (n == k) {
			break;
		}
	}
	std::cout << arr[k-1];

	return 0;

}

/*
#include <stdio.h>

int main()
{
	int num, k = 1, n = 0;
	//대략 9000보다 작은 크기로 배열을 만들면 OutOfBounds 런타임 에러가 발생한다.
	//왤까...
	int arr[10000] = { 0 };
	scanf("%d %d", &num, &k);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			arr[n++] = i;
		}
		if (n == k) {
			break;
		}
	}
	printf("%d", arr[k - 1]);

	return 0;
}
*/
