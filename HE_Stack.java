import java.util.*;
class Solution
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		System.out.print("No of coins: ");
		int n = in.nextInt(),sum=0;
		Integer ar[] = new Integer[n];
		Stack<Integer> a = new Stack<Integer>();
		Stack<Integer> b = new Stack<Integer>();
		System.out.println("Enter gold coins:");
		for(int i=0;i<n;i++)
		{
			a.push(ar[i]=in.nextInt());
		}
		
		System.out.println("No. of Instructions: ");
		int ins = in.nextInt();
		System.out.println("Amount monk should have:");
		int at = in.nextInt();
		
		System.out.println("Enter the instructions:");
		ArrayList<String> str = new ArrayList<>();
		for(int i=0;i<ins;i++)
		{
			str.add(in.next());
		}	
		for(String name : str)
		{
			if(name.equals("Harry"))
				sum+=b.push(a.pop());
			if(name.equals("Remove"))
				sum-=b.pop();
		}
		
		if(sum==at)
			System.out.println(b.size());
		else
			System.out.println("-1");
	}
}
