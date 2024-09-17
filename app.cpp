//*******************************************************************
//
//Titulo: Calculadora de Matrices v1.1
//
//Descripcion: Resolver operaciones matriciales tales como: suma,
//			   resta, multiplicacion, determinantes y sistema de
//             ecuaciones lineales. De igual forma se pueden eje-
//             cutar propiedades matriciales tales como: producto
//             de una matriz por un numero real, transposicion de
//             una matriz e inversa de una matriz.
//
//Autores: gRobles, Abel CI: 27.096.529
//
//Desarrollado en: Acer 5920. 2GB RAM. Intel Core2 duo.
//
//Objetivo: plataforma independiente
// 
//*******************************************************************

//librerias a utilizar
#include <conio.h>   //permite realizar una pausa durante la ejecucion del programa
#include <iostream>  //permite realizar salida y entrada de datos desde la consola
#include <windows.h> //permite asignar un titulo a la consola, entre otras funcionalidades 

//Funciones (sus nombres dicen literalmente lo que hacen)
int sumarMatrices();
int restarMatrices();
int productoNumReal();
int multiplicarMatrices();
int sacarDeterminante();
int sistemaEcuaciones();
int transposicion();
int invertir();
int propiedades(); //una funcion extra que lleva a un menu de opciones con las propiedades matriciales

using namespace std; //se declara como un "namespace" al manipulador de objetos de la libreria standard de c++

int main(){
	system("COLOR f0");
	SetConsoleTitle("CALCULADORA DE MATRICES v1.1"); //asignacion de un titulo para la consola
	//Variables
	int op=0;
	cout<<"\n\n\n\tBIENVENIDOS AL PROGRAMA DE OPERACIONES CON MATRICES v1.1."
	    <<"\n\tCOPYRIGHT TRIFASIC SOFTWARE.\n";
	//opciones
	while(op!=7){	
		//Menu principal, posee las distintas opciones y segun la respuesta del usuario se ejecutar� alguna operacion
		cout<<"\n\tELIJA UNA OPCION:\n\t"
			<<"OPCION #1: SUMA DE MATRICES.\n\t"
			<<"OPCION #2: RESTA DE MATRICES.\n\t"
			<<"OPCION #3: MULTIPLICACION DE MATRICES.\n\t"
			<<"OPCION #4: DETERMINANTE DE UNA MATRIZ.\n\t"
			<<"OPCION #5: SISTEMA DE ECUACIONES LINEALES.\n\t"
			<<"OPCION #6: PROPIEDADES DE UNA MATRIZ.\n\t"
			<<"OPCION #7: SALIR.\n\n\t"
			<<"ELIJA UNA OPCION (NUMERO): ";
		cin>>op;
		system("cls");
		switch(op){
			case 1:
				sumarMatrices();
				break;
			case 2:
				restarMatrices();
				break;
			case 3:
				multiplicarMatrices();
				break;
			case 4:
				sacarDeterminante();
				break;
			case 5:
				sistemaEcuaciones();
				break;
			case 6:
				propiedades();
				break;
			case 7:
				//Rompe el ciclo repetitivo y sale del programa
				cout<<"\n\n\n\tSALIENDO...";
				getch();
				break;	
			default:
				//Opcion por defecto: ha de ejecutarse cada vez que el usuario seleccione una opcion invalida
				cout<<"\n\n\n\tOPCION INCORRECTA.\n";
				cout<<"\n\tPRESIONE ALGUNA TECLA PARA CONTINUAR\n--------------------------------------------------------------------------------";
				getch();
				system("cls");
				cout<<"\n\n";
				break;
		}
	}
	return 0;
}

