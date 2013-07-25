
<%@page import="com.sun.xml.internal.txw2.Document,com.harshit.search.Recommendation,java.util.*,com.harshit.index.MovieInfo" %>

<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" %>
  
<! DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<link href="templatemo_style.css" rel="stylesheet" type="text/css" /> 



  <%
  int temp,temp1;
   	String userId=(String)session.getAttribute("userID");
   	String []trailer =new String[4];
     String []movie=new String[4];
     String []actor=new String[4];
     String []gen=new  String[4];
     String []poster=new String[4];
     String []id=new String[4];
     String movieId=(String)session.getAttribute("movieID");
     
     int i=0;
     HashMap<String,MovieInfo> recommend = null;



   	if (userId != null && movie != null){
   		recommend = new HashMap<String,MovieInfo>();
   		recommend=Recommendation.getRecommendation(movieId, userId);
   	}
   	
      
   	
if (recommend != null && !recommend.isEmpty() && recommend.size() >0){
  for (String name : recommend.keySet()) {
     	  
     	  movie[i]=recommend.get(name).getMovieName();
     	   actor[i]=recommend.get(name).getActors();
     	  trailer[i]=recommend.get(name).getTrailerID();
     	   gen[i]=recommend.get(name).getGenres();
     	   poster[i]=recommend.get(name).getPosterURL();
     	   id[i]=recommend.get(name).getMovieId();
     	   System.out.println(poster[i]);
     	 i++;
     	 if(i==4)
     		 break;
     		  
     		  
     }
     for(i=0;i<4;i++)
    		
     {
    		if(actor[i]!=null)
    		{
    	 temp=actor[i].indexOf(',');
    	 if(temp==-1)
    		 continue;
    	 actor[i]=actor[i].substring(0, temp);
    		}
    	 if(gen[i]!=null)
    	 {	temp1=gen[i].indexOf(',');
    	 if(temp1==-1)
    		 continue;
    	 gen[i]=gen[i].substring(0,temp1);
    	 }
    	 if(poster[i].length()<5)
    	 {
    		 poster[i]="images/no_image.jpg";
    	 }
    	 }	
}
   
   %>
    

</head>
<body>

					<div class="column_w190 fl margin_right_40">
					<img width=180px height=115px; id="video1" src="<%=poster[0]%> " 
						alt="" onclick="return myFunction1('<%=id[0]%>','<%=trailer[0]%>');"/>

  
 <table >
	<tr valign="top">
		<td>Movie:</td>
	<td>	<%=movie[0] %> </td>	
	
	
	</tr>
		<tr valign="top">	
		<td>Actors:</td>
	<td>	<%=actor[0] %> </td>	
	
	</tr>
		<tr valign="top">
		<td>Genres:</td>
	<td>	<%=gen[0] %> </td>	
	
	
	</tr>
</table> 

						

					
					</div>

					<div class="column_w190 fl margin_right_40">
						<img width=180px; height=115px; id="video2" src="<%=poster[1] %>" 
						alt="" onclick="return myFunction1('<%=id[1]%>','<%=trailer[1]%>');"/>
 <table >
	<tr valign="top">
		<td>Movie :</td>
	<td>	<%=movie[1] %> </td>	
	
	
	</tr>
			<tr valign="top">	
		<td>Actors:</td>
	<td>	<%=actor[1] %> </td>	
	
	</tr>
		<tr valign="top">
		<td>Genres:</td>
	<td>	<%=gen[1] %> </td>	
	
	
	</tr>
</table> 

						 

					</div>

					<div class="column_w190 fl margin_right_40">
						<img width=180px; height=115px; id="video3" src="<%=poster[2] %> "
						 alt="" onclick="return myFunction1('<%=id[2]%>','<%=trailer[2]%>');"/>
						
 <table >
	<tr >
		<td>Movie :</td>
	<td>	<%=movie[2] %> </td>	
	
	
	</tr>
			<tr >	
		<td >Actors:</td>
	<td>	<%=actor[2] %> </td>	
	
	</tr>
		<tr >
		<td >Genres:</td>
	<td>	<%=gen[2] %> </td>	
	
	
	</tr>
</table> 

					</div>

					<div class="column_w190 fl" style="width:180px ; height:115px;" >
					<img width=180px; height=115px; id="video4" src="<%=poster[3] %>" alt="" 
					onclick="return myFunction1('<%=id[3]%>','<%=trailer[3]%>');"/>
	
 <table >
	<tr valign="top">
		<td>Movie :</td>
	<td>	<%=movie[3] %> </td>	
	
	
	</tr>
			<tr valign="top">	
		<td>Actors:</td>
	<td>	<%=actor[3] %> </td>	
	
	</tr>
		<tr valign="top">
		<td>Genres:</td>
	<td>	<%=gen[3] %> </td>	
	
	
	</tr>
</table> 

				</div>


				


</body>
</html>