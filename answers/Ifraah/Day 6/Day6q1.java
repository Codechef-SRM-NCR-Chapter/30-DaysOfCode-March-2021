import java.util.Scanner;
class Day6q1{
   public static void main(String[] args){
     System.out.println("Enter the no. of elements:");
         Scanner scan = new Scanner(System.in);
         int n = scan.nextInt();  
         int candies[] = new int[n] ;
         System.out.println("Enter the candies:"); 
         for(int i=0; i<n; i++)
         {
         candies[i] = scan.nextInt(); 
         } 
          for(int i=0; i<n; i++)
         {
         System.out.println(candies[i]); 
         }    

System.out.println("Enter the no. of extra candies: ");
int extra = scan.nextInt();
int max;
max = candies[0];
for(int i=0; i<n;i++){
if(max < candies[i]){
max = candies[i];
}
Boolean[] b = new Boolean[n]; 
for(i=0; i<n; i++)
    {
      if((candies[i]+extra)>=max){
      b[i] = true;
}
      else if((candies[i]+extra)<=max){
      b[i] = false;
}
}

for(i=0; i<n; i++)
         {
System.out.println(b[i]);
}
}
}
}




