import java.util.*;
class ques2d27
{
    static int count(String s,int i,int c,int l)
    {
        if(i==l)
        return c;
        else if(s.charAt(i)=='a')
        return count(s,i+1,c+1,l);
        else
        return count(s,i+1,c,l);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("INPUT : ");
        System.out.print("Enter string to repeat : ");
        String s=sc.nextLine();
        System.out.print("Enter no. of character to consider : ");
        int l=sc.nextInt();
        while(s.length()<l)
        s=s+s;
        System.out.println("OUTPUT : ");
        System.out.print(count(s,0,0,l));
    }
}
