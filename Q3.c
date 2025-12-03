#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
    char name[50];
    int marks;
};

int main(){
    int n;
    int i;
    struct Student *students;
    printf("Enter number of students: ");
    scanf("%d",&n);
    students=(struct Student*)malloc(n*sizeof(struct Student));
    if(students==NULL){
        printf("Memory allocation failed\n");
        return 0;
    }
    for(i=0;i<n;i++){
        printf("Enter name of student %d: ",i+1);
        getchar();
        fgets(students[i].name,50,stdin);
        students[i].name[strcspn(students[i].name,"\n")]='\0';
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&students[i].marks);
    }
    printf("Students with marks > 75:\n");
    for(i=0;i<n;i++){
        if(students[i].marks>75){
            printf("%s %d\n",students[i].name,students[i].marks);
        }
    }
    free(students);
    return 0;
}
