// Representation of Polynomial - Structure
#include <stdio.h>

struct poly{
    int coeff;
    int exp;
};

int main()
{
    struct poly p1[3]; // p1 is a polynomial of 3 terms
    
    p1[0].coeff = 5; p1[0].exp = 2; //5x^2
    p1[1].coeff = 2; p1[1].exp = 1; //2x^1
    p1[2].coeff = 6; p1[2].exp = 0; //6x^0
    
    //printing as a polynomial
    for(int i=0;i<3;i++){
        printf("%dx^%d+",p1[i].coeff,p1[i].exp);
    }
}

// Representation of Polynomial using array
#include <stdio.h>
int main()
{
    int p1[3] = {6,2,5};
    //p1 is an array whose index represents the power of x and 
    // value at the index represents the coefficient of x
    
    //printing as a polynomial
    for(int i=2;i>=0;i--){
        printf("%dx^%d+",p1[i],i);
    }
}
