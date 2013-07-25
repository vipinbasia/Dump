import java.util.*;
public class BusinessTask
{

	public static String  getTask(String [] list,int n)
	{
		String last;
		int length=list.length;
		int count=0;
		int temp=n;
		
		
		int i,j=temp;
		while(length>1)
		{
		
			while(j>length)
			{
			j-=length;
			}
		System.out.println(list[j-1]+"\n");
			for( i=j-1;i<(length-1);i++)
			{
				list[i]=list[i+1];
			}
			list[i]="\0";
			length-=1;
			j+=(temp-1);
		}
		last=list[0];
		
		return last;
	}

}
	public static void main(String arg[])
	{
		String list[]=	{"zlqamum", "yjsrpybmq", "tjllfea", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};	
		String str=getTask(list,9000000);
		System.out.println(str);
	}

}




