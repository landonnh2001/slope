#include <stdio.h>

int main()
    {
        
        float X1;
        float X2;
        float Y1;
        float Y2;
        float slope;
        int unknown;
    
    
    printf("what are you looking for(Y1(1),Y2(2),X1(3),X2(4),slope(5))\n");
        scanf("%d",&unknown);
    if (unknown==5){
        printf("what is X1?\n");
        scanf("%f",&X1);
         printf("what is Y1?\n");
        scanf("%f",&Y1);
         printf("what is X2?\n");
        scanf("%f",&X2);
         printf("what is Y2?\n");
        scanf("%f",&Y2);
       slope=((Y2-Y1)/(X2-X1));
             printf("your slope is:%f\n",slope);
        
    }
        if (unknown==4){
        printf("what is slope?\n");
        scanf("%f",&slope);
         printf("what is X1?\n");
        scanf("%f",&X1);
         printf("what is Y1?\n");
        scanf("%f",&Y1);
         printf("what is Y2?\n");
        scanf("%f",&Y2);
       X2=(((Y2-Y1)/(slope))+X1);
             printf("your X2 is:%f\n",X1);
    }
        
        if (unknown==3){
        printf("what is slope?\n");
        scanf("%f",&slope);
            printf("what is Y1?\n");
        scanf("%f",&Y1);
         printf("what is X2?\n");
        scanf("%f",&X2);
         printf("what is Y2?\n");
        scanf("%f",&Y2);
        X1=(((Y2-Y1)/(slope))-X2);
             printf("your X1 is:%f\n",X1);
    }
        
        if (unknown==2){
         printf("what is X1?\n");
        scanf("%f",&X1);
         printf("what is Y1?\n");
        scanf("%f",&Y1);
         printf("what is X2?\n");
        scanf("%f",&X2);
         printf("what is slope?\n");
        scanf("%f",&slope);
      Y2=((slope*(X2-X1))+Y1);
             printf("your Y2 is:%f\n",Y2);
    }
        
        if (unknown==1){
         printf("what is slope?\n");
        scanf("%f",&slope);
         printf("what is X1?\n");
        scanf("%f",&X1);
         printf("what is X2?\n");
        scanf("%f",&X2);
         printf("what is Y2?\n");
        scanf("%f",&Y2);
       Y1=(Y2-(slope*(X2-X1)));
             printf("your Y1 is:%f\n",Y1);
        }
    
        
        
    }
