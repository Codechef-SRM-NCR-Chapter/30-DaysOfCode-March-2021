import java.util.Scanner;
class Question_2
{
    public static boolean isUniqueNumber(int no)
    {
        int d = countDigits(no);
        int[] arr = new int[d];
        for(int i=0; i<d; i++)
        {
            arr[i] = (int)no%10;
            no = no/10;
        }
        for(int i=0; i<d; i++)
        {
            for(int j=0; j<d; j++)
            {
                if(i!=j && arr[i]==arr[j])
                    return false;
            }
        }
        return true;
    }
    public static int countDigits(int no)
    {
        int c = 0;
        while(no != 0)
        {
            c++;
            no= no/10;
        }
        return c;
    }
    public static void main(String args[])
    {
        int no = 0;
        boolean result = false;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number you want to check: ");
        no = scan.nextInt();
        result = isUniqueNumber(no);
        if(result)
            System.out.println(no +" is a unique number.");
        else
            System.out.println(no +" is not a unique number.");
    }
}