sumarMatrices(){
	
	float cc=0,rr=0;
	int x,y,c,r;
	
	cout<<"\n\n\n\tPARA REALIZAR SUMA DE MATRICES ES NECESARIO QUE LAS"
		<<     "\n\tMATRICES TENGAN LAS MISMAS DIMENSIONES\n";	
	while((rr!=1)&&(rr!=2)&&(rr!=3)&&(rr!=4)&&(rr!=5)&&(rr!=6)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE FILAS DE LAS MATRICES (1-6): ";
		cin>>rr;
		if((rr==1)||(rr==2)||(rr==3)||(rr==4)||(rr==5)||(rr==6)){
			r=rr;
		}else{
			cout<<"\n\tDIMENSION INVALIDA...\n\t";
		}
	}
	while((cc!=1)&&(cc!=2)&&(cc!=3)&&(cc!=4)&&(cc!=5)&&(cc!=6)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE COLUMNAS DE LAS MATRICES (1-6): ";
		cin>>cc;
		if((cc==1)||(cc==2)||(cc==3)||(cc==4)||(cc==5)||(cc==6)){
			c=cc;
		}else{
			cout<<"\n\tDIMENSION INVALIDA...\n\t";
		}
	}
	
	system("cls");
	cout<<"\n\n";
		
	float matriza[r][c], matrizb[r][c];
	
	for(x=0;x<r;x++){
		for(y=0;y<c;y++){
			cout << "\n\tINTRODUZCA EL VALOR PARA A["<<(x+1)<<"]["<<(y+1)<<"]: ";
			cin >> matriza[x][y];
		}
	}
	
	for(x=0;x<r;x++){
		for(y=0;y<c;y++){
			cout << "\n\tINTRODUZCA EL VALOR PARA B["<<(x+1)<<"]["<<(y+1)<<"]: ";
			cin >> matrizb[x][y];
		}
	}
	
	system("cls");
	cout<<"\n\n";
		
	cout<<"\n\tMATRIZ A:\n\n";
	
	for(x=0;x<r;x++){
		cout<<"\t|"<<"\t";
		for(y=0;y<c;y++){
			cout<<matriza[x][y]<<"\t";
		}
		cout<<"|\n";
	}
		
	cout<<"\n\tMatriz B\n\n";
	
	for(x=0;x<r;x++){
		cout<<"\t|"<<"\t";
		for(y=0;y<c;y++){
			cout<<matrizb[x][y]<<"\t";
		}
		cout<<"|\n";
	}
	
	cout<<"\n\tSUMA: MATRIZ A + MATRIZ B\n\n";
	
	for(x=0;x<r;x++){
		cout<<"\t|"<<"\t";
		for(y=0;y<c;y++){
			cout<< (matriza[x][y]+matrizb[x][y]) <<"\t";
		}
		cout<<"|\n";
	}
	
	cout<<"\n\n\n\tPRESIONE ALGUNA TECLA PARA CONTINUAR\n--------------------------------------------------------------------------------";
	getch();
	system("cls");
	cout<<"\n\n";
	return 0;
}

restarMatrices(){
	
	float cc=0,rr=0;
	int x,y,c,r;
	
	cout<<"\n\n\n\tPARA REALIZAR LA RESTA DE MATRICES ES NECESARIO QUE LAS"
		<<     "\n\tMATRICES TENGAN LAS MISMAS DIMENSIONES\n";	
	while((rr!=1)&&(rr!=2)&&(rr!=3)&&(rr!=4)&&(rr!=5)&&(rr!=6)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE FILAS DE LAS MATRICES (1-6): ";
		cin>>rr;
		if((rr==1)||(rr==2)||(rr==3)||(rr==4)||(rr==5)||(rr==6)){
			r=rr;
		}else{
			cout<<"\n\tDIMENSION INVALIDA...\n\t";
		}
	}
	while((cc!=1)&&(cc!=2)&&(cc!=3)&&(cc!=4)&&(cc!=5)&&(cc!=6)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE COLUMNAS DE LAS MATRICES (1-6): ";
		cin>>cc;
		if((cc==1)||(cc==2)||(cc==3)||(cc==4)||(cc==5)||(cc==6)){
			c=cc;
		}else{
			cout<<"\n\tDIMENSION INVALIDA...\n\t";
		}
	}
	
	system("cls");
	cout<<"\n\n";
		
	float matriza[r][c], matrizb[r][c];
	
	for(x=0;x<r;x++){
		for(y=0;y<c;y++){
			cout << "\n\tINTRODUZCA EL VALOR PARA A["<<(x+1)<<"]["<<(y+1)<<"]: ";
			cin >> matriza[x][y];
		}
	}
	
	for(x=0;x<r;x++){
		for(y=0;y<c;y++){
			cout << "\n\tINTRODUZCA EL VALOR PARA B["<<(x+1)<<"]["<<(y+1)<<"]: ";
			cin >> matrizb[x][y];
		}
	}
	
	system("cls");
	cout<<"\n\n";
		
	cout<<"\n\tMATRIZ A:\n\n";
	
	for(x=0;x<r;x++){
		cout<<"\t|"<<"\t";
		for(y=0;y<c;y++){
			cout<<matriza[x][y]<<"\t";
		}
		cout<<"|\n";
	}
		
	cout<<"\n\tMatriz B\n\n";
	
	for(x=0;x<r;x++){
		cout<<"\t|"<<"\t";
		for(y=0;y<c;y++){
			cout<<matrizb[x][y]<<"\t";
		}
		cout<<"|\n";
	}
	
	cout<<"\n\tRESTA: MATRIZ A - MATRIZ B\n\n";
	
	for(x=0;x<r;x++){
		cout<<"\t|"<<"\t";
		for(y=0;y<c;y++){
			cout<< (matriza[x][y]-matrizb[x][y]) <<"\t";
		}
		cout<<"|\n";
	}
	
	cout<<"\n\n\n\tPRESIONE ALGUNA TECLA PARA CONTINUAR\n--------------------------------------------------------------------------------";
	getch();
	system("cls");
	cout<<"\n\n";
	return 0;
}

