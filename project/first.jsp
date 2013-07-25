
<%@page import="com.harshit.search.Recommender"%>
<%@page import="com.sun.xml.internal.txw2.Document,com.harshit.search.Recommendation,java.util.*,com.harshit.index.MovieInfo" %>
<%
int temp,temp1;

String userId=(String)request.getParameter("user");

session.setAttribute("userID",userId);
String []movie=new String[8];
String []actor=new String[8];
String []gen=new String[8];
String []poster=new String[8];
String []id =new String[8];
String []trail=new String[8];
int i=0;
HashMap<String,MovieInfo> theHashMap = null;
if (userId != null){
		theHashMap = new HashMap<String,MovieInfo>();
		theHashMap=Recommendation.getInitialRecommendation(userId);
	
	//	System.out.print(userId);
	}


if(theHashMap!=null && !(theHashMap.isEmpty()) && theHashMap.size()>0)
{
	
	for (String name : theHashMap.keySet()) {
	  
	  movie[i]=theHashMap.get(name).getMovieName();
	   actor[i]=theHashMap.get(name).getActors();
	  System.out.print(actor[i]);
	   gen[i]=theHashMap.get(name).getGenres();
	   poster[i]=theHashMap.get(name).getPosterURL();
	   id[i]=theHashMap.get(name).getMovieId();
	   trail[i]=theHashMap.get(name).getTrailerID();
	System.out.println("******"+theHashMap.get(name).getMovieId() +"****"+theHashMap.get(name).getMovieName());
	   i++;
	 if(i==8)
		 break;
}

for(i=0;i<8;i++)
	
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
 
 if(poster[i].length()<=3)
 {
	 poster[i]="images/no_image.jpg";
 }
 }
}
%>


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>n
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />

<link href="templatemo_style.css" rel="stylesheet" type="text/css" />
<script>

function myFunction1( val,val1)
{	document.test.trailer.value=val1;
	document.test.hidden.value=val;
	document.test.submit();
}


	


	
</script>


</head>

	<body>
	<form name="test" id="test" action="index.jsp">
		<div id="templatemo_container">
			<div id="templatemo_banner">
				<div id="logo"></div>


			</div>
<div id="template_container_vr">
			<input type="hidden" value="" name="hidden" id="hidden"/>
			

				

				<div id="recommend">

<div class="margin_bottom_20"></div>
					<div class="column_w190 fl margin_right_40">
					<input type="hidden" value="" name="trailer" id="trailer"/>
						<img width=180px height=115px; id="video1" src="<%=poster[0]%> "
						 alt=" image not available" onclick="return myFunction1('<%=id[0]%>','<%=trail[0]%>');"/>

  
 <table>
	<tr  valign="top">
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
						<img width=180px; height=115px; id="video2"  
						src="<%=poster[1] %>" 
						alt="image not available" onclick="return myFunction1('<%=id[1]%>','<%=trail[1]%>');"/>
 <table >
	<tr valign="top">
		<td>Movie :</td>
	<td>	<%=movie[1]%> </td>	
	
	
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
						 alt="" onclick="return myFunction1('<%=id[2]%>','<%=trail[2]%>');"/>
						
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
					<img width=180px; height=115px; id="video4" src="<%=poster[3] %>"
					 alt="" onclick="return myFunction1('<%=id[3]%>',,'<%=trail[3]%>');"/>
	
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


			</div> 
		



				
				<div class="margin_bottom_20"></div>

				<div id="recommend">


					<div class="column_w190 fl margin_right_40">
					
						<img width=180px height=115px; id="video1" src="<%=poster[4]%> "
						 alt="" onclick="return myFunction1('<%=id[4]%>'),'<%=trail[4]%>';"/>

  
 <table >
	<tr valign="top">
		<td>Movie:</td>
	<td>	<%=movie[4] %> </td>	
	
	
	</tr>
		<tr valign="top">	
		<td>Actors:</td>
	<td>	<%=actor[4] %> </td>	
	
	</tr>
		<tr valign="top">
		<td>Genres:</td>
	<td>	<%=gen[4] %> </td>	
	
	
	</tr>
</table> 

						

					
					</div>

					<div class="column_w190 fl margin_right_40">
						<img width=180px; height=115px; id="video2" src="<%=poster[5] %>" 
						alt="" onclick="return myFunction1('<%=id[5]%>','<%=trail[5]%>');"/>
 <table >
	<tr valign="top">
		<td>Movie :</td>
	<td>	<%=movie[5] %> </td>	
	
	
	</tr>
			<tr valign="top">	
		<td>Actors:</td>
	<td>	<%=actor[5] %> </td>	
	
	</tr>
		<tr valign="top">
		<td>Genres:</td>
	<td>	<%=gen[5] %> </td>	
	
	
	</tr>
</table> 

						 

					</div>

					<div class="column_w190 fl margin_right_40">
						<img width=180px; height=115px; id="video3" src="<%=poster[6] %> "
						 alt="" onclick="return myFunction1('<%=id[6]%>','<%=trail[6]%>');"/>
						
 <table >
	<tr >
		<td>Movie :</td>
	<td>	<%=movie[6] %> </td>	
	
	
	</tr>
			<tr >	
		<td >Actors:</td>
	<td>	<%=actor[6] %> </td>	
	
	</tr>
		<tr >
		<td >Genres:</td>
	<td>	<%=gen[6] %> </td>	
	
	
	</tr>
</table> 

					</div>

					<div class="column_w190 fl" style="width:180px ; height:115px;" >
					<img width=180px; height=115px; id="video4" src="<%=poster[7] %>" 
					alt="" onclick="return myFunction1('<%=id[7]%>','<%=trail[7]%>');"/>
	
 <table>
	<tr valign="top">
		<td>Movie :</td>
	<td>	<%=movie[7] %> </td>	
	
	
	</tr>
			<tr valign="top">	
		<td>Actors:</td>
	<td>	<%=actor[7] %> </td>	
	
	</tr>
		<tr valign="top">
		<td>Genres:</td>
	<td>	<%=gen[7] %> </td>	
	
	
	</tr>
</table> 

				</div>


			</div> 
		</div>

</div>
</form>
	</body>

</html>