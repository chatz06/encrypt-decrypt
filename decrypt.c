#include <stdio.h>

int main()
{
     int pr=0,deu=0,tri=0,teta=0;
    int num=0,boh=0;
    printf("give a number with 4 digits = ");
    scanf("%d",&num);
    while(num<1000||num>9999)
    {
    printf("give a number with 4 digits = ");
    scanf("%d",&num);
}
pr=(int)num/1000;
deu=(int)(num%1000);
tri=(int)num%100;
boh=(deu-tri)/100;
deu=boh;
boh=0;
teta=(int)num%10;
boh=(tri-teta)/10;
tri=boh;
boh=0;
boh=pr;
pr=tri;
tri=boh;
boh=0;
boh=teta;
teta=deu;
deu=boh;
 for (int i = 0; i < 10; i++) {
        if ((i + 7) % 10 == pr) {
            pr = i;
            break;
        }
    }

     for ( int  i = 0; i < 10; i++) {
        if ((i + 7) % 10 == deu) {
            deu = i;
            break;
        }
    }

     for (int i = 0; i < 10; i++) {
        if ((i + 7) % 10 == tri) {
            tri = i;
            break;
        }
    }
     for (int i = 0; i < 10; i++) {
        if ((i + 7) % 10 == teta) {
            teta = i;
            break;
        }
     }
     num=pr*1000+deu*100+tri*10+teta;
       printf("The decrypted number is: %d\n", num);
return 0;
}