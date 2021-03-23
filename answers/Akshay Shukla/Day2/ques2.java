import java.util.*;
class ques2d2
{
    static int s=0;
    static int rev(int num)
    {
        if(num==0)
        return s;
        else
        {
            s=s*10+(num%10);
            return rev(num/10);
        }
    }
    static int isP(int num)
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            return 0;
        }
        return 1;
    }
    public static void main(String main[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. to be checked");
        int n=sc.nextInt();
        int n2=rev(n);
        if(isP(n)==1 && isP(n2)==1)
        System.out.println(n+" is a emirp number");
        else
        System.out.println(n+" is not a emirp number");
    }
}
