#include<stdio.h>

void partA();
void partB();
void partC();
void partD();
void partE();



int main(){


char choose;
printf("What part you want to see please choose[A-E]: ");
scanf("%c",&choose);

switch(choose){
	case 'A':
	partA();
	printf("Hello");
	break;
	
	case 'B':
	partB();
	printf("Hello");
	break;
	
	case 'C':
	partC();
	printf("Hello");
	break;
	
	case 'D':
	partD();
	printf("Hello");
	break;
	
	case 'E':
	partE();
	printf("Hello");
	break;
	
	default:
	printf("Sorry this is error please choose between the choices or try to uppercase your choices.");
	break;
	
}

return 0;
}

void partA(){
	int a;
	
	for(a=6;a<=66;a+=2){
	printf("%d ",a);
	}
	
	return;
}

void partB(){
	int a;
	
	for(a=7;a<=67;a+=2){
	printf("%d ",a);
	}
	
	return;
}

void partC(){
	int a,n;
	
	for(a=1;a<=15;a++){
	n +=a;
	}
	
	printf("%d ",n);
	return;
}

void partD(){
	int a,n=0;
	
	for(a=15;a<=45;a+=2){
	n +=a;
	}
	
	printf("%d ",n);
	return;
}

void partE(){
	int a,n=0;
	
	for(a=1;a<=50;a+=3){
	n +=a;
	}
	
	printf("%d ",n);
	return;
}



