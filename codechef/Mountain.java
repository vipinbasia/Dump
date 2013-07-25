import java.util.*;
import java.io.*;
class Mountain
{
	public static void main(String st[])throws IOException
	{
		int i,j;
		BufferedReader I=new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(I.readLine());
		long temp[]=new long[n];
		//String str=new String[300000];
		String str=I.readLine();
		//String arr=new String[300000];
		String arr[]=str.split(" ");
		// List<Long> l=new ArrayList<Long>();
		 HashSet<Long> hs = new HashSet<Long>();
		for(i=0;i<n;i++)
		{
			
			long k = Long.parseLong(arr[i]);
			temp[i]=k;
		}
		
		
		for(i=0;i<n;i++)
		{	
			long val=0;
			for(j=i;j<n;j++)
			{
			val+=temp[j];
			//System.out.println(val);
			hs.add(val);
			}
		}
		//hs.addAll(l);
			//l.clear();
			 //l.addAll(hs);
			long row=hs.size();
			System.out.println(row-1);
			
	}
}
