import java.util.Scanner;
class Day10q2{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter any string :");
        String str = s.nextLine();
        int x=0;
for(int i=0; i<str.length(); i++){
if(str.charAt(i)>=65 && str.charAt(i)<=90){
System.out.println(str.charAt(i));
x++;
}
else
System.out.print(str.charAt(i));
}
System.out.print(x);
    }
}