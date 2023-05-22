#include<stdio.h>
struct NamePass{
int n[2];
char name[20];
char pass[5];

};

int main(){
struct NamePass np;

printf("Input 2 users name and password: ");
for(int i=0;i<2;i++){

        printf("Name: \n");
        scanf("%s",np.name);

        getchar();
        printf("Password: \n");
        scanf("%s",np.pass);
}

//print area

for(int i=0;i<2;i++){
printf("\ndetalis - %d\n",i+1);

        printf("Name:%s\n",np.name);
        printf("Password: %s\n",np.pass);

}

return 0;


}
