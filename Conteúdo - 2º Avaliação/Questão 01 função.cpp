#include<stdio.h>

int parImpar( int param1 ){
	int resto = param1%2;
	int num;;
	if(resto == 1){
		num = 1;
	} else {
		num = 0;
	}
	return num;
}
	
	int main(){
		int n;
		printf("Digite o número: ");
		scanf("%d", &n);
		
		int x = parImpar (n);
		if (x == 1){
			printf("Impar");
		} else {
			printf("Par");
		}
}

