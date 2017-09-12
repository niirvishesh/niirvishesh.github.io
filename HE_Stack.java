import java.util.*;
class Solution
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
				// 	No of coins: 
		int n = in.nextInt(),sum=0,flag=0;
		Integer ar[] = new Integer[n];
		Stack<Integer> a = new Stack<Integer>();
		Stack<Integer> b = new Stack<Integer>();
				// 	Enter gold coins: 
		for(int i=0;i<n;i++)
		{
			a.push(ar[i]=in.nextInt());
		}
		
				// 	No. of Instructions: 
		int ins = in.nextInt();
				// 	Amount monk should have:
		int at = in.nextInt();
				// 	Enter the instructions: 
		String str[] = new String[ins];
		for(int i=0;i<ins;i++)
		{
			str[i]=in.next();
		}
		
		aa:	
		for(int i=0;i<ins;i++)
		{
			if(str[i].equals("Harry"))
			{
				sum+=b.push(a.pop());
				if(sum==at)
				{
					flag=1; break aa;
				}
			}
			if(str[i].equals("Remove"))
			{
				sum-=b.pop();
				if(sum==at)
				{
					flag=1; break aa;
				}
			}
		}
		
		if(flag==1)
			System.out.println(b.size());
		else
			System.out.println("-1");
	}
}