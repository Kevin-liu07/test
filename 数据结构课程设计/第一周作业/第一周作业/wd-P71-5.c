#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int data[100];
	int top1, top2;
}Dstack;
void read(int* x, char ch)
{
	int f = 1;
	char s;
	*x = 0;
	if (ch == ' ') {
		s = getchar();
	}
	else {
		s = ch;
	}
	if (s == '#')*x = '#';
	else if (s == '-') {
		f = -1;
		s = getchar();
	}
	while (s >= '0' && s <= '9') {
		*x = (*x) * 10 + s - '0';
		s = getchar();
		if (s == ' ')break;
	}
	*x = (*x) * f;
}
int main5656()
{
	int  n;
	scanf("%d", &n);
	getchar();
	int i;
	Dstack d;
	d.top1 = 0; d.top2 = n - 1;
	for (i = 0; i < n; i++) {
		int e;
		char ch = getchar();
		read(&e, ch);
		d.data[i] = e;
	}
	for (i = 0; i < n; i++) {
		if (d.data[i] == '#') {
			d.top1 = i;
			break;
		}
	}
	for (i = n - 1; i > 0; i--) {
		if (d.data[i] == '#') {
			d.top2 = i;
			break;
		}
	}

	int s, data;
	while (~scanf("%d %d", &s, &data)) {
		if (s == 0) {
			d.data[d.top1++] = data;
		}
		else {
			d.data[d.top2--] = data;
		}
	}
	for (i = 0; i < n; i++) {
		if (d.data[i] == '#')printf("# ");
		else printf("%d ", d.data[i]);
	}
	return 0;
}


