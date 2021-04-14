import java.util.*;
class ques1d28
{
    static boolean part(int a[],int sum,int i,ArrayList<Integer> ans)
    {
        if(i>=a.length || sum<0)
        return false;
        if(sum==0)
        return true;
        ans.add(a[i]);
        if(part(a,sum-a[i],i+1,ans))
        return true;
        ans.remove(ans.size()-1);
        return part(a,sum,i+1,ans);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("INPUT");
        System.out.print("Enter a integer n : ");
        int n=sc.nextInt();
        int a[]=new int[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            a[i]=i+1;
            sum=sum+a[i];
        }
        ArrayList<Integer> ans=new ArrayList<Integer>();
        ArrayList<Integer> ans2=new ArrayList<Integer>();
        if(sum%2!=0)
        System.out.println("NO");
        else if(part(a,sum/2,0,ans))
        {
            for(int i=0;i<n;i++)
            {
                if(ans.contains(a[i]))
                continue;
                else
                ans2.add(a[i]);
            }
            System.out.println("YES");
            System.out.println(ans.size());
            System.out.println(ans);
            System.out.println(ans2.size());
            System.out.println(ans2);
        }
        else
        System.out.println("NO");
    }
}
