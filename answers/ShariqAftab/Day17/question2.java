class SubArray2
{
    public static void printAllSubarrays(int[] arr)
    {
        for (int i = 0; i < arr.length; i++)
        {
            int sum = 0;
            for (int j = i; j < arr.length; j++)
            {
                sum += arr[j];
                if (sum == 0) {
                    System.out.println("Subarray from index : [" + i + "…" + j + "]");
                }
            }
        }
    }
 
    public static void main (String[] args)
    {
        int[] num = { 6,-1,-3,4,-2,2,4,6,-12,-7};
 
        printAllSubarrays(num);
    }
}
