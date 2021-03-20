public class Question_2
{
    public static void main(String args[])
    {
        int x=0;
        for(int i = 1;i<=4;i++)
        {
            for (int j = 1; j <= i; j++) {
                System.out.print(++x +" ");
            }
            System.out.println();
        }
    }
}
