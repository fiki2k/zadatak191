/* Program treba obrnut broj i izracunat sumu znamenki pomocu rekurzije. */

#include<stdio.h>
void ispis(long int n);
void ispisznamenki(long int n);
int zbrojznamenki( long int n);

int main( )
{
        long int broj;
        printf("Unesi broj : ");
        scanf("%ld", &broj);
        printf("\nSuma znamenki je : ");
        printf("%d\n",zbrojznamenki(broj));
        printf("\n");
        printf("Originalan broj je : ");
        ispis(broj);
        printf("\n");
        printf("\nObrnut broj je : ");
        ispisznamenki(broj);
        printf("\n");

        return 0;

}


int zbrojznamenki(long int n)
{
        if( n/10 == 0 ) 
                return n;
        return n%10 + zbrojznamenki(n/10);
}


void ispis(long int n)
{
        if( n/10==0 )
        {
                printf("%d",n);
                return;
        }
        ispis(n/10);
        printf("%d",n%10);
}


void ispisznamenki(long int n)
{
        if(n/10==0)
        {
                printf("%d",n);
                return;
        }
        printf("%d",n%10);
        ispisznamenki(n/10);
}
