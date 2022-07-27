#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int id;
    char name[8];
    int class;
};

struct student *p;

void create(int id, char *name, int class){
    p = (struct student*)malloc(sizeof(struct student));
    p->id=id;
    strcpy(p->name, name);
    p->class = class;
}

int main(){

    int id, class;
    char name[8];
    printf("Give student info: ");
    scanf("%d %s %d", &id, name, &class);

    create(id, name, class);

    printf("Given info: %d %s %d\n", p->id, p->name, p->class);
}
