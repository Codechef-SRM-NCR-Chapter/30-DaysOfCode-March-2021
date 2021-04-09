import java.util.*;
public class Question_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Sentence : ");
        String s = sc.nextLine();


        String[] arr= s.split(" ");
        String reverse="";
        for(int i=arr.length-1;i>=0;i--)
        {
            reverse+= ((reverse.equals(""))?"":" ")+arr[i];
        }
        System.out.println(reverse);

    }

}
