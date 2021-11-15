#include <stdio.h>
#include <stdlib.h>


int menu(){
    int a;
    system("cls");
    printf("---------Menu--------\n");
    printf("1_ Enter your marks\n");
    printf("2_ Show your marks\n");
    printf("3_ Sort them\n");
    printf("4_ EXIT\n");
    printf("____________________\n\n");
    printf("choose an option : ");
    scanf("%d",&a);
    return a;
}

int main(){

    //variable declaration
    int option;
    int marks[30];
    int i,n;
      
    do{
        //affichage menu
        option = menu();

        //fonctionalities
        switch(option){
            
            case 1: 
                system("cls");
                printf("enter how many marks you have : ");
                scanf("%d",&n);
                for(i=0;i<n;i++){
                    printf("\nplease enter mark %d : ",i+1);
                    scanf("%d",&marks[i]);
                }
                break;
            
            case 2:
                system("cls");
                printf("these are your marks (to order them checkout option 3) :");
                 for(i=0;i<n;i++){
                    printf("\n %d",marks[i]);
                }
                getch();
                break;
            
             case 3:
                system("cls");
                printf("You have ordered your marks !! ;)");
                int swap;
                do{
                    swap=0;
                    for(i=0;i<n-1;i++){
                        if(marks[i]>marks[i+1]){
                            int varTemp;
                            varTemp=marks[i];
                            marks[i]=marks[i+1];
                            marks[i+1]=varTemp;
                        
                            //increases anytime there's a swap
                            swap++;
                        }
                    }
                }while(swap>0);
                getch();
                break;

        }


    }
    while(option != 4);

}
