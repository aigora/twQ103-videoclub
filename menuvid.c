//Grupo: Videoclub
// Diego Rodriguez de Tapia
// Beatriz Sanz Delgado
// Andrea Fernandez Ortiz
// clase: Q103
// Descripcion: Este es un programa que te pide que elijas una opcion entre las que te ofrece. Entonces tienes la opcion de inciar sesion, registrarse, o salir del programa.
#include<stdio.h>
 struct contacto{
 	char nombre [50];
 	char contrasena1 [50];
 	char contrasena2 [50];
 };

char menu();
int main(){
	char opcion;	
	struct contacto usuario1,usuario2;
	char usuario;
	char contrasena;
	char nuevoUsuario;
	char Ncontrasena1;
	char Ncontrasena2;
	char info;
	system("color 0D");
	printf("Bienvenido al Infinity films!\n");
	
		printf("introduzca una opcion:\n");
		printf("A-iniciar sesion\n");
		printf("B-registrarse\n");
		printf("C-Salir de la pagina\n");
		fflush(stdin);
		scanf("%c",&opcion);
	
		switch (opcion){
			
			case 'A':{
				system("cls");
				printf("usuario:\n");
				scanf("%d",&usuario1.nombre);
				fflush(stdin);
				printf("contrasena:\n");
	     		scanf("%d",&usuario1.contrasena1); 	
	     			//menu();		
	     		break;
			}
			
			case 'B':{
				
				printf("introduzca nuevo usuario:\n");
				scanf("%d",&usuario2.nombre);
				fflush(stdin);				
				printf("introduzca nueva contrasena:\n");
				scanf("%s",&usuario2.contrasena1);
				fflush(stdin);
				printf("confirmar contrasena:\n");
				scanf("%s",&usuario2.contrasena2);
				break;
			}
			
			case 'C':{
				printf("ADIOS");
				return -1;
				break;
				
			}
			
			default:
			printf("opcion no definida");
	}		
	system("cls");
	menu();
}

