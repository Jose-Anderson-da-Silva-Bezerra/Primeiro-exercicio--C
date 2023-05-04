#include <stdio.h>
	
	int main(){
		
		int dado;
		
		printf("Digite algo diferente de 0 \n");
		scanf("%d", &dado);
		
		//se a resposta nesse caso for falsa ou seja diferente de 0,vai cair dentro do else que é objetivo solicitado pelo programa
		if(dado ==0){
		    printf("Valor incorreto\n");		
		} else{
			printf("valor correto!\n");
		}
		
		
	
	

	
}
