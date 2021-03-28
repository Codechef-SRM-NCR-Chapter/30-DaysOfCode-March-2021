import java.util.*;
class Question_1
{
    static Scanner sc = new Scanner(System.in);
    static boolean hasArrayTwoCandidates(int Arr[], int arr_size, int sum)
    {
        int l, r;
        Arrays.sort(Arr);
        l = 0;
        r = arr_size - 1;
        while (l < r) {
            if (Arr[l] + Arr[r] == sum)
                return true;
            else if (Arr[l] + Arr[r] < sum)
                l++;
            else
                r--;
        }
        return false;
    }
    void ifhasArrayTwoCandidates(int Arr[], int arr_size, int sum)
    {
        int l, r;
        Arrays.sort(Arr);
        l = 0;
        r = arr_size - 1;
        while (l < r) {
            if (Arr[l] + Arr[r] == sum)
            {
                System.out.print("At indices : " + l + ", " + r);
                break;
            }
            else if (Arr[l] + Arr[r] < sum)
                l++;
            else
                r--;
        }

    }
    public static void main(String args[])
    {
        Question_1 obj = new Question_1();
        System.out.print("Enter the length of the array : ");
        int l = sc.nextInt();
        int nums[]=new int[l];
        System.out.println("Enter the array elements : ");
        for(int i=0;i<l;i++)
        {
            System.out.print("Enter the element no. "+(i+1)+" ");
            nums[i]=sc.nextInt();
        }
        System.out.print("Enter the target integer ");
        int n = sc.nextInt();
        if (hasArrayTwoCandidates(nums, l, n))
        {
            System.out.println("Array has two elements with given sum");
            obj.ifhasArrayTwoCandidates(nums, l, n);
        }
        else
            System.out.println("Array doesn't have two elements with given sum");
    }
}