multiplicarMatrices(){
	
	float cc=0,rr=0,ii=0,jj=0;
	int c=0,r=0,i=0,j=0,x,y,w;
	float ac;
	x=0;
	ac=0;
	cout<<"\n\n\n\tPARA LA MULTIPLICACION DE MATRICES ES NECESARIO QUE EL\n\tNUMERO DE COLUMNAS DE LA MATRIZ A SEA IGUAL AL NUMERO\n\tDE FILAS DE LA MATRIZ B\n";
	while((rr!=1)&&(rr!=6)&&(rr!=2)&&(rr!=3)&&(rr!=4)&&(rr!=5)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE FILAS PARA LA MATRIZ A (1-6): ";
		cin>>rr;
		if((rr==1)||(rr==6)||(rr==2)||(rr==3)||(rr==4)||(rr==5)){
			r=rr;
		}else{
			cout<<"\n\tDIMENSION INVALIDA\n";
		}
	}
	while((cc!=1)&&(cc!=6)&&(cc!=2)&&(cc!=3)&&(cc!=4)&&(cc!=5)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE COLUMNAS PARA LA MATRIZ A (1-6): ";
		cin>>cc;
		if((cc==1)||(cc==6)||(cc==2)||(cc==3)||(cc==4)||(cc==5)){
			c=cc;
		}else{
			cout<<"\n\tDIMENSION INVALIDA\n";
		}
	}
	while((ii!=1)&&(ii!=6)&&(ii!=2)&&(ii!=3)&&(ii!=4)&&(ii!=5)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE FILAS PARA LA MATRIZ B (1-6): ";
		cin>>ii;
		if((ii==1)||(ii==6)||(ii==2)||(ii==3)||(ii==4)||(ii==5)){
			i=ii;
		}else{
			cout<<"\n\tDIMENSION INVALIDA\n";
		}
	}
	while((jj!=1)&&(jj!=6)&&(jj!=2)&&(jj!=3)&&(jj!=4)&&(jj!=5)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE COLUMNAS PARA LA MATRIZ B (1-6): ";
		cin>>jj;
		if((jj==1)||(jj==6)||(jj==2)||(jj==3)||(jj==4)||(jj==5)){
			j=jj;
		}else{
			cout<<"\n\tDIMENSION INVALIDA\n";
		}
	}
	
		
	if(c==i){
		system("cls");
		cout<<"\n\n";
		float matriza[r][c], matrizb[i][j];
		for(x=0;x<r;x++){
			for(y=0;y<c;y++){
				cout << "\n\tINTRODUZCA EL VALOR PARA A["<<(x+1)<<"]["<<(y+1)<<"]: ";
				cin >> matriza[x][y];
			}
		}
		
		for(x=0;x<i;x++){
			for(y=0;y<j;y++){
				cout << "\n\tINTRODUZCA EL VALOR PARA B["<<(x+1)<<"]["<<(y+1)<<"]: ";
				cin >> matrizb[x][y];
			}
		}
		
		system("cls");
		cout<<"\n\n";
		
		cout<<"\n\tMatriz A:\n\n";
		for(x=0;x<r;x++){
			cout<<"\t|\t";
			for(y=0;y<c;y++){
				cout<< matriza[x][y]<<"\t";
			}
			cout<<"|\n";
		}
		
		cout<<"\n\tMatriz B:\n\n";
		for(x=0;x<i;x++){
			cout<<"\t|\t";
			for(y=0;y<j;y++){
				cout<< matrizb[x][y]<<"\t";
			}
			cout<<"|\n";
		}
		
		cout<<"\n\tMULTIPLICACION: MATRIZ A * MATRIZ B\n\n";
		
		for(x=0;x<r;x++){
			cout<<"\t|"<<"\t";
			for(w=0;w<j;w++){
				for(y=0;y<i;y++){
					ac = ac + ((matriza[x][y]) * (matrizb[y][w]));
					if(y==(i-1)){
						cout<<ac<<"\t";
						ac=0;
					}
				}
		 	}
			cout<<"|\n";
		}
		cout<<endl;
	} else{
		cout<<"\n\tNO PUEDE EFECTUARSE LA OPERACION DEBIDO A QUE ES NECESARIO\n\tQUE EL NUMERO DE COLUMNAS DE LA MATRIZ A SEA IGUAL AL NUMERO\n\tDE FILAS DE LA MATRIZ B.\n";
	}
	
	cout<<"\n\n\n\tPRESIONE ALGUNA TECLA PARA CONTINUAR\n--------------------------------------------------------------------------------";
	getch();	
	system("cls");
	cout<<"\n\n";
	return 0;
}

