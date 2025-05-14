#include <stdio.h>

int addition (int a, int b){
	return a + b;
}

int subtraction (int a, int b) {
	return a - b;
}

int multiplication (int a, int b) {
	return a * b;
}

int division (int a, int b){
	return a/b;
}

int main(){
	int a, b, ans;
	char op;

	printf("=== KALKULATOR ===\n\n");
	do{
		printf("Masukkan Angka Pertama: ");
		scanf("%d", &a);
		printf("Masukkan Operator: ");
		scanf("%c", &op);
		printf("Masukkan Angka Kedua: ");
		scanf("%d", &b);

		switch (op){
			case '+':
				ans = addition(a, b);
				printf("Operasi Pertambahan %d terhadap %d adalah %d\n\n", a, b, ans);
				break;
			case '-':
				//subtraction here
				printf("Operasi Pengurangan %d terhadap %d adalah %d\n\n", a, b, ans);
				break;
			case '*':
				ans = multiplication(a, b);
				printf("Operasi Perkalian %d terhadap %d adalah %d\n\n", a, b, ans);
				break;
			case '/':
				ans = division(a, b);
				printf("Operasi Pembagian %d terhadap %d adalah %d\n\n", a, b, ans);
				break;
			default :
				printf("Operation Invalid! Try Again.\n\n");
				break;
	return 0;
}
