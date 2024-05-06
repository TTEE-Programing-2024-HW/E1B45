#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int password,number,number1,i,j,row;
	char input,h,word;
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
system("pause");//The screen pauses and waits for the user to press any key
system("cls");//clear screen

printf("enter your password");
scanf("%d",&password);
while(password!=2024){
	number++;
	printf("already fail %d time\n",number);
	printf("%c",'\a');//Output warning sound
	scanf("%d",&password);
	if(number==3){
		return 0;
	}
}
//question 1 end//
//question 2 start//
system("pause");//The screen pauses and waits for the user to press any key
system("cls");//clear screen
while(1){
system("cls");//clear screen
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
		printf("Please enter any word\n");
		system("pause");//The screen pauses and waits for the user to press any key
		system("cls");//clear screen
		word=getch();
		if(word>='a'&& word<='n'||word>='A'&&word<='N'){
			row=word-'a'+1;
			for(i=0;i<row;i++){
				for(j=0;j<=i;j++){
					printf("%c",word-j);
					}
				printf("\n");
			}
		}
			getch();
			system("cls");//clear screen
			break;
			
		
	case'b':
	case'B':
	
	system("cls");//clear screen
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
	system("cls");//clear screen
	break;
		
	case'c':
	case'C':
	system("cls");//clear screen
	printf("Continue?(y/n)");
	fflush(stdin);//Empty the input buffer and always place it before scanf()
	input=getch();
	
	while(input!=78&&input!=110&&input!=89&&input!=121){
	printf("ERROR!! Please enter again");
	input=getch();
	fflush(stdin);//Empty the input buffer and always place it before scanf()
	}
		if(input==78 || input==110){
		return 0;
	}
	else if(input==89 || input==121){
		break;
	}
	getch();
	break;
	
}
//question 3 end//

}
}

//Because there are problems with Dec C++, the experience will be added to the content of the submitted file in Chinese.
