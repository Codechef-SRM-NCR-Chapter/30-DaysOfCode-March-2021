import java.util.*;
class Question_1
{
    Scanner sc = new Scanner(System.in);
    static int n;
    static int candies[];
    static int candies_wyt_extra[];
    static boolean grtornot[];

    static int extracandies;
    void get_value()
    {
        System.out.print("Enter the no. of students : ");
        n=sc.nextInt();
        candies = new int[n];
        candies_wyt_extra = new int[n];
        grtornot = new boolean[n];
        System.out.println("Enter the no. of candies each would get \n");
        for(int i = 0;i<n;i++)
        {
            System.out.print("Enter the no. of candies for kid no. " + (i+1)+" ");
            candies[i]= sc.nextInt();
        }
        System.out.println("Enter the no. of extra candies ");
        extracandies = sc.nextInt();

    }
    public static int getLargest(int[] a, int arlen)
    {
        int temp;
        for (int i = 0; i < arlen; i++)
        {
            for (int j = i + 1; j < arlen; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        return a[arlen-1];
    }
    public static void main(String args[])
    {
        Question_12 obj = new Question_12();
        obj.get_value();
        for(int i = 0;i<n;i++)
        {
            candies_wyt_extra[i] = candies[i] + extracandies;
            if(candies_wyt_extra[i] == getLargest(candies_wyt_extra,n))
                grtornot[i]=true;
            else
                grtornot[i]=false;
        }
        System.out.print("[");
        for(int i = 0;i<n-1;i++)
            System.out.print(grtornot[i]+", ");
        System.out.print(grtornot[n-1]+"]");
    }
}
