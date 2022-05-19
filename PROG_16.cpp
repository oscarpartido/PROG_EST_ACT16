/*AUTOR:Oscar Vivaldi Partido Ramirez  fecha:24/ febrero/2022
programa pide las calificaciones de un alumno y realiza lo siguiente:
	calcula su promedio
	cuenta cuantas materias reprobo
	cuenta cuantas materias aprobo
	calcula su porcentaje de aprobacion
se terminara de pedir datos cuando se introduzca un numero negativo
El programa debe validar que las calificaciones sean validas(0-10)
 */
 #include<stdio.h>

int main(){
float cal,procentaje_ap,prom,suma=0;
int i=0, aprobadas=0, reprobadas=0;
do{
	printf("Introduce la calificacion:");
	scanf("%f",&cal);
	if(cal>=0 && cal<=10){
		i++;
		suma=suma+cal;
		if(cal<7){
			reprobadas++;
		}
		else{
			aprobadas++;
		}
	
	}
	else {
			printf("calificacion invalida!!\n");
		}
}while(cal>=0); 
prom=suma/i;
procentaje_ap=aprobadas/i*100.0;
printf("Total de calificacion introducidas: %d\n",i);
printf("promedio: %.1f\n",prom);
printf("calificaciones aprobatorias: %d\n",aprobadas);
printf("calificaciones reprobatorias: %d\n",reprobadas);
printf("Porcentaje de aprobacion: %.2f",procentaje_ap);

	 
	 return 0;
 }

