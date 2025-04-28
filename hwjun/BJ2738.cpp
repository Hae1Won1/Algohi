//C ++
#include <iostream>

int main(){
	int n, m;
	int a[100][100], b[100][100];
	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << a[i][j] + b[i][j] << " ";
		}
		std::cout << '\n';
	}
}


//C 
/*#include <stdio.h>

int main()
{
	int n, m;
	int a[100][100], b[100][100];
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			scanf("%d", &b[i][j]);
		}

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) {
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	return 0;
}
*/
