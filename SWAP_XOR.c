///Name: MD.Shamim Jahan Sohag
///University: Dhaka International University
///Fb: fb.com/sohagmahin
///Email: sohagmahin@yahoo.com
///Blog: www.sohagerblog.wordpress.com
#include<stdio.h>
#include<math.h>
int main(){
    int x=2,y=3;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("X  : %d\nY  : %d\n",x,y);
}
///x=2=0010
///y=3=0011

/* x=x^y= 0010
          0011
         -------
          0001 (Decimal: 1)

   y=x^y= 0001
          0011
        -------
          0010 (Decimal: 2)

   x=x^y= 0001
          0010
         ------
          0011 (Decimal : 3)
    x=3;
    y=2;

*/
