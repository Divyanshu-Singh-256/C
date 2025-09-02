# include <stdio.h>
// this program converts decimal to hexadecimal
/*
a program must be wrotten to convert 
1. decimal to hexadecimal
2. decimal to binary
3.binary to octal
4.octal to hexadecimal
5.octal to decimal
6. binary to decimal

*/

int main(){

    //converting decimal to hexadecimal
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
        decimal=decimal/16; // update the decimal value
    }
    hex[i]='\0'; // null character at the end of the string
    // reverse the string   
    for (int j=0;j<i/2;j++){
        char temp=hex[j];
        hex[j]=hex[i-j-1];
        hex[i-j-1]=temp;
    }
    printf("The Hexadecimal value is %s\n",hex);

    

}

