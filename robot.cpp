#include <stdio.h>
int testcase, n, m, x, y, k, l;
int d[1000][1000];
int clockarr[10];
int clockway;
int clockmove;
char nsew[10];
int main() {
	scanf("%d", &testcase);
	for (int t = 1; t <= testcase; t++) {
		scanf("%d %d %d %d", &n, &m, &x, &y);
		for (int i = 0; i <= m + 1; i++) {
			for (int j = 0; j <= n + 1; j++) {
				d[i][j] = -1;
			}
		}
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				scanf("%d", &d[i][j]);
			}
		}

		scanf("%d", &k);
		for (int i = 0; i < k; i++) {
			scanf("%d", &clockarr[i]);
		}
		int clockcurrent = 0;
		int sum = d[y][x];
		d[y][x] = 0;
		scanf("%d", &l);
		for (int i = 0; i < l; i++) {
			scanf(" %c %d %d", &nsew[0], &clockway, &clockmove);
			if (clockway == 1) {
				for (int j = 0; j < clockmove; j++) {
					clockarr[clockcurrent--];
					if (clockcurrent < 0)
						clockcurrent = k - 1;
				}
			}
			if (clockway == 2) {
				for (int j = 0; j < clockmove; j++) {
					clockarr[clockcurrent++];
					if (clockcurrent >= k)
						clockcurrent = 0;
				}
			}

			if (nsew[0] == 'N') {
				for (int j = 0; j < clockarr[clockcurrent]; j++) {
					y--;
					if (d[y][x] == -1) {
						y++;
						break;
					}
					sum += d[y][x]; d[y][x] = 0;
				}
			}
			if (nsew[0] == 'S') {
				for (int j = 0; j < clockarr[clockcurrent]; j++) {
					y++;
					if (d[y][x] == -1) {
						y--;
						break;
					}
					sum += d[y][x]; d[y][x] = 0;
				}
			}
			if (nsew[0] == 'E') {
				for (int j = 0; j < clockarr[clockcurrent]; j++) {
					x++;
					if (d[y][x] == -1) {
						x--;
						break;
					}
					sum += d[y][x]; d[y][x] = 0;
				}
			}
			if (nsew[0] == 'W') {
				for (int j = 0; j < clockarr[clockcurrent]; j++) {
					x--;
					if (d[y][x] == -1) {
						x++;
						break;
					}
					sum += d[y][x]; d[y][x] = 0;
				}
			}
		}
		
		printf("#%d %d %d %d\n", t, sum, x, y);
	}
	
	return 0;
}