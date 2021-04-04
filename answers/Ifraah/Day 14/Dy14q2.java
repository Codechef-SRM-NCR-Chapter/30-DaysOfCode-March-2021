//Author: Ifraah Tabassum
//Program to get sum of two arrays

import java.util.Scanner; 
class Dy14q2{

    public static void main(String[] args){
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter the no. of elements in 1st array:");
         int n1 = sc.nextInt();
         int arr1[] = new int[n1];
         System.out.print("A =  ");
        for(int i=0; i<arr1.length; i++){
                arr1[i] = sc.nextInt(); }
  System.out.println("Enter the no. of elements in 2nd array:");
         int n2 = sc.nextInt();
         int arr2[] = new int[n2];
         System.out.print("B =  ");
        for(int j=0; j<arr2.length; j++){
                arr2[j] = sc.nextInt(); }

   
    
        
        int n3;
	int min;
        
        if(n1>n2){
        n3 = n1 + 1;
	min = n2;}
	else{
	n3 = n2 + 1;
	min = n1;}

	int[] c =new int[n3];
	int sum;
	int i = n1-1;
        int j = n2-1;
        int k = n3-1;
 
       while(i>=0 && j>=0){
	    sum = arr1[i] + arr2[j];
            i--;j--;
	    c[k] = sum;
	    }
     
	while(i>=0){
	   sum = arr1[i];
           
	    i--;
        
	}
	 while(j >= 0){    
            sum  = arr2[j];
           
            
       
            j--;
        }
System.out.println("("+ c[k] + ")");
}
}
