#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

void seat(char seating[10][10]){
    int ROW,COL,i;
    seating[0][0]='\\';
    for(i=1;i<=9;i++){
        seating[i][0]='0'+10-i;
        seating[0][i]='0'+i;
    }
    for(ROW=0;ROW<10;ROW++){
        for(COL=0;COL<10;COL++){
            printf("%c",seating[ROW][COL]);
        }
        printf("\n");
    }
}

int main(){
int password,times=0,i,j,ROW,COL;
char ch,word;
char seating[10][10];

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
	
	
	
	
	do{
		scanf("%d",&password);
		if(password!=2024){
		times++;	
		printf("error %d times\n",times);
		}
		if(times==3){
			return 0;
		} 
	}while(password!=2024); 
printf("Password Correct! Welcome!");

system("pause");//The screen pauses and waits for the user to press any key
system("cls");//clear screen

for(ROW=1;ROW<=9;ROW++){
        for(COL=1;COL<=9;COL++){
            seating[ROW][COL]='-';
        }
    }
    srand(time(NULL));										
    for(i=1;i<=10;i++){
    	if(seating[ROW][COL]=='*'){
    		i=i-1;
    		continue;
		}
		else{
			seating[rand()%9+1][rand()%9+1]='*';
		}
    }

while(1){
puts("+=+=+=+=+=[BookingSystem]=+=+=+=+=+");
puts("|  a. Available seats             |");
puts("|  b. Arrange for you             |");
puts("|  c. Choose by yourself          |");
puts("|  d. Exit                        |");
puts("+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+");

	fflush(stdin);
	
	printf("please enter word a,b,c or d");
	scanf("%c",&word);
	
	if(word=='A'||word=='a'){
            system("CLS");										
            for(ROW=0;ROW<10;ROW++){
	            for(COL=0;COL<10;COL++){
	                if(seating[ROW][COL]=='@'){
					seating[ROW][COL]='*';
					}
				}
			}
            seat(seating);
            system("pause");									
            system("cls");									
        }


	}


} 
