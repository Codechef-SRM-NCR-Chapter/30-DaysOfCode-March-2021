import java.util.*;
class Question_2
{
    static Scanner sc= new Scanner(System.in);
    static int arr[];
    static int n;
    static int a;
    static int b;
    static int c;

    public static void main(String args[])
    {
        System.out.println("Enter the array length ");
        n= sc.nextInt();
        arr= new int[n];
        System.out.println("Enter the array \n");
        for(int i=0;i<n;i++)
        {
            System.out.println("Enter the element no. "+(i+1));
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter A ");
        a= sc.nextInt();
        System.out.println("Enter B ");
        b= sc.nextInt();
        System.out.println("Enter C ");
        c= sc.nextInt();

        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(Math.abs(arr[i]-arr[j])>a){
                    continue;
                }
                for(int k=j+1;k<n;k++){
                    if(
                            (Math.abs(arr[j]-arr[k])<=b)&&
                                    (Math.abs(arr[i]-arr[k])<=c)
                    )
                    {
                        count++;
                    }
                }
            }
        }
        System.out.println("The good triplets are "+count+ " in number");
    }

}
