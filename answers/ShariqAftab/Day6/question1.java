import java.util.*;
public class sumSub{
    public static void main(){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        int s=0;
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        for(int j=0;j<n;j++)
            s+=(((j+1)*(n-j)+1)/2)*arr[j];
            System.out.println("Sum = "+s);
    }    
}
