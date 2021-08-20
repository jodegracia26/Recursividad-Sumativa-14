#include<stdio.h>
#include<math.h>

//Recursividad para encontrar los valores del Polinomio de Hermite
double hn(double var, int n){
    if(n==0){ //Para H0
        return 1;
    }
    else if(n==1){ //Para H1
        return 2*var;
    }
    else{ //Para H2 en adelante (n>=2)
        return 2*var*hn(var,n-1)-2*(n-1)*hn(var,n-2);
    }
}

int main(){

    int var;
    printf("---Evaluacion del Polinomio de Hermite---\n");
    printf("Ingrese el valor de x: ");
    scanf("%d", &var);

//Ilustra el polinomio y luego muestra el resultado del polinomio ya evaluado
/*H0*/    printf("\nH0(x)=1\t\t\t\t\t\t\t\t\tH0(x)=%.0f", hn(var,0));
/*H1*/    printf("\nH1(x)=2x\t\t\t\t\t\t\t\tH1(x)=%.0f", hn(var,1));
/*H2*/    printf("\nH2(x)=4x^2-2\t\t\t\t\t\t\t\tH2(x)=%.0f", hn(var,2));
/*H3*/    printf("\nH3(x)=8x^3-12x\t\t\t\t\t\t\t\tH3(x)=%.0f", hn(var,3));
/*H4*/    printf("\nH4(x)=16x^4-48x^2+12\t\t\t\t\t\t\tH4(x)=%.0f", hn(var,4));
/*H5*/    printf("\nH5(x)=32x^5-160x^3+120x\t\t\t\t\t\t\tH5(x)=%.0f", hn(var,5));
/*H6*/    printf("\nH6(x)=64x^6-480x^4+720x^2-120\t\t\t\t\t\tH6(x)=%.0f", hn(var,6));
/*H7*/    printf("\nH7(x)=128x^7-1344x^5+3360x^3-1680x\t\t\t\t\tH7(x)=%.0f", hn(var,7));
/*H8*/    printf("\nH8(x)=256x^8-3584x^6+13440x^4-13440x^2+1680\t\t\t\tH8(x)=%.0f", hn(var,8));
/*H9*/    printf("\nH9(x)=512x^9-9216x^7+48384x^5-80640x^3+30240x\t\t\t\tH9(x)=%.0f", hn(var,9));
/*H10*/   printf("\nH10(x)=1024x^10-23040x^8+161280x^6-403200x^4+302400x^2-30240\t\tH10(x)=%.0f", hn(var,10));
}