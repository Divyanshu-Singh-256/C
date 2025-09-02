# include <stdio.h>

// this program converts decimal to hexadecimal  

int main(){
    printf("Enter the Decimal number \n");
    int decimal;
    scanf("%d",&decimal);
    char hex[20];
    int i=0;    
    while (decimal!=0){
        int rem=decimal%16;
        if (rem<10){
            hex[i]=rem+'0';
            i++;
        }
        else{
            hex[i]=rem-10+'A';
            i++;
        }
    }
    printf("The Hexadecimal value is %s\n",hex);
}