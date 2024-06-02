#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STUDENTS 10
int main(){
	int password,times,i;
	char word,respond;
	
	typedef struct{
    char name[100];
    int id;
	int math;
	int physics;
	int english;
    float average;
}Students;
Students students[MAX_STUDENTS];
int student_count = 0;
void enter_grades();
void calculate_average(Students *s);

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
system("cls");//clear screen

while(1){
puts("+=+=+=+=+=[Grade System]+=+=+=+=+=");
puts("|  a. Enter student grades       |");
puts("|  b. Display student grades     |");
puts("|  c. Search for student grades  |");
puts("|  d. Grade ranking              |");
puts("|  e. Exit system                |");
puts("+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");


scanf("%c",&word);

	if(word=='a'||word=='A'){
		return 0;
		break;
	}
	if(word=='b'||word=='B'){
		return 0;
		break;
	}
	if(word=='c'||word=='C'){
		return 0;
		break;
	}
	if(word=='d'||word=='D'){
		return 0;
		break;
	}
	if(word=='e'||word=='E'){
		system("cls");//clear screen
		printf("Continue? (y/n)\n");
            while(1){
                scanf("%c",&respond);
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
        printf("Error, please enter a,b,c,d or e\n");
        system("pause");//The screen pauses and waits for the user to press any key
        system("cls");//clear screen
    }   
	}
}

void enter_grades() {
    int n;
    system("cls");
    printf("Please enter number 5~10: ");
    scanf("%d",&n);

    if(n<5||n>10){
        printf("Error! Please enter again!\n");
        system("pause");
        return;
    }

    int i;
    for (i = 0; i < n; i++) {
        printf("Please enter %d student information:\n", i + 1);
        printf("name: ");
        scanf("%s", students[student_count].name);
        printf("Student id number (6-digit integer): ");
        scanf("%d", &students[student_count].id);
        printf("Math score (0~100): ");
        scanf("%d", &students[student_count].math);
        printf("Physics score (0~100): ");
        scanf("%d", &students[student_count].physics);
        printf("English score (0~100): ");
        scanf("%d", &students[student_count].english);

        calculate_average(&students[student_count]);
        student_count++;
    }
    system("pause");
}

void calculate_average(Students *s) {
    s->average = (s->math + s->physics + s->english) / 3.0;
}

