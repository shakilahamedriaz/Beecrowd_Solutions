
 #include <stdio.h>

int main()

{

    double a, b, c, temp;

    scanf("%lf %lf %lf", &a, &b, &c);

   if (a < b)

    {
        temp = a;
        a = b;
        b = temp;
    }

    if (b < c)

    {
        temp = b;
        b = c;
        c = temp;
    }

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

 if (a >= b + c)

    {
        printf("NAO FORMA TRIANGULOn\n");
    }

    else if (a * a == b * b + c * c)

    {
        printf("TRIANGULO RETANGULOn");
    }

    else if (a * a > b * b + c * c)

    {
   printf("TRIANGULO OBTUSANGULOn\n");
    }

    else if (a * a < b * b + c * c)

    {
        printf("TRIANGULO ACUTANGULOn\n");
    }



    if (a == b && b == c)

    {



        printf("TRIANGULO EQUILATEROn\n");
    }

    else if (a == b || b == c)

    {
        printf("TRIANGULO ISOSCELESn\n");
    }

    return 0;

}
