import java.util.*;
public class Question_1
{
    Scanner sc = new Scanner(System.in);
    static int nums[];
    static int n;
    static int frq[];
    static int sum;

    void get_value()
    {
        System.out.print("Enter the length of the array : ");
        n=sc.nextInt();
        nums = new int[n];
        System.out.println("Enter the values for the array \n");
        for(int i = 0;i<n;i++)
        {
            System.out.println("Enter element no."+(i+1));
            nums[i]=sc.nextInt();
        }
    }
    void freq()
    {
        frq=new int[n];
        int v=-1;
        for(int i=0;i<n;i++) {
            int c = 1;
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    c++;
                    frq[j] = v;
                }
            }
            if (frq[i] != v)
                frq[i] = c;

        }
        for(int i = 0;i<n;i++)
        {
            if(frq[i]!=v)
            {
                if(frq[i]==1)
                    sum+= nums[i];
            }

        }
        System.out.print("The sum of Unique no.s is "+sum);
    }
    public static void main(String args[])
    {
        Question_15 obj =new Question_15();
        obj.get_value();
        obj.freq();
    }
}
