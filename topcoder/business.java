import java.util.*;
public class BusinessTasks
{
	public String  getTask(String [] list,int n)
	{
		String last;
		int length=list.length();
		int count=0;
		while(n>length)
		{
			n-=length;
		}
		int j=n;
		while(length>1)
		{
			for(int i=j-1;i<(length-1);i++)
			{
				list[i]=list[i+1];
			}
			list[i]="\0";
			length-=1;
			j+=j;
			while(j>length)
			{
			j-=length;
			}
		}
		last=list[0];
		
		return last;
	}
}
