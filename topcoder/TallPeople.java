import java.util.*;
public class TallPeople
{
	
	public  int[] getPeople(String[] people)
	{
	int col;
	int rows=people.length;
	String str[];
	str=people[0].split(" ");
	col=str.length;
	int matrix[][]=new int[rows][col];
	int res[]=new int[2];
	
	
	for(int i=0;i<rows;i++)
	{	
		str=people[i].split(" ");
		
		for(int j=0;j<col;j++)
		{
			
			
			
			
			matrix[i][j]=Integer.parseInt(str[j]);
			
			
			
			
		}
	}
		int max=0;
		for(int i=0;i<rows;i++)
		{
			int min=matrix[i][0];
			for(int j=0;j<col;j++)
			{
			if(matrix[i][j]<min)
				min=matrix[i][j];			
			
			}
			if(max<min)
				max=min;
		
		}
		res[0]=max;
		int min=1001;
		for(int i=0;i<col;i++)
		{
			 max=matrix[0][i];
			for(int j=0;j<rows;j++)
			{
			if(matrix[j][i]>max)
				max=matrix[j][i];			
			
			}
			if(min>max)
				min=max;
		
		}
		res[1]=min;
		
	return res;	
		
	}
	public static void main(String arg[])
	{
	String People[]={"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};

	int[] result=getPeople(People);
	System.out.println(result[0] +""+ result[1]);
		
	}
}
