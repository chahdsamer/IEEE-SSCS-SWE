#include <stdio.h>
#include <string.h>
struct env_var{char *key ; char*value ;struct env_var*next;};
struct env_var * createnode();
void add(struct env_var*a);
void fill(struct env_var*a);
void update(struct env_var *a);
int main(){struct env_var *a=createnode();
    add(a);
    add(a);
fill(a);
update (a);
}
struct env_var * createnode(){
    struct env_var * new=(struct env_var*)malloc(sizeof(struct env_var));
    new->next= NULL;
    return new;
}
void add(struct env_var*a ){
    a->next=(struct env_var*)malloc(sizeof(struct env_var));
     struct env_var *  ptr=a->next;
 ptr->next=NULL;
}
void fill(struct env_var*a){
    struct env_var*ptr=a;
    while(ptr!=NULL){
        printf("enter the key and value for the variable\n");
        scanf("%s %s",&ptr->key,&ptr->value);
        ptr=ptr->next; }}
void update (struct env_var *a){
    char* key;
    printf ("enter the key of the variable needed to be updated\n");
    scanf("%s",&key);
    struct env_var* p=a;
    while (p!=NULL){if (strcmp(p->key,key)==0){printf("enter the updated value");
    scanf("%s",&p->value);
    printf("the updated variable is key:%s value %s",p->key,p->value);}
    p=p->next;}}
