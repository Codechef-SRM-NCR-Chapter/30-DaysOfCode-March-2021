//Author: Ifraah Tabassum
//Program to find the sum of digits of a number

import java.util.Scanner;
class Day13q1{
public static void main(String[] args){
     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int x, sum = 0;
     while(n>0)
     {
         x = n%10;
        sum = sum + x;
        n = n/10;
     }
System.out.println(sum);
}
}