import java.util.*;
public class HashUnique
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        HashMap<Integer,Boolean> map=new HashMap<>();
        int n=sc.nextInt();
        int c=n;
        ArrayList<Integer> arr=new ArrayList<>();
        while(c!=0)
        {
            arr.add(c%10);
            c/=10;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(map.containsKey(arr.get(i)))
            {
                System.out.println("Not a unique number");
                return;
            }
            map.put(arr.get(i),true);
        }
        System.out.println("It is a unique number");
    }
}