char menu(){
	char info, info1;
	char siguiente;
	char opcion;
	char categorias;
	char i,s; 

	do{ 
			
		printf("A-Drama\n");
		printf("B-Accion\n");
		printf("C-Suspense\n");
		printf("D-Comedia\n");
		printf("E-Salir\n");
		printf("Introduce una de estas opciones\n");
		fflush(stdin);
		scanf("%c", &categorias);
		system("cls");
		switch(categorias){
		
			case 'A':{	
				printf("A continuacion le ofrecemos nuestra lista de las mejores peliculas de drama del 2018: \n");
				printf("1- Bohemian Rhapsody.\n");
				printf("pulse la tecla 'i' para recibir mas informacion sobre esta pelicula.\n");
				printf("pulse la 's'para ver la siguiente pelicula.\n");
				fflush(stdin);
				//system("cls");
				scanf("%c",&info);
			
				if (info==105){
					printf("Esta pelicula, gandora de 4 oscars entre ellos el oscar al mejor actor por Rami Malek; narra la historia del principal vocalista de la banda britanica Queen. 7.6/10.\n");
					getch();
				}
			
				else if(info==115){
					printf("2-Ha nacido una estrella\n");
					printf("pulse la tecla 'i' para recibir mas informacion sobre esta pelicula.\n");
					printf("pulse la 's'para ver la siguiente pelicula.\n");
					fflush(stdin);
					scanf("%c",&info);
					
					if(info==105){
						printf("Esta pelicula cuenta la historia de una estrella de musica country que descubre a una joven cantante de la cual se enamora. destaca de esta pelicula su gran banda sonora cona rtistas como LAdy Gaga o Bradley Cooper. 6.7/10");
						getch();
					}
					
					else if(info==115){
						printf("3-Con amor simon\n");
						printf("La pelicula narra la historia de una adolescente homosexual que se enamora a traves de internet de un compañero de clase, cuya identidad desconoce. 6.6/10\n");
						getch();
					}
				}
				system("cls");
				break;
			}
			
			case 'B':{
				printf("A continuacion le ofrecemos una lista de las mejores peliculas de accion del 2018: \n");
				printf("1- Black Panther\n");
				printf("pulse la tecla 'i' para recibir mas informacion sobre esta pelicula.\n");
				printf("pulse la 's'para ver la siguiente pelicula.\n");
				fflush(stdin);
				scanf("%c",&info);
			
				if (info==105){
					printf("Nomida a 7 Oscars y ganadora de 3 de ellos; esta superproduccion basada en los comics de Marvel Comics. Cuenta la historia de T'Challa, un principe que se ve forzado a reclamar la corona de la nacion de Wakanda, aislada y muy avanzada electronicamente. 7.3/10 ");
					getch();
				}
			
				else if(info==115){
					printf("2-Mision Imposible: fallout\n");
					printf("pulse la tecla 'i' para recibir mas informacion sobre esta pelicula.\n");
					printf("pulse la 's'para ver la siguiente pelicula.\n");
					fflush(stdin);
					scanf("%c",&info);
				
					if(info==105){
					printf("En esta sexta entrega de la saga Ethan y su equipo se enfrentan a una lucha contrareloj depues de una mision fallida. Esta pelicula tiene como protagonista a Tom Cruise. 6.7/10.\n ");
					getch();
					}
					
					else if(info==115){
						printf("3-Ready Player One:\n");
						printf("Esta ambientada en el año 2045, la cultura popular se basa la utopia virtual a escala global llamda 'Oasis'. Un adolescente se embarca en una aventura que conecta la vida virtual con la vida real en la cual se decidira el futuro de 'Oasis'.7.5/10\n");
						getch();
					}
				}
				system("cls");
				break;
			}
			
			case 'C':{
				printf("A continuacion le ofrecemos una lista de las mejores peliculas de suspense del 2018: \n");
				printf ("1-Aniquilacion\n");
				printf("pulse la tecla 'i' para recibir mas informacion sobre esta pelicula.\n");
				printf("pulse la 's'para ver la siguiente pelicula.\n");
				fflush(stdin);
				scanf("%c", &info);
			
				if (info==105){
					printf("Tras la perdida de memoria de su marido la biologa Lena se emerge en una expecio a la zona x de la cual solo se sabe que los que entran no salen. En su reparto cuenta con Natalie Portman, Oscar Isaac y Gina Rodriguez, entre otros. 7/10\n ");
					getch();
					}
			
				else if(info==115){
					printf("2-Gorrion Rojo\n");
					printf("pulse la tecla 'i' para recibir mas informacion sobre esta pelicula.\n");
					printf("pulse la 's'para ver la siguiente pelicula.\n");
					fflush(stdin);
					scanf("%c",&info);
					
					if(info==105){
						printf("Dominika Egorova (Jennifer Lawrence) es obligada a formar parte del equipo de espia de Rusia, en la posguerra fria. La protagonista aprende habilidades tanto fisicas como psicologicas que finalmente utilizara para liberarse de un sistema injusto. 6.6/10\n ");
						getch();
					}
		
					else if(info==115){
						printf("3-El reino\n");
						printf("En esta produccion española, Antonio de la Torre se mete en la piel de un vicesecretario autonomico de un partido a punto de dar el salto a la politica nacional. Pero antes, se ve implicado en una trama de produccion del partido, que provoca que se desmorone su vida acomodada. 7.7/10\n");
						getch();	
					}
				}
				system("cls");
				break;
			}
			
			case 'D':{
				printf("A continuacion le ofrecemos una lista de las mejores peliculas de comedia del 2018: \n");
				printf("1-Spider-Man: Un nuevo universo");
				printf("pulse la tecla 'i' para recibir mas informacion sobre esta pelicula.\n");
				printf("pulse la 's'para ver la siguiente pelicula.\n");
				fflush(stdin);
				scanf("%c",&info);
			
				if (info==105){
					printf("En un universo paralelo en el cual Peter Parker ha muerto, un adolescente llamado Millers Morales se convierte en el nuevo Spider-Man. Sin embargo, un villano construye 'El super colisionador' que trae a unos cuantos Spider-Man de mas, los cuales lucharan por volver a sus respectivas realidades. Gano el Oscar a la mejor pelicula de animacion. 8/10\n");
					getch();
				}
			
				else if(info==115){
					printf("2-Deadpool 2\n");
					printf("pulse la tecla 'i' para recibir mas informacion sobre esta pelicula.\n");
					printf("pulse la 's'para ver la siguiente pelicula.\n");
					fflush(stdin);
					scanf("%c",&info);
				
					if(info==105){
						printf("Esta segunda entrega, antiheroe Deadpool trata de salvar al mutante adolescente, Russell, de las manos de cable, un poderoso rival del futuro. Para lograrlo forma un equipo llamado X-Force. 6.8/10\n ");
					}
			
					else if(info==115){
						printf("3-Los increbles 2\n");
						printf("Tras 10 de espera, regresa a la gran pantalla una nueva entrega de la familia de superheroes, 'Los Increibles'. En este largometraje trataran de legalizar de nuevo a los superheroes. 6.9/10\n");
						getch();
					}
				}
				system("cls");
				break;
			}
			
			case 'E':{
				printf("ADIOS, GRACIAS POR ELEGIRNOS");
				break;
			}	
			
			default:
				printf("Categoria no definida\n");	
		}	
 	}
 	
 	while (categorias!='E');
 	return categorias;
}	 

