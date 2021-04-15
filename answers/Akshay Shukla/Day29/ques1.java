import java.util.*;
class ques1d29
{
    static void permu(int l,int r,int a[],ArrayList<String> res)
    {
        if(l==r)
        {
            res.add(Arrays.toString(a));
            return;
        }
        for(int i=l;i<=r;i++)
        {
            change(l,i,a);
            permu(l+1,r,a,res);
            change(l,i,a);
        }
    }
    static void change(int l,int r,int a[])
    {
        int t=a[l];
        a[l]=a[r];
        a[r]=t;
    }
    static boolean check(int a[],int b[],int x,int i)
    {
        
        if(i==a.length)
        return true;
        if((a[i]+b[i])>x)
        return false;
        else
        return check(a,b,x,i+1);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("INPUT");
        int t=sc.nextInt();
        int[] n=new int[t];
        int[] x=new int[t];
        ArrayList<String> res=new ArrayList<String>();
        ArrayList<String> ans=new ArrayList<String>();
        for(int i=0;i<t;i++)
        {
            n[i]=sc.nextInt();
            x[i]=sc.nextInt();
            int a[]=new int[n[i]];
            int b[]=new int[n[i]];
            for(int j=0;j<n[i];j++)
            a[j]=sc.nextInt();
            for(int j=0;j<n[i];j++)
            b[j]=sc.nextInt();
            permu(0,a.length-1,a,res);
            int j=0;
            for(j=0;j<res.size();j++)
            {
                String s=res.get(j);
                s=s.substring(1,s.length()-1);
                String str[]=s.split(", ");
                for(int k=0;k<str.length;k++)
                a[k]=Integer.valueOf(str[k]);
                if(check(a,b,x[i],0))
                {
                    ans.add("YES");
                    break;
                }
            }
            if(j==res.size())
            ans.add("NO");
            System.out.println();
        }
        System.out.println("OUTPUT");
        for(int i=0;i<t;i++)
        System.out.println(ans.get(i));
    }
}
