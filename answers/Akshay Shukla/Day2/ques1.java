import java.util.*;
class ques1d2
{
    public static void main(String main[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter no. to be checked");
        String str=s.next();
        int n=Integer.valueOf(str);
        int l=str.length(),sum=0;
        for(int i=0;i<l;i++)
        {
            String h=""+str.charAt(i);
            sum=sum+(int)Math.pow(Integer.valueOf(h),i+1);
        }
        if(n==sum)
        System.out.println(n+" is a disarium number");
        else
        System.out.println(n+" is not a disarium number");
    }
}
