import java.util.*;
class shaurya
{
	public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number of test cases");
        int test=sc.nextInt();
        int x,y,z,c=0,count=0;
        int[] answer=new int[0];
        for(x=0;x<test;x++)
        {
            answer=Arrays.copyOf(answer,answer.length + 1);
            int a=sc.nextInt();
            String s=sc.next();
            String s1,s2;
            for(y=0;y<s.length();y++)
            {
                // if(s.charAt(y)=='1')
                // count++;
                for(z=y+1;z<=s.length();z++)
                {
                    s1=s.substring(y,z);
                    // System.out.println(s1);
                    if((s1.charAt(0)=='1' && s1.charAt(s1.length()-1)=='1'))
                    {
                        count++;
                        answer[c]=count;
                    }
                }
            }
            count=0;
            c++;
        }
        for(x=0;x<answer.length;x++)
            System.out.println(answer[x]);
    }
}
