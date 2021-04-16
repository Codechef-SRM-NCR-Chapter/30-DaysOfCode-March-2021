import java.util.*;
class shaurya
{
    // static int n;
    static boolean tekken[];
    static boolean tekken2[];

static boolean isKPartitionPossibleRec(int arr[], int subsetSum[], boolean taken[],
                int subset, int K, int N, int curIdx, int limitIdx)
{
	if (subsetSum[curIdx] == subset)
	{
		if (curIdx == K - 2)
        {
            tekken2=tekken;
			return true;
        }
		return isKPartitionPossibleRec(arr, subsetSum, taken, subset,
											K, N, curIdx + 1, N - 1);
	}
	for (int i = limitIdx; i >= 0; i--)
	{
		if (taken[i])
			continue;
		int tmp = subsetSum[curIdx] + arr[i];
		if (tmp <= subset)
		{
			taken[i] = true;
            tekken[i]=true;
			subsetSum[curIdx] += arr[i];
			boolean nxt = isKPartitionPossibleRec(arr, subsetSum, taken,
											subset, K, N, curIdx, i - 1);
			taken[i] = false;
            tekken[i]=false;
			subsetSum[curIdx] -= arr[i];
			if (nxt)
				return true;
		}
	}
	return false;
}
static boolean isKPartitionPossible(int arr[], int N, int K)
{
	if (K == 1)
		return true;
	if (N < K)
		return false;
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += arr[i];
	if (sum % K != 0)
		return false;
	int subset = sum / K;
	int []subsetSum = new int[K];
	boolean []taken = new boolean[N];
	for (int i = 0; i < K; i++)
		subsetSum[i] = 0;
	for (int i = 0; i < N; i++)
		taken[i] = false;
	subsetSum[0] = arr[N - 1];
	taken[N - 1] = true;
    tekken=new boolean[N];
	return isKPartitionPossibleRec(arr, subsetSum, taken,
									subset, K, N, 0, N - 1);
}
public static void main(String[] args)
{
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int arr[] = new int[n];
    for(int aa=0;aa<n;aa++)
    arr[aa]=aa+1;
	int N = arr.length;
	int K = 2;
    
	if (isKPartitionPossible(arr, N, K))
		System.out.println("Partitions into equal sum is possible.");
	else
		System.out.println("Partitions into equal sum is not possible.");

    //for(int x=0;x<tekken2.length;x++)
    //System.out.println(tekken2[x]);
}
}
