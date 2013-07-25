import java.util.*;
public class MedalTable
{
	public static String[] generate(String[] results)
	{
		int length=results.length;
		String split[];
		String medal[]=null;
		 List<String> l=new ArrayList<String>();
		 HashSet<String> hs = new HashSet<String>();
		
		for(int i=0;i<length;i++)
			{
			split=results[i].split(" ");
			
			for(int j=0;j<3;j++)
				{
				l.add(split[j]);
				}
			}
		
			hs.addAll(l);
			l.clear();
			l.addAll(hs);
			int row=l.size();
			int telly[][]=new int[row][4];
			
			
				for(int i=0;i<length;i++)
				{
					split=results[i].split(" ");
			
					for(int j=0;j<3;j++)
					{
						int index=l.indexOf(split[j]);
						telly[index][j+1]+=1;
						telly[index][0]=index;
						
					}
				}
			
		final	Comparator<int[]> arrayComparator = new Comparator<int[]>()
		 {
       	 		@Override
        		public int compare(int[] o1, int[] o2)
        	 	{
            			int value=o2[1]-o1[1];
            			if(value==0)
            			{
            				value=o2[2]-o1[2];
            					if(value==0)
            					{
            						value=o2[3]-o1[3];
            					}
            			}
            			return value;
        		}
    		};
    		Arrays.sort(telly, arrayComparator);
    		
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<4;j++)
				{
					System.out.print(telly[i][j]);
				}
				System.out.println();
			}	
			
			
	return medal;
	}
	public static void main(String str[])
	{
	String[] results={"ITA JPN AUS", "KOR TPE UKR", "KOR KOR GBR", "KOR CHN TPE"};
	String[] show=generate(results);
	}
}
