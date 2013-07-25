import java.util.*;
public class DeerInZooDivTwo
{
	public int[] getminmax(int N,int K)
	{
	int []max=new int[2];
	
	max[0]=(N-K);
	if(max[0]<0)
	max[0]=0;
	max[1]=(N-(K/2)-(K%2));
	if(max[1]<0)
	max[1]=0;
	return max;
	}
}
