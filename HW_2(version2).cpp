#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int password,number,number1,i,j;
	char input,h;
	//question 1 start//
puts("E1B45  E1B45  E1B45  E1B45");
puts(" E1B45  E1B45  E1B45  E1B4");
puts("  E1B45  E1B45  E1B45  E1B");
puts("E  E1B45  E1B45  E1B45  E1");
puts("E1  E1B45  E1B45  E1B45  E");
puts("E1B  E1B45  E1B45  E1B45  ");
puts("E1B4  E1B45  E1B45  E1B45 ");
puts("E1B45  E1B45  E1B45  E1B45");
puts(" E1B45  E1B45  E1B45  E1B4");
puts("  E1B45  E1B45  E1B45  E1B");
puts("E  E1B45  E1B45  E1B45  E1");
puts("E1  E1B45  E1B45  E1B45  E");
puts("E1B  E1B45  E1B45  E1B45  ");
puts("E1B4  E1B45  E1B45  E1B45 ");
puts("E1B45  E1B45  E1B45  E1B45");
puts(" E1B45  E1B45  E1B45  E1B4");
puts("  E1B45  E1B45  E1B45  E1B");
puts("E  E1B45  E1B45  E1B45  E1");
puts("E1  E1B45  E1B45  E1B45  E");
puts("E1B  E1B45  E1B45  E1B45  ");
puts("E1B4  E1B45  E1B45  E1B45 ");
puts("E1B45  E1B45  E1B45  E1B45");
puts(" E1B45  E1B45  E1B45  E1B4");
puts("  E1B45  E1B45  E1B45  E1B");
puts("E  E1B45  E1B45  E1B45  E1");
puts("E1  E1B45  E1B45  E1B45  E");
puts("E1B  E1B45  E1B45  E1B45  ");
puts("E1B4  E1B45  E1B45  E1B45 ");
puts("E1B4  E1B45  E1B45  E1B45 ");
puts("E1B45  E1B45  E1B45  E1B45");
puts(" E1B45  E1B45  E1B45  E1B4");
puts("  E1B45  E1B45  E1B45  E1B");
puts("E  E1B45  E1B45  E1B45  E1");
puts("E1  E1B45  E1B45  E1B45  E");
puts("E1B  E1B45  E1B45  E1B45  ");
puts("E1B4  E1B45  E1B45  E1B45 ");
puts("E1B4  E1B45  E1B45  E1B45 ");
puts("E1B45  E1B45  E1B45  E1B45");
puts(" E1B45  E1B45  E1B45  E1B4");
puts("  E1B45  E1B45  E1B45  E1B");
puts("E  E1B45  E1B45  E1B45  E1");
puts("E1  E1B45  E1B45  E1B45  E");
puts("E1B  E1B45  E1B45  E1B45  ");
puts("E1B4  E1B45  E1B45  E1B45 ");
system("pause");
system("cls");

printf("enter your password");
scanf("%d",&password);
while(password!=2024){
	number++;
	printf("already fail %d time\n",number);
	printf("%c",'\a');
	scanf("%d",&password);
	if(number==3){
		return 0;
	}
}
//question 1 end//
//question 2 start//
system("pause");
system("cls");
while(1){
system("cls");
puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
puts("|  a. Draw a right triangle    |");
puts("|  b. Show multiplication table|");
puts("|  c. end                      |");
puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
//question 2 end//
//question 3 start//
printf("Please enter a b c");
input=getch();
switch(input)
{
	case'A':
	case'a':
		
	case'b':
	case'B':
	
	system("cls");
	printf("Please enter a number between 1~9");
	scanf("%d",&number1);
	while(number1>9 || number1<1){
		printf("ERROR!! Please enter a number between 1~9");
		scanf("%d",&number1);
	}
	for(i=1 ; i<=number1 ;i++ ){
		for(j=1 ; j<=i ; j++){
		printf("%d*%d=%d",i,j,i*j);
		printf("\n");
		}
	}
	getch();
	system("cls");
	break;
		
	case'c':
	case'C':
	system("cls");
	printf("Continue?(y/n)");
	fflush(stdin);
	input=getch();
	if(input==78 || input==110){
		return 0;
	}
	else if(input==89 || input==121){
		break;
	}
	getch();
	break;
	
}

}
}
