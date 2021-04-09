import java.util.Scanner;
class Day10q1{
   public static void main (String[] args){
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter a string: ");
       String s = sc.nextLine();
       boolean[] b = new boolean[26];
       int x  = 0;
       int y =1;
       for(int i=0; i<s.length(); i++){
           if(s.charAt(i) >= 'A' && s.charAt(i) <= 'Z'){
               x = s.charAt(i) - 'A';
            }else if(s.charAt(i) >= 'a' &&s.charAt(i) <= 'z'){
               x = s.charAt(i) - 'a';
             }
           b[x] = true;
     }
for(int i=0; i<=25; i++){
     if(b[i] == false)
       y=0;
}
if(y == 1)
System.out.println("\n Pangram exists");
else
System.out.println("\n Pangram does not exist");
}
}
       