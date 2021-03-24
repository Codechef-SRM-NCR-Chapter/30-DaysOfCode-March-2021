import java.util.*;
class shaurya
{
    public static void main (String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of terms in NUMS array in the array");
        int n=sc.nextInt();
        int x,y,z;
        int[] nums=new int[n];
        for(x=0;x<n;x++)
        {
            System.out.println("enter value");
            nums[x]=sc.nextInt();
        }
        System.out.println("enter the number of terms in INDEX array in the array");
        int i =sc.nextInt();
        int[] index=new int[n];

        for(x=0;x<i;x++)
        {
            System.out.println("enter value");
            index[x]=sc.nextInt();
        }
        int[] target=new int[0];        
        for(x=0;x<i;x++)
        { 
            target = Arrays.copyOf(target, target.length + 1);
            if(index[x]==(target.length - 1))
            {
                target[index[x]]=nums[x];
            }
            if(index[x]<target.length-1)
            {
                for(y=target.length-1;y>index[x];y--)
                {
                    target[y]=target[y-1];
                }
                target[index[x]]=nums[x];
            }
            for (z=0;z<target.length;z++)
        {
        System.out.print(target[z]+"    ");
        }
        System.out.println();

        }

        System.out.println("The array is ");
        for (z=0;z<target.length;z++)
        {
        System.out.print(target[z]+"  ");
        }
        
    }
}      
