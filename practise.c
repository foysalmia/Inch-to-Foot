#include <stdio.h>
int main ()
{
    /*int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", x/y);
    return 0;*/
    int height;
    printf("Enter your height in inch : ");
    scanf("%d",&height);

    int foot = height / 12;
    int inch = height % 12 ;
    printf("\n");
    if(inch){
        printf("Your actual height is %d foot and %d inch ",foot,inch);
    }
    else{
        printf("Your actual height is %d foot",foot);
    }


    getch();

    return 0;
}
