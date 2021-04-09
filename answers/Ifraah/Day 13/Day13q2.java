//Author: Ifraah Tabassum
//Program to check whether an array is palindrome or not

import java.util.Scanner;
import java.util.ArrayList;
class Day13q2{
 static int palindrome(int arr[], int begin, int end)
{
    // base case
    if (begin >= end) {
        return 1;
    }
    if (arr[begin] == arr[end]) {
        return palindrome(arr, begin + 1, end - 1);
    }
    else {
        return 0;
    }
}
     public static void main(String[] args){
Scanner sc = new Scanner(System.in);
System.out.println("Enter the no of elements:");
int n = sc.nextInt();
int arr[] = new int[n];
 System.out.println("Enter the elements:");       
         for(int i=0; i<n;i++){
	arr[i] = sc.nextInt();
       	 }
if (palindrome(arr, 0, n - 1) == 1)
        System.out.print( "Palindrome");
    else
        System.out.println( "Not Palindrome");

	}

}