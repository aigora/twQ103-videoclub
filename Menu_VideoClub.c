
//Grupo: Videoclub
// Diego Rodriguez de Tapia
// Beatriz Sanz Delgado
// Andrea Fernandez Ortiz
// clase: Q103
// Descripcion: Este es un programa que te pide que elijas una opcion entre las que te ofrece. Entonces tienes la opcion de inciar sesion, registrarse, o salir del programa.
#include<stdio.h>
int main(){
	char opcion;
	char usuario;
	char contrasena;
	char nuevoUsuario;
	char Ncontrasena1;
	char Ncontrasena2;
	
	printf("¡Bienvenido al Infinity films!\n");
	
	do{
	
		printf("introduzca una opcion:\n");
		printf("A-iniciar sesion\n");
		printf("B-registrarse\n");
		printf("C-Salir de la pagina\n");
		fflush(stdin);
		scanf("%c",&opcion);
	
		switch (opcion){
			case 'A':{
				printf("usuario:\n");
				scanf("%d",&usuario);
				fflush(stdin);
				printf("contrasesa:\n");
	     		scanf("%d",&contrasena);
	     		break;
			}
			case 'B':{
							
				printf("introduzca nuevo usuario:\n");
				scanf("%d",&nuevoUsuario);
				fflush(stdin);				
				printf("introduzca nueva contrasena:\n");
				scanf("%d",&Ncontrasena1);
				fflush(stdin);
				printf("confirmar contrasena:\n");
				scanf("%d",&Ncontrasena2);
												
				break;
			}
			
			case 'C':{
				break;
			}
			default:
		printf("opcion no definida");
	}		
}
while (opcion != 'C');
}
