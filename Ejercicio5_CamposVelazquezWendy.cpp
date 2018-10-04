#include <stdio.h>
#include <conio.h>
main()
{
	int dinero, m1=0, m2=0, m5=0, m10=0, b20=0, b50=0, b100=0, b200=0, b500=0;
	printf("Ingrese la cantidad de dinero: \n");
	scanf ("%d", &dinero);
if (dinero>=500)	
{
    b500=dinero/500;
    dinero=dinero-(b500*500);
}
if (dinero>=200)
{
    b200=dinero/200;
    dinero=dinero-(b200*200);
}
if (dinero>=100)
{
	    b100=dinero/100;
        dinero=dinero-(b100*100);
}
if (dinero>=50)
{
	    b50=dinero/50;
    dinero=dinero-(b50*50);
}
if (dinero>=20)
{
	    b20=dinero/20;
    dinero=dinero-(b20*20);
}
if (dinero>=10)
{
	    m10=dinero/10;
    dinero=dinero-(m10*10);
}
if (dinero>=5)
{
	    m5=dinero/5;
    dinero=dinero-(m5*5);
}
if (dinero>=2)
{
	    m2=dinero/2;
    dinero=dinero-(m2*2);
}
if (dinero>=1)
{
	    m1=dinero/1;
    dinero=dinero-(m1*1);
}
        printf("\n %d La cantidad en billetes de $500", b500);
        printf("\n %d La cantidad en billetes de $200", b200);
        printf("\n %d La cantidad en billetes de $100", b100);
        printf("\n %d La cantidad en billetes de $50", b50);
        printf("\n %d La cantidad en billetes de $20", b20);
        printf("\n %d La cantidad en billetes de $10", m10);
        printf("\n %d La cantidad en billetes de $5", m5);
        printf("\n %d La cantidad en billetes de $2", m2);
		printf("\n %d La cantidad en billetes de $1", m1);
	getch();
}
