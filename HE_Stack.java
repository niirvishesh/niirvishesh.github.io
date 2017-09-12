import java.util.*;
class TestClass 
{
    public static void main(String args[] )
    {
 
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Stack<Integer> s=new Stack<>();
        int[] a=new int[N];
        for(int i=0;i<N;i++)
        {
            a[i]=sc.nextInt();
        }
        int Q=sc.nextInt();
        int X=sc.nextInt();
        int in=0,sum=0;
        for(int l=0;l<Q;l++)
        {
            String st=sc.next();
            if(st.equals("Harry"))
            {
                s.push(a[in]);
                sum+=a[in];
                in++;          
            }
            if(st.equals("Remove"))
            {
                int x=s.pop();
                sum=sum-x;
            }
            
            if(sum==X)
            {
                System.out.println(s.size());
                break;
            }
            
        }
        if(sum!=X)
            System.out.println(-1);
    }
}
