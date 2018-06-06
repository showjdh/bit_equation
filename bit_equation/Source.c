#include <stdio.h>

long long x, k;
char x_2[64];
char k_2[64];
char y_2[64];
long long ans;

long long decTobin(long long d, char *b){
	long long i, mul;
	if (b == NULL){
		printf("null...\n");
		return -1;
	}

	for (mul = 1, i = 0; mul < d; mul *= 2, i++)
		;

	for (;i>=0;i--,mul/=2){
		if (d >= mul){
			b[i] = 1;
			d -= mul;
		}
		else b[i] = 0;
	}
	return 0;
}

long long binTodec(char *b){
	long long i;
	long long ret, mul;
	ret = 0;
	mul = 1;
	for (i = 0; i < 64; i++){
		if (b[i] == 1)
			ret += mul;
		mul *= 2;
	}
	return ret;
}

void printDec(long long d){
	printf("%lld\n", d);
}

void printBin(char *b){
	int i;
	for (i = 63; i >=0; i--){
		printf("%d", b[i]);
	}
	printf("\n");
}

void solve(){
	long long i, j;
	for (i = 0,j=0; i < 32; i++){
		
			while (x_2[j] == 1) j++;

			if (j >= 63) return;
			if (k_2[i] == 0) {
				y_2[j] = 0;
			}
			else { 
				y_2[j] = 1; 
			}
			j++;
	}
}

int main(){
	int test;
	scanf("%d %d", &x, &k);
	decTobin(x, x_2);
	decTobin(k, k_2);
	solve();
	//printBin(y_2);
	ans=binTodec(y_2);
	printDec(ans);
	return 0;
}