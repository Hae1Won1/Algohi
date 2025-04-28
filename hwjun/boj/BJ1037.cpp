#include <iostream>
#include <algorithm>

int main()
{
	int n, a, arr[50] = { 0 };
	int i = 0;

	std::cin >> n;
	
	if (n == 1) {
		std::cin >> a;
		a *= a;
	}
	else {
		while (i < n && std::cin >> arr[i]) {
			i++;
		}
		std::sort(arr, arr + n);
		a = arr[0] * arr[n - 1];
	}
	std::cout << a;
}

/*
EOF (End OF File)

- C programming language
while(scanf("%d", &n) != EOF)
{
	printf("%d\n", n);
}
* EOF = 데이터의 입력이 없으면 실행을 끝낸다는 뜻의 상수 (-1 반환)

- C++ programming language
while(cin >> a){
	cout << a;
}
* while(cin >> n) 이라는 구문은
	"입력이 잘 되면 계속 반복"
	"입력이 실패하거나 EOF가 오면 중단"
	하는 구조.
*/
/* 의사 코드
1. 약수의 개수(n)를 확인한다.
	1-1. n = 1일 경우
		주어진 약수를 제곱하여 A를 구한다.
	1-2. n이 1 이상일 경우
		1-2-1. 오름차순으로 약수의 배열 arr을 정렬한다.
		1-2-2. 약수의 배열 arr에 대해 첫수 arr[0]과 arr[n-1]을 곱하여 A를 구한다.

2. A를 출력한다.
*/
