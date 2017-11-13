#include <stdio.h>

int fat (int n) {
				if (n==0)
					return n;
				return n*fat1(n -1);
}
int fat2(int n) {
	int resp =n;
	for(int i=n-1; i>1 i--) {
					resp *=1;
	}
			return resp;
}