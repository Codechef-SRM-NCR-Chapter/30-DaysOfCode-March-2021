import java.util.*;
class ques2d28
{
    static boolean peak(int p,int a[])
    {
        int m=0;
        if(p==0)
        return true;
        for(int i=1;i<a.length-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            m++;
        }
        if(m==p)
            return true;
        else
            return false;
    }
    static void permu(int l,int r,int a[],int p,ArrayList<String> ans)
    {
        if(l==r)
        {
            if(peak(p,a))
            ans.add(Arrays.toString(a));
            else
            ans.add("-1");
            return ;
        }
        for(int i=l;i<=r;i++)
        {
            change(l,i,a);
            permu(l+1,r,a,p,ans);
            change(l,i,a);
        }
    }
    static void change(int l,int r,int a[])
    {
        int t=a[l];
        a[l]=a[r];
        a[r]=t;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of test cases : ");
        int t=sc.nextInt();
        int l[]=new int[t];
        int p[]=new int[t];
        ArrayList<String> ans=new ArrayList<String>();
        System.out.println("Enter length of array and no. of peaks : ");
        for(int i=0;i<t;i++)
        {
            l[i]=sc.nextInt();
            p[i]=sc.nextInt();
        }
        for(int i=0;i<t;i++)
        {
            int a[]=new int[l[i]];
            for(int j=0;j<l[i];j++)
            a[j]=j+1;
            permu(0,a.length-1,a,p[i],ans);
            int k=0;
            for(k=0;k<ans.size();k++)
            {
                if(ans.get(k)!="-1")
                {
                    System.out.println(ans.get(k));
                    break;
                }
            }
            if(k==ans.size())
            System.out.println("-1");
            ans.clear();
        }
    }
}
