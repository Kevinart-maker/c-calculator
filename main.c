#include <stdio.h>
#include <stdlib.h>


/*int main(){
   int a;
   int b;
   int add = a+b;

   return (add);
};*/

int main()
{



/*int a;
int b;
int add;
float subtract;
float option;

for(;;){
    printf("\nWelcome to my Calculator\nChoose an option:\n 1. To Add\n 2. To subtract\n 3. To multiply\n 4. To divide\n 5. To exit \n");
    scanf("\n%d",&option);
    if(option=1){
        printf("\nTo add enter two values: \n");
        scanf("%f %f",&a,&b);
        add = a+b;
        printf("%.2f",add);
        }
    else if(option=2){
        printf("\nTo subtract enter two values: \n");
        scanf("%f %f",&a,&b);
        subtract = a-b;
        printf("%.2f",subtract);
    }
     }
     */
     //Calculator using functions

int option;
float a;
float b;
float add;
float subtract;

     for(;;){
    printf("\nWelcome to my Calculator\nChoose an option:\n 1. To Add\n 2. To subtract\n 3. To multiply\n 4. To divide\n 5. To exit \n");
    scanf("\n%d",&option);
    if(option==1){
        printf("\nTo add enter two values: \n");
        scanf("%f %f",&a,&b);
        add = a+b;
        printf("%.2f",add);
        }
    else if(option==2){
        printf("\nTo subtract enter two values: \n");
        scanf("%f %f",&a,&b);
        subtract = a-b;
        printf("%.2f",subtract);
    }else if(option==5){
      break;
    }
     }

     return 0;
}