productoNumReal(){
	
	cout<<"\n\n\n\tEL PRODUCTO DE UNA MATRIZ POR UN NUMERO REAL CONSISTE EN"
		<<"\n\tMULTIPLICAR CADA ELEMENTO DE LA MATRIZ POR EL NUMERO REAL.\n";
	int c,r,i,j;
	float x;
	float cc=0,rr=0;
	while((rr!=1)&&(rr!=2)&&(rr!=3)&&(rr!=4)&&(rr!=5)&&(rr!=6)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE FILAS DE LAS MATRICES (1-6): ";
		cin>>rr;
		if((rr==1)||(rr==2)||(rr==3)||(rr==4)||(rr==5)||(rr==6)){
			r=rr;
		}else{
			cout<<"\n\tDIMENSION INVALIDA...\n\t";
		}
	}
	while((cc!=1)&&(cc!=2)&&(cc!=3)&&(cc!=4)&&(cc!=5)&&(cc!=6)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE COLUMNAS DE LAS MATRICES (1-6): ";
		cin>>cc;
		if((cc==1)||(cc==2)||(cc==3)||(cc==4)||(cc==5)||(cc==6)){
			c=cc;
		}else{
			cout<<"\n\tDIMENSION INVALIDA...\n\t";
		}
	}
	cout<<"\n\tINTRODUZCA EL NUMERO REAL: ";
	cin>>x;
	
	system("cls");
	cout<<"\n\n";
	
	float matriz[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"\n\tINTRODUZCA EL VALOR PARA LA POSICION ["<<(i+1)<<"]["<<(j+1)<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	system("cls");
	cout<<"\n\n";
	
	cout<<"\n\tMATRIZ A:\n\n";
	for(i=0;i<r;i++){
		cout<<"\t|"<<"\t";
		for(j=0;j<c;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<"|\n";
	}
	
	cout<<"\n\t"<<x<<" * MATRIZ A:\n\n";
	for(i=0;i<r;i++){
		cout<<"\t|"<<"\t";
		for(j=0;j<c;j++){
			cout<<(x*matriz[i][j])<<"\t";
		}
		cout<<"|\n";
	}
	cout<<"\n\n\n\tPRESIONE ALGUNA TECLA PARA CONTINUAR\n--------------------------------------------------------------------------------";
	getch();
	system("cls");
	cout<<"\n\n";
	return 0;
		
}

sacarDeterminante(){
	
	cout<<"\n\n\tEL DETERMINANTE DE UNA MATRIZ CUADRADA ES UNA OPERACION QUE"
		<<"  \n\tSIMPLIFICA EL CALCULO DE OTRAS OPERACIONES MATRICIALES TALES"
		<<"  \n\tCOMO EL RANGO DE UNA MATRIZ Y LA INVERSA DE UNA MATRIZ.\n";
	float det;
	int g=0,r,c;
	while((g<1)||(g>4)){
		cout<<"\n\tOPCION #1: MATRIZ DE 2DO ORDEN"
			<<"\n\tOPCION #2: MATRIZ DE 3ER ORDEN"
			<<"\n\tOPCION #3: MATRIZ DE 4TO ORDEN"
			<<"\n\tOPCION #4: VOLVER AL MENU PRINCIPAL"
			<<"\n\n\tSU OPCION: ";
		cin>>g;
		if((g<1)||(g>4)){
			cout<<"\n\tOPCION INVALIDA\n";
		}
		if(g==4){
			system("cls");
			cout<<"\n\n";
			return 0;
		}
	}
	
	system("cls");
	cout<<"\n\n";
	g=g+1;
	float matriz[g][g];
	if(g==2){
		for(r=0;r<g;r++){
			for(c=0;c<g;c++){
				cout<<"\n\tINGRESE EL VALOR PARA LA POSICION ["<< (r+1) << "]["<< (c+1) <<"]: ";
				cin>>matriz[r][c]; 
			}
		}
		system("cls");
		cout<<"\n\n\n\tMatriz A:\n\n";
		for(r=0;r<g;r++){
			cout<<"\t|"<<"\t";
			for(c=0;c<g;c++){
				cout<<matriz[r][c]<<"\t";
			}
			cout<<"|\n";
		}
		det=(matriz[0][0]*matriz[1][1])-(matriz[1][0]*matriz[0][1]);
		cout<<"\n\tEL DETERMINANTE DE LA MATRIZ A ES: "<<det;
	}else if(g==3){
		for(r=0;r<g;r++){
			for(c=0;c<g;c++){
				cout<<"\n\tINGRESE EL VALOR PARA LA POSICION ["<< (r+1) << "]["<< (c+1) <<"]: ";
				cin>>matriz[r][c]; 
			}
		}
		system("cls");
		cout<<"\n\n\n\tMatriz A:\n\n";
		for(r=0;r<g;r++){
			cout<<"\t|"<<"\t";
			for(c=0;c<g;c++){
				cout<<matriz[r][c]<<"\t";
			}
			cout<<"|\n";
		}
		det=((matriz[0][0]*matriz[1][1]*matriz[2][2])+(matriz[0][1]*matriz[1][2]*matriz[2][0])+(matriz[0][2]*matriz[1][0]*matriz[2][1]))-((matriz[0][2]*matriz[1][1]*matriz[2][0])+(matriz[0][1]*matriz[1][0]*matriz[2][2])+(matriz[0][0]*matriz[2][1]*matriz[1][2]));
		cout<<"\n\tEL DETERMINANTE DE LA MATRIZ A ES: "<<det;
	}else if(g==4){
		for(r=0;r<g;r++){
			for(c=0;c<g;c++){
				cout<<"\n\tINGRESE EL VALOR PARA LA POSICION ["<< (r+1) << "]["<< (c+1)<<"]: ";
				cin>>matriz[r][c];
			}
		}
		system("cls");
		cout<<"\n\n\n\tMatriz A:\n\n";
		for(r=0;r<g;r++){
			cout<<"\t|"<<"\t";
			for(c=0;c<g;c++){
				cout<<matriz[r][c]<<"\t";
			}
			cout<<"|\n";
		}
		cout<<endl;
		det=((matriz[0][0]*matriz[1][1]*matriz[2][2]*matriz[3][3])+(matriz[0][1]*matriz[1][2]*matriz[2][3]*matriz[3][0])+(matriz[0][2]*matriz[1][3]*matriz[2][0]*matriz[3][1])+(matriz[0][3]*matriz[1][0]*matriz[2][1]*matriz[3][2]))-((matriz[0][3]*matriz[1][2]*matriz[2][1]*matriz[3][0])+(matriz[0][0]*matriz[1][3]*matriz[2][2]*matriz[3][1])+(matriz[0][1]*matriz[1][0]*matriz[2][3]*matriz[3][2])+(matriz[0][2]*matriz[1][1]*matriz[2][0]*matriz[3][3]));
		cout<<"\n\tEL DETERMINANTE DE LA MATRIZ A ES: "<<det;		
	}else if((g<2)||(g>4)){
		cout<<"\n\tOPCION INVALIDA";
	}
	
	cout<<"\n\n\n\tPRESIONE ALGUNA TECLA PARA CONTINUAR\n--------------------------------------------------------------------------------";
	getch();
	system("cls");
	cout<<"\n\n";
	return 0;
	
}

sistemaEcuaciones(){
	
	cout<<"\n\n\n\tENTENDEMOS POR ECUACION LINEAL A AQUELLA QUE TENGA LA FORMA DE"
		<<"    \n\tUN POLINOMIO DE PRIMER GRADO EJEMPLO: X + Y + Z = 1. ESTA PARTE"
		<<"    \n\tDEL SOFTWARE TIENE COMO OBJETIVO LA RESOLUCION DE SISTEMAS DE"
		<<"    \n\tECUACIONES LINEALES, ES DECIR, ENCONTAR UNA SOLUCION QUE SATIS-"
		<<"    \n\tFAGA TODAS LAS ECUACIONES DEL SISTEMA. UN SISTEMA DE ECUACIONES"
		<<"    \n\tLINEALES SE REPRESENTA DE LA SIGUIENTE FORMA:"
		<<"  \n\n\t| A(1,1)*X1 + A(1,2)*X2 + ... + A(1,N)*XN = B1 |"
		<<"    \n\t| A(2,1)*X1 + A(2,2)*X2 + ... + A(2,N)*XN = B2 |"
		<<"    \n\t| ............................................ |"
		<<"    \n\t| A(M,1)*X1 + A(M,2)*X2 + ... + A(M,N)*XN = BN |\n";
	int g=0,r,c;
	float deta,detb,detc,detd,x,y,z;
	while((g<1)||(g>3)){
		cout<<"\n\tOPCION #1: SISTEMA DE 2 INCOGNITAS Y 2 ECUACIONES"
			<<"\n\tOPCION #2: SISTEMA DE 3 INCOGNITAS Y 3 ECUACIONES"
			<<"\n\tOPCION #3: VOLVER AL MENU PRINCIPAL"
			<<"\n\n\tSU OPCION: ";
		cin>>g;
		if((g<1)||(g>3)){
			cout<<"\n\tOPCION INVALIDA\n";
		}
		if(g==3){
			system("cls");
			cout<<"\n\n";
			return 0;
		}
	}
	
	system("cls");
	cout<<"\n\n";
	
	g=g+1;
	float matriz[g][g],a[g];
	if(g==2){
		for(r=0;r<g;r++){
			for(c=0;c<g;c++){
				cout<<"\n\tINGRESE EL VALOR DE A["<< (r+1) << "]["<< (c+1)<<"]: ";
				cin>>matriz[r][c]; 
			}
			cout<<"\n\tINGRESE EL VALOR DE B["<<(r+1)<<"]: ";
			cin>>a[r];
		}
		deta=(matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]);
		if(deta==0){
			system("cls");
			cout<<"\n\n\n\tSISEMA DE ECUACIONES:\n\n";
			for(r=0;r<g;r++){
				cout<<"\t|\t";
				for(c=0;c<g;c++){
					if(c==(g-1)){
						cout<<matriz[r][c]<<"X"<<(c+1);
					}else{
						cout<<matriz[r][c]<<"X"<<(c+1)<<"\t+\t";
					}			 	
				}
				cout<<"\t=\t"<<a[r]<<"\t|\n";
			}
			cout<<"\n\tSU SISTEMA DE ECUACIONES TIENE INFINITAS SOLUCIONES\n";
		} else{
			system("cls");
			cout<<"\n\n\n\tSISEMA DE ECUACIONES:\n\n";
			for(r=0;r<g;r++){
				cout<<"\t|\t";
				for(c=0;c<g;c++){
					if(c==(g-1)){
						cout<<matriz[r][c]<<"X"<<(c+1);
					}else{
						cout<<matriz[r][c]<<"X"<<(c+1)<<"\t+\t";
					}			 	
				}
				cout<<"\t=\t"<<a[r]<<"\t|\n";
			}
			
			detb=((a[0]*matriz[1][1])-(a[1]*matriz[0][1]));
			detc=((matriz[0][0]*a[1])-(matriz[1][0]*a[0]));
			x=detb/deta;
			y=detc/deta;
			cout<<"\n\tLOS VALORES DE SUS VARIABLES SON: \n";
			cout<<"\tX1= "<<x<<endl;
			cout<<"\tX2= "<<y<<endl;
		}
	
	}
	if(g==3){
		for(r=0;r<g;r++){
			for(c=0;c<g;c++){
				cout<<"\n\tINGRESE EL VALOR PARA LA POSICION ["<< (r+1) << "]["<< (c+1)<<"]: ";
				cin>>matriz[r][c]; 
			}
			cout<<"\n\tINGRESE EL TERMINO INDEPENDIENTE ["<<(r+1)<<"]: ";
			cin>>a[r];
		}
		deta=((matriz[0][0]*matriz[1][1]*matriz[2][2])+(matriz[0][1]*matriz[1][2]*matriz[2][0])+(matriz[0][2]*matriz[1][0]*matriz[2][1]))-((matriz[0][2]*matriz[1][1]*matriz[2][0])+(matriz[0][1]*matriz[1][0]*matriz[2][2])+(matriz[0][0]*matriz[2][1]*matriz[1][2]));
		if(deta==0){
			system("cls");
			cout<<"\n\n\n\tSISEMA DE ECUACIONES:\n\n";
			for(r=0;r<g;r++){
				cout<<"\t|\t";
				for(c=0;c<g;c++){
					if(c==(g-1)){
						cout<<matriz[r][c]<<"X"<<(c+1);
					}else{
						cout<<matriz[r][c]<<"X"<<(c+1)<<"\t+\t";
					}			 	
				}
				cout<<"\t=\t"<<a[r]<<"\t|\n";
			}
			cout<<"\n\tSU SISTEMA DE ECUACIONES TIENE INFINITAS SOLUCIONES\n";
		} else{
			system("cls");
			cout<<"\n\n\n\tSISEMA DE ECUACIONES:\n\n";
			for(r=0;r<g;r++){
				cout<<"\t|\t";
				for(c=0;c<g;c++){
					if(c==(g-1)){
						cout<<matriz[r][c]<<"X"<<(c+1);
					}else{
						cout<<matriz[r][c]<<"X"<<(c+1)<<"\t+\t";
					}			 	
				}
				cout<<"\t=\t"<<a[r]<<"\t|\n";
			}
			detb=((a[0]*matriz[1][1]*matriz[2][2])+(matriz[0][1]*matriz[1][2]*a[2])+(matriz[0][2]*a[1]*matriz[2][1]))-((matriz[0][2]*matriz[1][1]*a[2])+(matriz[0][1]*a[1]*matriz[2][2])+(a[0]*matriz[2][1]*matriz[1][2]));
			detc=((matriz[0][0]*a[1]*matriz[2][2])+(a[0]*matriz[1][2]*matriz[2][0])+(matriz[0][2]*matriz[1][0]*a[2]))-((matriz[0][2]*a[1]*matriz[2][0])+(a[0]*matriz[1][0]*matriz[2][2])+(matriz[0][0]*a[2]*matriz[1][2]));
			detd=((matriz[0][0]*matriz[1][1]*a[2])+(matriz[0][1]*a[1]*matriz[2][0])+(a[0]*matriz[1][0]*matriz[2][1]))-((a[0]*matriz[1][1]*matriz[2][0])+(matriz[0][1]*matriz[1][0]*a[2])+(matriz[0][0]*matriz[2][1]*a[1]));
			x=detb/deta;
			y=detc/deta;
			z=detd/deta;
			cout<<"\n\tLOS VALORES DE SUS VARIABLES SON: \n";
			cout<<"\tX1 = "<<x<<endl;
			cout<<"\tX2 = "<<y<<endl;
			cout<<"\tX3 = "<<z<<endl;	
		}
	}	if(g!=2 && g!=3){
		cout<<"\n\tOPCION INVALIDA\n";
	}
	
	cout<<"\n\n\n\tPRESIONE ALGUNA TECLA PARA CONTINUAR\n--------------------------------------------------------------------------------";
	getch();
	system("cls");
	cout<<"\n\n";
	return 0;
	
}

int invertir(){
	cout<<"\n\n\n\tDADA UNA MATRIZ CUADRADA A DE ORDEN N, EXISTE SU INVERSA X\n\t"
		<<"PARA EL PRODUCTO DE TAL FORMA QUE A MULTIPLICADA POR SU INVERSA\n\t"
		<<"DE COMO RESULTADO UNA MATRIZ IDENTIDAD: A * A(-1) = I(n)\n";
	int g=0;
	float det,d[3][3];
	while((g<1)||(g>3)){
		cout<<"\n\tOPCION #1: MATRIZ DE 2DO ORDEN"
			<<"\n\tOPCION #2: MATRIZ DE 3ER ORDEN"
			<<"\n\tOPCION #3: VOLVER AL MENU PRINCIPAL"
			<<"\n\n\tSU OPCION: ";	
		cin>>g;
		if((g<1)||(g>3)){
			cout<<"\n\tOPCION INVALIDA\n";
		}
		if(g==3){
			system("cls");
			cout<<"\n\n";
			return 0;
		}
	}
	system("cls");
	cout<<"\n\n";
	g=g+1;
	float matrizA[g][g];
	for(int i=0; i<g; i++){
		for(int j=0; j<g; j++){
			cout<<"\n\tINGRESE EL VALOR PARA LA POSICION["<<(i+1)<<"]["<<(j+1)<<"]: ";
			cin>>matrizA[i][j];
		}
	}
	system("cls");
	cout<<"\n\n";
	if(g==2){
		det=(matrizA[0][0]*matrizA[1][1])-(matrizA[0][1]*matrizA[1][0]);
		if(!det){
			cout<<"\n\tNO SE PUEDE INVERTIR LA MATRIZ\n";
		}else{
			d[0][0]=((1*matrizA[1][1])-(0*matrizA[0][1]))/det;
			d[1][0]=((matrizA[0][0]*0)-(matrizA[1][0]*1))/det;
			d[0][1]=((0*matrizA[1][1])-(1*matrizA[0][1]))/det;
			d[1][1]=((matrizA[0][0]*1)-(matrizA[1][0]*0))/det;
			cout<<"\n\tMATRIZ A:\n\n";
			for(int i=0; i<g; i++){
				cout<<"\t|\t";
				for(int j=0; j<g; j++){
					cout<<matrizA[i][j]<<"\t";
				}
				cout<<"|\n";
			}
			cout<<"\n\tMATRIZ A(-1):\n\n";
			for(int i=0; i<g; i++){
				cout<<"\t|\t";
				for(int j=0; j<g; j++){
					cout<<d[i][j]<<"\t";
				}
				cout<<"|\n";
			}
		}
	}else{
		det=((matrizA[0][0]*matrizA[1][1]*matrizA[2][2])+(matrizA[0][1]*matrizA[1][2]*matrizA[2][0])+(matrizA[0][2]*matrizA[1][0]*matrizA[2][1]))-((matrizA[0][2]*matrizA[1][1]*matrizA[2][0])+(matrizA[0][1]*matrizA[1][0]*matrizA[2][2])+(matrizA[0][0]*matrizA[2][1]*matrizA[1][2]));
		if(!det){
			cout<<"\n\tNO SE PUEDE INVERTIR LA MATRIZ\n";
		}else{
			d[0][0]=(((1*matrizA[1][1]*matrizA[2][2])+(matrizA[0][1]*matrizA[1][2]*0)+(matrizA[0][2]*0*matrizA[2][1]))-((matrizA[0][2]*matrizA[1][1]*0)+(matrizA[0][1]*0*matrizA[2][2])+(1*matrizA[2][1]*matrizA[1][2])))/det;
			d[1][0]=(((matrizA[0][0]*0*matrizA[2][2])+(1*matrizA[1][2]*matrizA[2][0])+(matrizA[0][2]*matrizA[1][0]*0))-((matrizA[0][2]*0*matrizA[2][0])+(1*matrizA[1][0]*matrizA[2][2])+(matrizA[0][0]*0*matrizA[1][2])))/det;
			d[2][0]=(((matrizA[0][0]*matrizA[1][1]*0)+(matrizA[0][1]*0*matrizA[2][0])+(1*matrizA[1][0]*matrizA[2][1]))-((1*matrizA[1][1]*matrizA[2][0])+(matrizA[0][1]*matrizA[1][0]*0)+(matrizA[0][0]*matrizA[2][1]*0)))/det;
			d[0][1]=(((0*matrizA[1][1]*matrizA[2][2])+(matrizA[0][1]*matrizA[1][2]*0)+(matrizA[0][2]*1*matrizA[2][1]))-((matrizA[0][2]*matrizA[1][1]*0)+(matrizA[0][1]*1*matrizA[2][2])+(0*matrizA[2][1]*matrizA[1][2])))/det;
			d[1][1]=(((matrizA[0][0]*1*matrizA[2][2])+(0*matrizA[1][2]*matrizA[2][0])+(matrizA[0][2]*matrizA[1][0]*0))-((matrizA[0][2]*1*matrizA[2][0])+(0*matrizA[1][0]*matrizA[2][2])+(matrizA[0][0]*0*matrizA[1][2])))/det;
			d[2][1]=(((matrizA[0][0]*matrizA[1][1]*0)+(matrizA[0][1]*1*matrizA[2][0])+(0*matrizA[1][0]*matrizA[2][1]))-((0*matrizA[1][1]*matrizA[2][0])+(matrizA[0][1]*matrizA[1][0]*0)+(matrizA[0][0]*matrizA[2][1]*1)))/det;
			d[0][2]=(((0*matrizA[1][1]*matrizA[2][2])+(matrizA[0][1]*matrizA[1][2]*1)+(matrizA[0][2]*0*matrizA[2][1]))-((matrizA[0][2]*matrizA[1][1]*1)+(matrizA[0][1]*0*matrizA[2][2])+(0*matrizA[2][1]*matrizA[1][2])))/det;
			d[1][2]=(((matrizA[0][0]*0*matrizA[2][2])+(0*matrizA[1][2]*matrizA[2][0])+(matrizA[0][2]*matrizA[1][0]*1))-((matrizA[0][2]*0*matrizA[2][0])+(0*matrizA[1][0]*matrizA[2][2])+(matrizA[0][0]*1*matrizA[1][2])))/det;
			d[2][2]=(((matrizA[0][0]*matrizA[1][1]*1)+(matrizA[0][1]*0*matrizA[2][0])+(0*matrizA[1][0]*matrizA[2][1]))-((0*matrizA[1][1]*matrizA[2][0])+(matrizA[0][1]*matrizA[1][0]*1)+(matrizA[0][0]*matrizA[2][1]*0)))/det;
			for(int i=0; i<g; i++){
				cout<<"\t|\t";
				for(int j=0; j<g; j++){
					cout<<matrizA[i][j]<<"\t";
				}
				cout<<"|\n";
			}
			cout<<"\n\tMATRIZ A(-1):\n\n";
			for(int i=0; i<g; i++){
				cout<<"\t|\t";
				for(int j=0; j<g; j++){
					cout<<d[i][j]<<"\t";
				}
				cout<<"|\n";
			}
		}
	}

	cout<<"\n\n\n\tPRESIONE ALGUNA TECLA PARA CONTINUAR\n--------------------------------------------------------------------------------";
	getch();
	system("cls");
	cout<<"\n\n";
	return 0;
}

int transposicion(){
	int r=0,c=0;
	cout<<"\n\n\tLA TRANSPOSICION DE MATRICES CONSISTE EN INTERCAMBIAR LAS\n\t"
		<<"FILAS Y LAS COLUMNAS DE UNA MATRIZ Y SE EXPRESA COMO: A(T)\n";
	float cc=0,rr=0;	
	while((rr!=1)&&(rr!=2)&&(rr!=3)&&(rr!=4)&&(rr!=5)&&(rr!=6)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE FILAS DE LAS MATRICES (1-6): ";
		cin>>rr;
		if((rr==1)||(rr==2)||(rr==3)||(rr==4)||(rr==5)||(rr==6)){
			r=rr;
		}else{
			cout<<"\n\tDIMENSION INVALIDA...\n\t";
		}
	}
	while((cc!=1)&&(cc!=2)&&(cc!=3)&&(cc!=4)&&(cc!=5)&&(cc!=6)){
		cout<<"\n\tINTRODUZCA EL NUMERO DE COLUMNAS DE LAS MATRICES (1-6): ";
		cin>>cc;
		if((cc==1)||(cc==2)||(cc==3)||(cc==4)||(cc==5)||(cc==6)){
			c=cc;
		}else{
			cout<<"\n\tDIMENSION INVALIDA...\n\t";
		}
	}
	system("cls");
	cout<<"\n\n";
	float matrizA[r][c];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<"\n\tINGRESE EL VALOR PARA LA POSICION["<<(i+1)<<"]["<<(j+1)<<"]: ";
			cin>>matrizA[i][j];
		}
	}
	system("cls");
	cout<<"\n\n";
	cout<<"\n\tMATRIZ A:\n\n";
	for(int i=0; i<r; i++){
		cout<<"\t|\t";
		for(int j=0; j<c; j++){
			cout<<matrizA[i][j]<<"\t";
		}
		cout<<"|\n";
	}
	cout<<"\n\tMATRIZ A(T):\n\n";
		for(int i=0; i<c; i++){
		cout<<"\t|\t";
		for(int j=0; j<r; j++){
			cout<<matrizA[j][i]<<"\t";
		}
		cout<<"|\n";
	}
	cout<<"\n\n\n\tPRESIONE ALGUNA TECLA PARA CONTINUAR\n--------------------------------------------------------------------------------";
	getch();
	system("cls");
	cout<<"\n\n";
	return 0;
}

int propiedades(){
	int op;
	cout<<"\n\n\n\tSELECCIONE UNA PROPIEDAD:\n";
	do{
		cout<<"\n\tOPCION #1: PRODUCTO DE UNA MATRIZ POR UN NUMERO REAL"
			<<"\n\tOPCION #2: TRANSPOSICION DE UNA MATRIZ"
			<<"\n\tOPCION #3: INVERSA DE UNA MATRIZ"
			<<"\n\tOPCION #4: VOLVER AL MENU PRINCIPAL"
			<<"\n\n\tSU OPCION: ";
		cin>>op;
		if((op<1)||(op>4)){
			cout<<"\n\tOPCION INVALIDA\n";
		}	
	}while((op<1)||(op>4));
	if(op==4){
		system("cls");
		cout<<"\n\n";
		return 0;
	}
	system("cls");
	if(op==1){ productoNumReal(); }
	else if(op==2){ transposicion(); }
	else if(op==3){ invertir();	}
	
	return 0;
}


