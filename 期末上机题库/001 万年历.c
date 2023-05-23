#include<stdio.h>
int judge(int year, int month){
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        return 1;
    else if(month==2)
        return (year%4!=0)||(year%100==0)&&(year%400!=0) ? 2 : 3;
    else
        return 4;
}
int main(){
    int year, m, n, a;
    char *week[] = {"Sun","Mon","Tues","Wed","Thur","Fri","Sat"};
    char *month[] = {"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    printf("Please input the year:");
    scanf("%d", &year);
    printf("\n");
    a = (year+(year-1)/4-(year-1)/100+(year-1)/400)%7;
    for(int i = 0; i < 12 ; i++){
        n = judge(year, i+1);
        printf("             =====%s=====\n", month[i]);
        for(int j = 0; j < 7; j++) printf("%6s", week[j]);
        printf("\n");
        for(int k = 0; k < a; k++) printf("      ");
        for(m = 1 ; m < 32 ; m++){
            printf("%6d", m);
            if((a+m)%7 == 0) printf("\n");
            if((n == 1 && m == 31) || (n == 2 && m == 28) || (n == 3 && m == 29) || (n == 4 && m == 30))
                break;
        }
        a = (a+m)%7;
        printf("\n\n");
    }
}
