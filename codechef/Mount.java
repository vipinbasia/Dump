import java.util.*;
    import java.io.*;
    class Mount
    {
    	public static void main(String st[])throws IOException
    	{
    		int i,j,p,q,flag=0,count=0;
    		BufferedReader I=new BufferedReader(new InputStreamReader(System.in));
    		long t = Integer.parseInt(I.readLine());
    		while(t>0)
    		{
    			long n = Integer.parseInt(I.readLine());
    			long temp[]=new long[100010];
    			
    			String str=I.readLine();
    			//int value[]=new int[100010];
    			String arr[]=str.split(" ");
    			List<Long> ls = new ArrayList<Long>();
    			List<Long> ls1 = new ArrayList<Long>();
    			List<Long> ls2 = new ArrayList<Long>();
    			List<Integer> ls3 = new ArrayList<Integer>();
    			for(i=0;i<n;i++)
    			{
    				long k = Long.parseLong(arr[i]);
    				temp[i]=k;
    			}
    			ls.clear();
    			count=0;
    			for(i=0;i<n-1;i++)
    			{
    				long val=0;
    					
    					val=temp[i+1]-temp[i];
    					
    					ls.add(val);
    					//System.out.println(val);
    				
    			}
    			long k=1;
    			
    				
    					for(i=0;(k)<n;k++)
    					{
    						ls3.clear();
    						for(j=i;j<n-k;j++)
    						{	
    							//System.out.println(ls3.indexOf(j) + " " + j);
    							if((ls3.indexOf(j))!=-1)
    							continue;
    							
    							ls1.clear();
    							
    							for(p=j;p<(j+k);p++)
    							{
    								
    								ls1.add(ls.get(p));
    								flag=0;
    							}
    							for(q=0;q<(n-k);q++)
    							{
    								ls2.clear();
    								for(p=q;p<(q+k);p++)
    								{
    									ls2.add(ls.get(p));
    								}
    								
    								if(ls1.equals(ls2))
    								{	
    									//System.out.println(ls1.equals(ls2)+ " " + q);
    									ls3.add(q);
    									continue;
    								}
    								else
    								{	
    									flag=1;
    									
    								}
    								
    							}
    							if(flag==1)
    							{
    								
    								count++;	
    							}
    							else
    							{
    									
    								count++;
    								break;
    									
    							}			
    						}
    						
    					}
    					
    				System.out.println(count);
    				
   
    			t--;
    		}
    }
    
    } 
