#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
//Print out seating chart
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
int password,times=0,i,j,ROW,COL,seats,attempt,usable=1;
char word,respond;
char seating[10][10];
//question 1 start
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
//question 1 end
//question 2 start
while(1){//Infinite loop menu
puts("+=+=+=+=+=[BookingSystem]=+=+=+=+=+");
puts("|  a. Available seats             |");
puts("|  b. Arrange for you             |");
puts("|  c. Choose by yourself          |");
puts("|  d. Exit                        |");
puts("+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+");

	fflush(stdin);Clear the input buffer
	
	printf("please enter word a,b,c or d");
	scanf("%c",&word);
//question 2 end
//question 3 start	
if(word=='A'||word=='a'){
    system("cls");//clear screen									
    for(ROW=0;ROW<10;ROW++){
	    for(COL=0;COL<10;COL++){
	        if(seating[ROW][COL]=='@'){
			seating[ROW][COL]='*';
			}
		}
	}//Enter the required number of people,and use the computer to random select seats
seat(seating);
system("pause");//The screen pauses and waits for the user to press any key									
system("cls");//clear screen								
}
//question 3 end
//question 4 start
	else if(word=='B'||word=='b'){
            system("cls");//clear screen									
            while(1){
            	printf("How many seats you need(1~4)?\n");
	            fflush(stdin);//Clear the input buffer
	            scanf("%d",&seats);							
	            if(seats>=1&&seats<=4){
	                if(seats<=3){
	                    while(1){
	                        int row=rand()%9+1;
	                        int col=rand()%(10-seats);
	                        for(i=col;i<col+seats;i++){
	                            if(seating[row][i]=='*'){
	                                usable=0;
	                                break;
	                            }
	                        }
	                        if(usable){
	                            for(i=col;i<col+seats;i++){
	                                seating[row][i]='@';
	                            }
	                            break;
	                        }
	                    }
	                }
					else{
	                    int found=0;
	                    for(attempt=0;attempt<100;attempt++){
	                        int row=rand()%9+1;
	                        int col=rand()%(10-seats);
	                        int usable=1;
	                        for(i=col;i<col+seats;i++){
	                            if(seating[row][i]=='*'){
	                                usable=0;
	                                break;
	                            }
	                        }
	                        if(usable){
	                            for(i=col;i<col+seats;i++){
	                                seating[row][i]='@';
	                            }
	                            found=1;
	                            break;
	                        }
	                    }
	                    if(!found){
	                        while(1){
	                            int row=rand()%9+1;
	                            int col=rand()%9+1;
	                            int usable=1;
	                            for(i=0;i<2;i++){
	                                for(j=col;j<col+2;j++){
	                                    if(seating[row+i][j]=='*'){
	                                        usable=0;
	                                        break;
	                                    }
	                                }
	                                if(!usable)break;
	                            }
	                            if(usable){
	                                for(i=0;i<2;i++){
	                                    for(j=col;j<col+2;j++){
	                                        seating[row+i][j]='@';
	                                    }
	                                }
	                                break;
	                            }
	                        }
	                    }
	                }
	            }
	            seat(seating);
	            printf("satisfied with this seat??");
	            scanf(" %c",&respond);
                fflush(stdin);//Clear the input buffer
                if(respond=='y'||respond=='Y'){
                    system("cls");//clear screen
                    break;
                }
				else if(respond=='n'||respond=='N'){
                    system("cls");//clear screen
                    printf("Please enter again\n");
                    for(ROW=0;ROW<10;ROW++){
                    	for(COL=0;COL<10;COL++){
                    		if(seating[ROW][COL]=='@'){
		                    	seating[ROW][COL]='-';
							}
						}
					}
                    continue;
                }
                else{
                	printf("Error,please enter again");
                	continue;
				}
			}
            for(ROW=0;ROW<10;ROW++){
	            for(COL=0;COL<10;COL++){
	                if(seating[ROW][COL]=='@'){
					seating[ROW][COL]='*';
					}
				}
			}
            system("pause");//The screen pauses and waits for the user to press any key
            system("cls");//clear screen
        }
//question 4 end
//question 5 start        
	else if(word=='C'||word=='c'){
            system("cls");//clear screen
            seat(seating);
            while(1){
                printf("Please enter the seat you choose(ROW-COL)\n");
                if(scanf("%d-%d",&ROW,&COL)!=2){
                    printf("Invalid input, please enter again\n");
                    fflush(stdin);//Clear the input buffer
                    continue;
                }
                fflush(stdin);//Clear the input buffer
                if(ROW>=1&&ROW<=9&&COL>=1&&COL<=9){
                    if(seating[10-ROW][COL]=='-'){
                        seating[10-ROW][COL]='@';
                        printf("Keep choicing? (y/n)\n");
                        scanf(" %c",&respond);
                        fflush(stdin);//Clear the input buffer
                        if(respond=='y'||respond=='Y'){
                            continue;
                        }
						else if(respond=='n'||respond=='N'){
                            seat(seating);
                            for(ROW=0;ROW<10;ROW++){
	           	 				for(COL=0;COL<10;COL++){
					                if(seating[ROW][COL]=='@'){
									seating[ROW][COL]='*';
									}
								}
							}
                            system("pause");//The screen pauses and waits for the user to press any key
                            break;
                        }
						else{
                            printf("Please enter again\n");
                        }
                    }
					else{
                        printf("Invalid seat or seat has been selected, please enter again\n");
                    }
                }
				else{
                    printf("Invalid seat or seat has been selected, please enter again\n");
                }
            }
            system("cls");//clear screen
        } 
//question 5 end 
//question 6 start		
	else if(word=='D'||word=='d'){
            printf("Continue? (y/n)\n");
            while(1){
                scanf(" %c",&respond);
                fflush(stdin);//Clear the input buffer
                if(respond=='y'||respond=='Y'){
                    system("cls");//clear screen
                    break;
                }else if(respond=='n'||respond=='N'){
                    system("cls");//clear screen
                    return 0;
                }
            }
        }
		else{
            printf("Error, please enter a,b,c or d\n");
            system("pause");//The screen pauses and waits for the user to press any key
            system("cls");//clear screen
        }   


}


} //Thoughts: This assignment is very difficult compared to the previous one. Although the form feels similar, 
//the depth of the content is different. You have to be very careful this time to make sure there are no mistakes in details,
 //otherwise Even though I can¡¦t execute it well, I can only say that I really learned a lot.
 
 //(my Dev c++ have some problem,so I use google translate and put chinese version on git hub)


