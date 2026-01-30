#include <stdio.h>
#include<string.h>
#define n 15
struct student{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct student s[n]={
        {1, "Akshaya", 78},
        {2, "Madhu", 85},
        {3, "Chitra", 92},
        {4, "Deepa", 60},
        {5, "Ezhil", 88},
        {6, "JayaSree", 55},
        {7, "Gokul", 91},
        {8, "Hari", 72},
        {9, "Indu", 66},
        {10, "Hardik", 45},
        {11, "Karthi", 58},
        {12, "Dharnika", 80},
        {13, "Viji", 95},
        {14, "Nisha", 89},
        {15, "Dharshana", 70}
    };
    
    int c,flag;
    char name1[20];
    int roll1;
    float max,min;
    while(1){
        printf("1.Display\n2.Search by name\n3.Search by roll\n4.Highest marks\n5.Lowest marks\n6.Exit\n");
        scanf("%d", &c); 
        
        if(c==1){
            for(int i=0;i<n;i++){
                printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
            }
        }
        
        else if(c==2){
            flag=0;
            scanf("%s",name1);
            for(int i=0;i<n;i++){
                if(strcmp(s[i].name,name1)==0){
                    printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
                    flag=1;
                    break;
                }
            }
            if(!flag){
                    printf("student not found\n");
                }
        }
        
        else if(c==3){
            flag=0;
            scanf("%d",&roll1);
            for(int i=0;i<n;i++){
                if(s[i].roll==roll1){
                    printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
                    flag=1;
                    break;
                }
                
            }
            if(!flag){
                    printf("rollno not found\n");
                }
        }
        
        else if(c==4){
            printf("give the marks which you want equal or greater than:");
            scanf("%f",&max);
            for(int i=0;i<n;i++){
                if(s[i].marks>=max){
                   printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
                }
            }
        }
        
        else if(c==5){
            printf("give the marks which you want equal or less than:");
            scanf("%f",&min);
            for(int i=0;i<n;i++){
                if(s[i].marks<=min){
                   printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
                }
            }
        }
        
        else if(c==6){
            break;
        }
        else{
            printf("invaild input\n");
        }
        
        
    }
    return 0;
}

