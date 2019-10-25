#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

struct std_db{
    char name[20];
    int age;
    int roll_number;
};

struct std_db * create_db_student()
{
    struct std_db* st1 = (struct std_db *)malloc(sizeof(struct std_db));
    printf("Get stutents name:\n");
    memset(st1->name, 0, sizeof(st1->name));
    fgets(st1->name, sizeof(st1->name), stdin);
    printf("Get students age:\n");
    scanf("%d",&(st1->age));
    printf("Get students roll no:\n");
    scanf("%d",&(st1->roll_number));
    
    return st1;
}

void print_std_details(struct std_db *st)
{
    printf("student details are:\n");
    printf("name:%s\n",st->name);
    printf("Roll no:%d\n",st->roll_number);
    printf("age:%d\n",st->age);
}

int main(){
    struct std_db *std1 = create_db_student();
    print_std_details(std1);
    return 0;
}
