import java.util.*;
import java.io.*;
class tachstck
{
	public static void main(String arg[]) throws IOException
	{
		int i,k;
		long j,m,p,count=0;;
		BufferedReader I=new BufferedReader(new InputStreamReader(System.in));
		String str=I.readLine();
		String arr[]=str.split(" ");
		int n = Integer.parseInt(arr[0]);
		long d= Long.parseLong(arr[1]);
		List<Long> l=new ArrayList<Long>();
		for(i=0;i<n;i++)
		{
		p=Long.parseLong(I.readLine());
		l.add(p);
		}
		Collections.sort(l);
		//System.out.println(l);
		for(i=0;i<n-1;i++)
		{
			j=l.get(i);
			
			
				m=l.get(i+1);
				//System.out.println(m);
				if(m<=(j+d))
				{
					//System.out.println(m);	
					count++;
					i++;
					//l.remove(m);
					//System.out.println(l);
					
				}		
			
		}
		System.out.println(count);
	}
}
