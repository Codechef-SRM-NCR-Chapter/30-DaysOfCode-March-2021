import java.util.*;
public class ArrrQ2 {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayList<Integer> arr=new ArrayList<Integer>();
        System.out.println("Enter the size of number array:");
        int n=sc.nextInt();
        int num[]= new int[n];
        int i;
        System.out.println("Enter the elements in the number array:");
        for(i=0;i<n;i++)
        {
            num[i]=sc.nextInt();
        }
        System.out.println("Enter the size of index array:");
        int ind=sc.nextInt();
        int index[]= new int[ind];
        System.out.println("Enter the elements in the index array:");
        for(int j=0;j<ind;j++)
        {
            index[j]=sc.nextInt();
        }
        
        for(int k=0;k<Math.max(n,ind);k++)
        {
            int val=num[k];
            arr.add(index[k], val);
        }
        System.out.println("Output Array:");
        for(int j : arr)
        {
            System.out.print(j+",");
        }

    }
}
